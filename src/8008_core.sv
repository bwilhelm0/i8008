`include "internal_defines.vh"

`default_nettype none

module 8008_core
  #(parameter WIDTH = 8,
              STACK_HEIGHT = 8)
  (input logic [WIDTH-1:0] D_in,
   input logic INTR, READY, clk1, clk2,
   output logic [WIDTH-1:0] D_out,
   output logic Sync,
   output state_t state);

  logic [WIDTH-1:0] bus;
  logic [WIDTH-1:0] instr;

  // // State logic
  cycle_t cycle;
  // state_t state;

  // Stabilize async inputs?? Maybe only need flip flop
  Stabilizer R (.D(READY), .clock(), .Q(Ready));
  Stabilizer I (.D(INTR), .clock(), .Q(Intr));

  // Shouldn't be a register, just a bus buffer
  // But since there's 8 ins and outs, use buffer for out
  Register #(.WIDTH) DBR (.D(bus), .Q(D_out), .clock(), .en(en_DBR), .clear(clr_DBR));  // Enable is tied to ready or a ctrl signal
  Register #(.WIDTH) IR (.D(bus), .Q(instr), .clock(), .en(en_IR), .clear(clr_IR));

  BusDriver #(.WIDTH) Adriver (.en(re_A), .data(A_out), .buff(A_in), .bus);
  BusDriver #(.WIDTH) Bdriver (.en(re_B), .data(B_out), .buff(B_in), .bus);
  Register #(.WIDTH) A (.D(A_in), .Q(A_out), .clock(), .en(we_A), .clear(clr_A));
  Register #(.WIDTH) B (.D(B_in), .Q(B_out), .clock(), .en(we_B), .clear(clr_B));

  BusDriver #(.WIDTH) ALUdriver (.en(re_ALU), .data(ALU_out), .buff('d0), .bus);
  ALU Unit (.A(A_out), .B(B_out), .alu_op(), .D(ALU_out), .flags(flag_in));
  Register #(.WIDTH($bits(flags_t))) flag_reg (.D(flag_in), .Q(flag_out), .clock(), .en(en_Flag), .clear(clr_Flag));

  Decoder Dec (.instr, .cycle);
  Timing_ctrl TC ();

  
  reg_file #(.WIDTH, .HEIGHT(7)) rf (.bus, .sel(sel_rf), .we(we_rf), .re(re_rf), .clk());

  Counter #(.WIDTH($clog2(STACK_HEIGHT))) (.en(en_SP), .clear(clr_SP), .load('d0), .up(inc_SP)), .clock(), .D('d0), .Q(sel_Stack));
  stack #(.WIDTH(14), .HEIGHT(STACK_HEIGHT)) Stack (.bus, .sel(sel_Stack), .we(we_Stack), .re(re_Stack), .clk(), .lower());

  fsm controller (.state, .cycle, .clk());
endmodule: 8008_core

module ALU
   #(parameter WIDTH = 8)
    (input logic [WIDTH-1:0] A, B,
     input alu_op_t alu_op,
     output logic [WIDTH-1:0] D,
     output flags_t flags);

    logic [WIDTH-1:0] add_tmp;
    logic [WIDTH-1:0] art_tmp;

    flags_t add_flags, art_flags;

    Adder add (.A, .B, .D(add_tmp), .flags(add_flags));
    Arithmetic art (.A, .B, .D(art_tmp), .flags(art_flags));

    // Choose output based on alu_op

endmodule: ALU

module Decoder
  (input logic clk, Ready, Intr, rst, CF, // CF condition failure
   input logic [7:0] instr,
   input cycle_t cycle,
   output logic [6:0] decoded,
   output ctrl_signals_t ctrl_signals,
   output instr_t op,
   output state_t state,
   output cycle_t cycle
   output cycle_ctrl_t cycle_ctrl);

  logic [1:0] D7_6 = instr[7:6];
  logic [2:0] D5_3 = instr[5:3];
  logic [2:0] D2_0 = instr[2:0];

  logic r1 = instr[5:3];
  logic r2 = instr[2:0];

  logic [2:0] DDD = instr[5:3];
  logic [2:0] SSS = instr[2:0];

  logic true_flag = instr[5];
  flags_t flags = instr[4:3];

  logic IO_instr = instr[0];
  logic [1:0] RR = instr[5:4];
  logic [2:0] MMM = instr[3:1];

  // TODO: Don't set a specific operation, set ctrl signals??
  // Nah, easier to set op for fsm
  always_comb begin
    next_cycle = cycle;
    unique case (D7_6) 
      LOAD: begin
        unique case (D5_3)
          // Perform load cases
          // Check first cases for halts
          Hi_MEM: begin 
            op = D2_0 == Lo_MEM ? HLT : LMr;
          end
          default: begin
            op = D2_0 == Lo_MEM ? LrM : Lr1r2;
          end
        endcase
      end
      ALU_IND_MEM: begin
        unique case (D5_3)
          ADx: op = Lo_MEM == D2_0 ? ADM : ADr;
          ACx: op = Lo_MEM == D2_0 ? ACM : ACr;
          SUx: op = Lo_MEM == D2_0 ? SUM : SUr;
          SBx: op = Lo_MEM == D2_0 ? SBM : SBr;
          NDx: op = Lo_MEM == D2_0 ? NDM : NDr;
          XRx: op = Lo_MEM == D2_0 ? XRM : XRr;
          ORx: op = Lo_MEM == D2_0 ? ORM : ORr;
          CPx: op = Lo_MEM == D2_0 ? CPM : CPr;
        endcase
      end
      IO_CTRL: begin
        unique case (D2_0)
          Lo_JMP: begin 
            op = JMP;
          end
          Lo_JXc: begin
            ctrl_signals.flags = flags;
            op = true_flag ? JTc : JFc;
          end
          Lo_CAL: begin 
            op = CAL;
          end
          Lo_CXc: begin
            ctrl_signals.flags = flags;
            op = true_flag ? CTc : CFc;
          end
          default: begin
            op = IO_instr ? (RR == 2'd0 ? INP : OUT) : INVALID;
          end
        endcase
      end
      IMM_MISC: begin
        unique case (D2_0)
          Lo_RST: begin 
            op = RST;
          end
          Lo_RXc: begin
            ctrl_signals.flags = flags;
            op = true_flag ? RTc : RFc;
          end
          Lo_RET: begin 
            op = RET;
          end
          Lo_INr: begin
            op = INr;
          end
          Lo_DCr: begin 
            op = DCr;
          end
          Lo_ROT: begin
            unique case (D5_3)
              Hi_RLC: op = RLC;
              Hi_RRC: op = RRC;
              Hi_RAL: op = RAL;
              Hi_RAR: op = RAR;
            endcase
          end
          Lo_ALU: begin 
            unique case (D5_3)
              ADx: op = ADI;
              ACx: op = ACI;
              SUx: op = SUI;
              SBx: op = SBI;
              NDx: op = NDI;
              XRx: op = XRI;
              ORx: op = ORI;
              CPx: op = CPI;
            endcase
          end
          Lo_LOAD: begin
            op = Hi_MEM == D5_3 ? LMI : LrI;
          end
        endcase
      end
    endcase
  end



  always_ff @(posedge clk, rst) begin
    if (rst) begin
      cycle <= CYCLE1;
      state <= T1;
    end
    else begin
      cycle <= next_cycle;
      state <= next_state;
    end
  end

endmodule: Decoder

module fsm
  (input logic clk, Ready, Intr, rst, CF, // CF condition failure
   output state_t state,
   output cycle_t cycle
   output cycle_ctrl_t cycle_ctrl);

  always_comb begin
    next_cycle = cycle;
    unique case (state) 
      T1: next_state = T2;
      T1I: next_state = T2;

      T2: next_state = Ready ? T3 : WAIT;
      WAIT: next_state = Ready ? T3 : WAIT;
      STOPPED: begin 
        next_state = Intr ? T1I : STOPPED;
      end

      T3: begin
        unique case (cycle) 
          CYCLE1: begin
            unique case (instr) 
              HLT: next_state = Intr ? T1I : STOPPED; 
              RET: begin
                if (CF) begin
                  next_cycle = CYCLE1;
                  next_state = T1;
                end 
                else begin
                  next_state = T4;
                end
              end
              LrM, ALUM, ALUI, INP, OUT, LrI, JMP, CAL: begin
                next_cycle = CYCLE2;
                next_state = T1;
              end
            endcase
          end
          CYCLE2: begin
            unique case (instr)
              OUT, LMr: begin
                next_cycle = CYCLE1;
                next_state = T1;
              end
              LMI, JMP, CAL: begin
                next_state = T1; 
                next_cycle = CYCLE3;
              end
              default: begin
                next_state = T4;
              end
            endcase
          end
          CYCLE3: begin
            unique case (instr) 
              LMI: begin 
                next_state = T1;
                next_cycle = CYCLE1;
              end
              JMP, CAL: begin
                if (CF) begin
                  next_state = T1;
                  next_cycle = CYCLE1;
                end
                else begin
                  next_state = T4;
                end
              end
              default: next_state = T4;
            endcase
          end
          default: next_state = T4;
        endcase
      end


      T4: begin
        if (cycle == CYCLE1 && instr == LMr) begin
          next_state = T1;
          next_cycle = CYCLE2;
        end
        else begin
          next_state = T5;
        end
      end

      T5: begin 
        next_state = T1;
        next_cycle = CYCLE1;
      end

      default: begin 
        next_state = T1;
        next_cycle = CYCLE1;
      end
    endcase
  end

  always_ff @(posedge clk, rst) begin
    if (rst) begin
      cycle <= CYCLE1;
      state <= T1;
    end
    else begin
      cycle <= next_cycle;
      state <= next_state;
    end
  end

endmodule: fsm


module fsm_decoder
  (input logic clk, Ready, Intr, rst, CF, // CF condition failure
   input logic [7:0] instr,
   output ctrl_signals_t ctrl_signals,
   output state_t state,
   output cycle_t cycle
   output cycle_ctrl_t cycle_ctrl);

   // TODO: Make sure all internal states are represented, 
   // How does T1I work? Why no PC increment?

   always_comb begin
    next_cycle = cycle;
      unique case (cycle)
        CYCLE1: begin
          unique case (state)
            T1: begin // INCR PC??
              next_state = T2;
            end
            T2: begin 
              next_state = T3;
            end
            T3: begin 
              unique case (instr) 
                HLT: next_state = Intr ? T1I : STOPPED;
                RET: begin
                  if (CF) begin
                    next_cycle = CYCLE1;
                    next_state = T1;
                  end 
                  else begin
                    next_state = T4;
                  end
                end
                LrM, ALUM, ALUI, INP, OUT, LrI, JMP, CAL: begin
                  next_cycle = CYCLE2;
                  next_state = T1;
                end
              endcase
            end
            T4: begin
              if (instr == LMr) begin
                next_state = T1;
                next_cycle = CYCLE2;
              end
              else begin
                next_state = T5;
              end
            end
            T5: begin 
              next_state = T1;
              next_cycle = CYCLE1;
            end
            default:
          endcase
         end
        CYCLE2: begin
          unique case (state)
            T1: begin 
              next_state = T2;
            end
            T2: begin 
              next_state = T3;
            end
            T3: begin 
              unique case (instr)
                OUT, LMr: begin
                  next_cycle = CYCLE1;
                  next_state = T1;
                end
                LMI, JMP, CAL: begin
                  next_state = T1; 
                  next_cycle = CYCLE3;
                end
                default: begin
                  next_state = T4;
              end
            endcase
            end
            T4: begin 
              next_state = T5;
            end
            T5: begin 
              next_state = T1;
              next_cycle = CYCLE1;
            end
            default:
          endcase
         end
        CYCLE3: begin
          unique case (state)
            T1: begin 
              next_state = T2;
            end
            T2: begin 
              next_state = T3;
            end
            T3: begin 
              unique case (instr) 
                LMI: begin 
                  next_state = T1;
                  next_cycle = CYCLE1;
                end
                JMP, CAL: begin
                  if (CF) begin
                    next_state = T1;
                    next_cycle = CYCLE1;
                  end
                  else begin
                    next_state = T4;
                  end
                end
                default: next_state = T4;
              endcase
            end
            T4: begin 
              next_state = T5;
            end
            T5: begin 
              next_state = T1;
              next_cycle = CYCLE1;
            end
            default:
          endcase
         end
        default: begin
        end
      endcase
   end


  always_ff @(posedge clk, posedge rst) begin
    if (rst) begin
      cycle <= CYCLE1;
      state <= T1;
    end
    else begin
      cycle <= next_cycle;
      state <= next_state;
    end
  end

endmodule: fsm_decoder

// Module for storing large amounts of information
module reg_file
#(parameter WIDTH = 8,
            HEIGHT = 8,
            SEL = $clog2(HEIGHT))
(inout tri [WIDTH-1:0] bus,
 input logic [SEL-1:0] sel,
 input logic we, re, clk);

  logic [WIDTH-1:0] rf[HEIGHT];
  logic [WIDTH-1:0] rs;

  assign bus = (re) ? rs: 'bz;

  always_ff @(posedge clock)
    if (we)
      rf[sel] <= bus;

  always_comb
    rs = rf[sel];

endmodule: reg_file

module stack
#(parameter WIDTH = 14,
            BUS_WIDTH = 8,
            HEIGHT = 8,
            SEL = $clog2(HEIGHT))
(inout tri [BUS_WIDTH-1:0] bus,
 input logic [SEL-1:0] sel,
 input logic we, re, clk, lower);

  logic [WIDTH-1:0] rf[HEIGHT];
  logic [WIDTH-1:0] rs;

  assign bus = (re) ? (lower ? rs[BUS_WIDTH-1:0] : {'d0, rs[WIDTH-1:BUS_WIDTH]}) : 'bz;

  always_ff @(posedge clock)
    if (we && lower)
      rf[sel][BUS_WIDTH-1:0] <= bus;
    else if (we && ~lower)
      rf[sel][WIDTH-1:BUS_WIDTH] <= bus[WIDTH-BUS_WIDTH-1:0];

  always_comb
    rs = rf[sel];

endmodule: stack

`default_nettype wire
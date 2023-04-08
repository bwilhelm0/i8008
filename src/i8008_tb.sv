// Runs i8008tests
module i8008_system();

  logic clk, rst;
  logic [11:0] chip_inputs, chip_outputs;
  logic [7:0] D_in, D_out;
  logic INTR, READY, Sync;
  state_t state;

  assign chip_outputs[7:0] = D_out;
  assign chip_outputs[8] = Sync;
  assign chip_outputs[11:9] = state;

  i8008_core #(.WIDTH(8), .STACK_HEIGHT(8)) DUT
    (.D_in(D_in), .INTR(INTR), .READY(READY), .clk, .rst,
     .D_out(D_out), .Sync(Sync), .state(state));

  initial begin
    clk = 0;
    forever #5 clk = ~clk;
  end

  logic [7:0] INSTR [3] = '{8'b00001000, 8'b00001001, 8'b11111111};

  initial begin
    $monitor($time,,
      "\nINPUTS: rst = %b, D_in = %b, intr = %b, ready = %b, \nOUTPUTS: Sync = %b, state = %s, \nD_out = %b:\n\tPC_out = %b, rf_out = %b, ALU_out = %b, flags = %b, A_out = %b, B_out = %b, DBR_out = %b\nSIGNALS: IR = %b, DBR.re = %b, DBR.we = %b, ALU_ctrl.arith_op = %b, rf_ctrl.sel = %d, rf_ctrl.we = %b, rf_ctrl.re = %b\n",
      rst, D_in, DUT.Intr, DUT.Ready, Sync, state.name, D_out, DUT.PC_out, DUT.rf_out, DUT.ALU_out, DUT.flags, DUT.A_out, DUT.B_out, DUT.DBR_out, DUT.Brain.instr, DUT.ctrl_signals.DBR.re, DUT.ctrl_signals.DBR.we, DUT.ctrl_signals.ALU.arith_op, DUT.ctrl_signals.rf_ctrl.sel, DUT.ctrl_signals.rf_ctrl.we, DUT.ctrl_signals.rf_ctrl.re);

    $display("Begin Test\n");
    rst <= 1;
    @(posedge clk)
    @(posedge clk)
    @(posedge clk)

    rst <= 0;
    INTR <= 0;
    READY <= 0;

    D_in <= 8'b00_001_000;
    @(posedge clk)

    READY <= 1;
    @(posedge clk)
    READY <= 0;

    @(posedge clk)
    @(posedge clk)
    @(posedge clk)

    for (logic [7:0] loop = 8'd0; loop < 8'd3;) begin
      // T1
      if (state == T1 || state == T1I) begin
        $display("RegDump:");
        for (logic [2:0] sel = 3'd0; sel < 3'd7; sel++) begin
          $display("\tREG_%d = %d, %b", sel, DUT.rf.rf[sel], DUT.rf.rf[sel]);
        end
        $display("");
        $display("PC_L = %d", D_out);
        @(posedge clk);
      end
      // T2
      else if (state == T2) begin
        $display("PC_H = %d", D_out);
        READY <= 1;
        D_in <= INSTR[loop];
        @(posedge clk);
        loop++;
      end
      // WAIT
      else if (state == WAIT) begin
        @(posedge clk);
      end
      // T3
      else if (state == T3) begin
        $display("Instr: %b", DUT.instr);
        READY <= 0;
        @(posedge clk);
      end
      // STOPPED
      else if (state == STOPPED) begin
        @(posedge clk);
        $finish;
      end
      // T4
      else if (state == T4) begin
        @(posedge clk);
      end
      // T5
      else if (state == T5) begin
        @(posedge clk);
      end
    end
    @(posedge clk)

    @(posedge clk)
    READY <= 1;
    @(posedge clk)
    READY <= 0;

    @(posedge clk)
    @(posedge clk)
    @(posedge clk)
    @(posedge clk)
    @(posedge clk)
    D_in <= 8'b11_111_111;
    @(posedge clk)
    READY <= 1;
    @(posedge clk)
    READY <= 0;
    @(posedge clk)
    @(posedge clk)
    @(posedge clk)
    @(posedge clk)
    @(posedge clk)

    $finish;
  end
endmodule: i8008_system

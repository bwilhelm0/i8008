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
  
  initial begin
    $monitor($time,,
      "\nINPUTS: rst = %b, D_in = %b, INTR = %b, READY = %b, \nOUTPUTS: Sync = %b, state = %b, \nD_out = %b:\n\tPC_out = %b, rf_out = %b, ALU_out = %b, flags = %b, A_out = %b, B_out = %b, DBR_out = %b\n",
      rst, D_in, INTR, READY, Sync, state, D_out, DUT.PC_out, DUT.rf_out, DUT.ALU_out, DUT.flags, DUT.A_out, DUT.B_out, DUT.DBR_out);

    rst <= 1;
    @(posedge clk)
    @(posedge clk)
    
    rst <= 0;
    INTR <= 0;
    READY <= 0;

    D_in <= 8'b11_111_111;

    @(posedge clk)
    @(posedge clk)
    @(posedge clk)
    @(posedge clk)
    @(posedge clk)
    @(posedge clk)
    @(posedge clk)
    @(posedge clk)
    @(posedge clk)

    $finish;
  end
endmodule: i8008_system
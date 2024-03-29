module hex_to_sevenseg (
	hexdigit,
	seg
);
	input wire [3:0] hexdigit;
	output reg [7:0] seg;
	always @(*) begin
		seg = 1'sb1;
		if (hexdigit == 4'h0)
			seg = 8'b11000000;
		if (hexdigit == 4'h1)
			seg = 8'b11111001;
		if (hexdigit == 4'h2)
			seg = 8'b10100100;
		if (hexdigit == 4'h3)
			seg = 8'b10110000;
		if (hexdigit == 4'h4)
			seg = 8'b10011001;
		if (hexdigit == 4'h5)
			seg = 8'b10010010;
		if (hexdigit == 4'h6)
			seg = 8'b10000010;
		if (hexdigit == 4'h7)
			seg = 8'b11111000;
		if (hexdigit == 4'h8)
			seg = 8'b10000000;
		if (hexdigit == 4'h9)
			seg = 8'b10010000;
		if (hexdigit == 4'ha)
			seg = 8'b10001000;
		if (hexdigit == 4'hb)
			seg = 8'b10000011;
		if (hexdigit == 4'hc)
			seg = 8'b11000110;
		if (hexdigit == 4'hd)
			seg = 8'b10100001;
		if (hexdigit == 4'he)
			seg = 8'b10000110;
		if (hexdigit == 4'hf)
			seg = 8'b10001110;
	end
endmodule
module debug_harness (
	uart_rx,
	uart_tx,
	chip_inputs,
	chip_outputs,
	chip_clock,
	chip_reset,
	clk100
);
	wire _0000_;
	wire [11:0] _0001_;
	wire _0002_;
	wire [31:0] _0003_;
	wire [2:0] _0004_;
	wire _0005_;
	wire [31:0] _0006_;
	wire [31:0] _0007_;
	wire [31:0] _0008_;
	wire [31:0] _0009_;
	wire [31:0] _0010_;
	wire [31:0] _0011_;
	wire [35:0] _0012_;
	wire _0013_;
	wire [35:0] _0014_;
	wire _0015_;
	wire _0016_;
	wire _0017_;
	wire [25:0] _0018_;
	wire _0019_;
	wire _0020_;
	wire _0021_;
	wire _0022_;
	wire _0023_;
	wire _0024_;
	wire _0025_;
	wire _0026_;
	wire [39:0] _0027_;
	wire [2:0] _0028_;
	wire _0029_;
	wire [35:0] _0030_;
	wire _0031_;
	wire [39:0] _0032_;
	wire [2:0] _0033_;
	wire [7:0] _0034_;
	wire _0035_;
	wire _0036_;
	wire [35:0] _0037_;
	wire _0038_;
	wire _0039_;
	wire _0040_;
	wire [25:0] _0041_;
	wire _0042_;
	wire _0043_;
	wire _0044_;
	wire _0045_;
	wire _0046_;
	wire _0047_;
	wire _0048_;
	wire _0049_;
	wire [39:0] _0050_;
	wire [2:0] _0051_;
	wire _0052_;
	wire [35:0] _0053_;
	wire _0054_;
	wire [39:0] _0055_;
	wire [2:0] _0056_;
	wire _0057_;
	wire [31:0] _0058_;
	wire [31:0] _0059_;
	wire _0060_;
	wire _0061_;
	wire _0062_;
	wire _0063_;
	wire _0064_;
	wire _0065_;
	wire _0066_;
	wire _0067_;
	wire _0068_;
	wire _0069_;
	wire _0070_;
	wire _0071_;
	wire _0072_;
	wire _0073_;
	wire _0074_;
	wire _0075_;
	wire _0076_;
	wire _0077_;
	wire _0078_;
	wire _0079_;
	wire _0080_;
	wire _0081_;
	wire _0082_;
	wire _0083_;
	wire _0084_;
	wire _0085_;
	wire _0086_;
	wire _0087_;
	wire _0088_;
	wire _0089_;
	wire _0090_;
	wire _0091_;
	wire _0092_;
	wire _0093_;
	wire _0094_;
	wire _0095_;
	wire _0096_;
	wire _0097_;
	wire _0098_;
	wire _0099_;
	wire _0100_;
	wire _0101_;
	wire _0102_;
	wire _0103_;
	wire _0104_;
	wire _0105_;
	wire _0106_;
	wire [31:0] _0107_;
	wire [3:0] _0108_;
	wire [35:0] _0109_;
	wire [35:0] _0110_;
	wire [4:0] _0111_;
	wire [35:0] _0112_;
	wire _0113_;
	wire [3:0] _0114_;
	wire [3:0] _0115_;
	wire [3:0] _0116_;
	wire [35:0] _0117_;
	wire [35:0] _0118_;
	wire [4:0] _0119_;
	wire _0120_;
	wire [3:0] _0121_;
	wire [3:0] _0122_;
	wire [3:0] _0123_;
	wire [35:0] _0124_;
	wire [35:0] _0125_;
	wire [31:0] _0126_;
	wire [31:0] _0127_;
	wire [31:0] _0128_;
	wire _0129_;
	wire _0130_;
	wire _0131_;
	wire _0132_;
	wire _0133_;
	wire _0134_;
	wire [35:0] _0135_;
	reg [3:0] _0136_;
	reg [35:0] _0137_;
	reg [35:0] _0138_;
	wire _0139_;
	wire _0140_;
	wire _0141_;
	wire _0142_;
	wire _0143_;
	wire [31:0] _0144_;
	wire [3:0] _0145_;
	wire [35:0] _0146_;
	wire [35:0] _0147_;
	wire [4:0] _0148_;
	wire [35:0] _0149_;
	wire _0150_;
	wire [3:0] _0151_;
	wire [3:0] _0152_;
	wire [3:0] _0153_;
	wire [35:0] _0154_;
	wire [35:0] _0155_;
	wire [4:0] _0156_;
	wire _0157_;
	wire [3:0] _0158_;
	wire [3:0] _0159_;
	wire [3:0] _0160_;
	wire [35:0] _0161_;
	wire [35:0] _0162_;
	wire [31:0] _0163_;
	wire [31:0] _0164_;
	wire [31:0] _0165_;
	wire _0166_;
	wire _0167_;
	wire _0168_;
	wire _0169_;
	wire _0170_;
	wire _0171_;
	wire [35:0] _0172_;
	reg [3:0] _0173_;
	reg [35:0] _0174_;
	reg [35:0] _0175_;
	wire _0176_;
	wire _0177_;
	wire _0178_;
	wire _0179_;
	wire _0180_;
	wire [31:0] _0181_;
	wire [7:0] _0182_;
	wire [7:0] _0183_;
	wire [31:0] _0184_;
	wire [7:0] _0185_;
	wire [9:0] _0186_;
	wire [7:0] _0187_;
	wire _0188_;
	wire [3:0] _0189_;
	wire [7:0] _0190_;
	wire [7:0] _0191_;
	wire [31:0] _0192_;
	wire [7:0] _0193_;
	wire [3:0] _0194_;
	wire [7:0] _0195_;
	wire [7:0] _0196_;
	wire [31:0] _0197_;
	wire [7:0] _0198_;
	wire [7:0] _0199_;
	wire [7:0] _0200_;
	wire [31:0] _0201_;
	wire [7:0] _0202_;
	wire [31:0] _0203_;
	wire [7:0] _0204_;
	wire [7:0] _0205_;
	reg [7:0] _0206_;
	reg [7:0] _0207_;
	reg [31:0] _0208_;
	wire _0209_;
	wire _0210_;
	wire _0211_;
	wire _0212_;
	wire _0213_;
	reg [7:0] _0214_;
	wire [32:0] _0215_;
	wire [32:0] _0216_;
	wire [7:0] _0217_;
	wire [7:0] _0218_;
	wire [7:0] _0219_;
	wire [7:0] _0220_;
	wire [32:0] _0221_;
	wire [32:0] _0222_;
	wire [31:0] _0223_;
	wire [31:0] _0224_;
	wire [9:0] _0225_;
	wire [7:0] _0226_;
	wire _0227_;
	wire [3:0] _0228_;
	wire _0229_;
	wire [3:0] _0230_;
	wire _0231_;
	wire _0232_;
	wire [31:0] _0233_;
	wire _0234_;
	wire _0235_;
	wire _0236_;
	wire _0237_;
	wire _0238_;
	wire _0239_;
	wire _0240_;
	wire _0241_;
	wire _0242_;
	wire [31:0] _0243_;
	wire [31:0] _0244_;
	wire _0245_;
	wire [35:0] _0246_;
	wire _0247_;
	wire [31:0] _0248_;
	wire _0249_;
	wire [31:0] _0250_;
	wire _0251_;
	wire _0252_;
	wire _0253_;
	wire _0254_;
	wire [31:0] _0255_;
	wire _0256_;
	wire [31:0] _0257_;
	wire _0258_;
	wire _0259_;
	wire [31:0] _0260_;
	wire _0261_;
	wire _0262_;
	wire _0263_;
	wire _0264_;
	wire _0265_;
	wire _0266_;
	wire _0267_;
	wire _0268_;
	wire _0269_;
	wire _0270_;
	wire _0271_;
	wire _0272_;
	wire _0273_;
	wire _0274_;
	wire _0275_;
	wire _0276_;
	wire _0277_;
	wire _0278_;
	wire _0279_;
	wire _0280_;
	wire _0281_;
	wire _0282_;
	wire _0283_;
	wire _0284_;
	wire _0285_;
	wire _0286_;
	wire _0287_;
	wire [35:0] _0288_;
	wire _0289_;
	wire _0290_;
	wire _0291_;
	wire _0292_;
	wire _0293_;
	wire _0294_;
	wire _0295_;
	wire _0296_;
	wire _0297_;
	wire _0298_;
	wire _0299_;
	wire _0300_;
	wire _0301_;
	wire _0302_;
	wire _0303_;
	wire _0304_;
	wire _0305_;
	wire _0306_;
	wire _0307_;
	wire _0308_;
	wire _0309_;
	wire _0310_;
	wire _0311_;
	wire _0312_;
	wire _0313_;
	wire _0314_;
	wire _0315_;
	wire _0316_;
	wire _0317_;
	wire _0318_;
	wire _0319_;
	wire _0320_;
	wire _0321_;
	wire _0322_;
	wire _0323_;
	wire _0324_;
	wire _0325_;
	wire _0326_;
	wire _0327_;
	wire _0328_;
	wire _0329_;
	wire _0330_;
	wire _0331_;
	wire _0332_;
	wire _0333_;
	wire _0334_;
	wire _0335_;
	wire _0336_;
	wire _0337_;
	wire _0338_;
	wire _0339_;
	wire _0340_;
	wire _0341_;
	wire _0342_;
	wire _0343_;
	wire _0344_;
	wire _0345_;
	wire _0346_;
	wire _0347_;
	wire [2:0] _0348_;
	wire _0349_;
	wire [2:0] _0350_;
	wire _0351_;
	wire [2:0] _0352_;
	wire _0353_;
	wire [2:0] _0354_;
	wire _0355_;
	wire [2:0] _0356_;
	wire _0357_;
	wire [2:0] _0358_;
	wire _0359_;
	wire [2:0] _0360_;
	wire _0361_;
	wire [2:0] _0362_;
	wire _0363_;
	wire [2:0] _0364_;
	wire _0365_;
	wire [39:0] _0366_;
	wire _0367_;
	wire [39:0] _0368_;
	wire _0369_;
	wire [39:0] _0370_;
	wire _0371_;
	wire [39:0] _0372_;
	wire _0373_;
	wire [39:0] _0374_;
	wire _0375_;
	wire [39:0] _0376_;
	wire _0377_;
	wire [39:0] _0378_;
	wire _0379_;
	wire [7:0] _0380_;
	wire _0381_;
	wire _0382_;
	wire _0383_;
	wire _0384_;
	wire _0385_;
	wire [7:0] _0386_;
	wire _0387_;
	wire [7:0] _0388_;
	wire _0389_;
	wire [7:0] _0390_;
	wire _0391_;
	wire [7:0] _0392_;
	wire _0393_;
	wire [7:0] _0394_;
	wire _0395_;
	wire [7:0] _0396_;
	wire _0397_;
	wire [7:0] _0398_;
	wire _0399_;
	wire [7:0] _0400_;
	wire _0401_;
	wire [7:0] _0402_;
	wire _0403_;
	wire [7:0] _0404_;
	wire _0405_;
	wire [7:0] _0406_;
	wire _0407_;
	wire [7:0] _0408_;
	wire _0409_;
	wire _0410_;
	wire _0411_;
	wire _0412_;
	wire _0413_;
	wire _0414_;
	wire _0415_;
	wire [25:0] _0416_;
	wire _0417_;
	wire [25:0] _0418_;
	wire _0419_;
	wire [2:0] _0420_;
	wire _0421_;
	wire [2:0] _0422_;
	wire _0423_;
	wire [2:0] _0424_;
	wire _0425_;
	wire [2:0] _0426_;
	wire _0427_;
	wire _0428_;
	wire _0429_;
	wire _0430_;
	wire _0431_;
	wire _0432_;
	wire _0433_;
	wire _0434_;
	wire _0435_;
	wire [35:0] _0436_;
	wire _0437_;
	wire [35:0] _0438_;
	wire _0439_;
	wire [35:0] _0440_;
	wire _0441_;
	wire [35:0] _0442_;
	wire _0443_;
	wire _0444_;
	wire _0445_;
	wire _0446_;
	wire _0447_;
	wire [35:0] _0448_;
	wire _0449_;
	wire [35:0] _0450_;
	wire _0451_;
	wire [35:0] _0452_;
	wire _0453_;
	wire [35:0] _0454_;
	wire _0455_;
	wire [35:0] _0456_;
	wire _0457_;
	wire [3:0] _0458_;
	wire _0459_;
	wire [3:0] _0460_;
	wire _0461_;
	wire [35:0] _0462_;
	wire _0463_;
	wire [35:0] _0464_;
	wire _0465_;
	wire [3:0] _0466_;
	wire _0467_;
	wire [3:0] _0468_;
	wire _0469_;
	wire [3:0] _0470_;
	wire _0471_;
	wire _0472_;
	wire _0473_;
	wire _0474_;
	wire _0475_;
	wire [3:0] _0476_;
	wire _0477_;
	wire [3:0] _0478_;
	wire _0479_;
	wire [35:0] _0480_;
	wire _0481_;
	wire [35:0] _0482_;
	wire _0483_;
	wire [4:0] _0484_;
	wire _0485_;
	wire [4:0] _0486_;
	wire _0487_;
	wire [4:0] _0488_;
	wire _0489_;
	wire [35:0] _0490_;
	wire _0491_;
	wire [35:0] _0492_;
	wire _0493_;
	wire [35:0] _0494_;
	wire _0495_;
	wire [35:0] _0496_;
	wire _0497_;
	wire [3:0] _0498_;
	wire _0499_;
	wire [3:0] _0500_;
	wire _0501_;
	wire [35:0] _0502_;
	wire _0503_;
	wire [35:0] _0504_;
	wire _0505_;
	wire [3:0] _0506_;
	wire _0507_;
	wire [3:0] _0508_;
	wire _0509_;
	wire [3:0] _0510_;
	wire _0511_;
	wire _0512_;
	wire _0513_;
	wire _0514_;
	wire _0515_;
	wire [3:0] _0516_;
	wire _0517_;
	wire [3:0] _0518_;
	wire _0519_;
	wire [35:0] _0520_;
	wire _0521_;
	wire [35:0] _0522_;
	wire _0523_;
	wire [4:0] _0524_;
	wire _0525_;
	wire [4:0] _0526_;
	wire _0527_;
	wire [4:0] _0528_;
	wire _0529_;
	wire [7:0] _0530_;
	wire _0531_;
	wire [7:0] _0532_;
	wire _0533_;
	wire [7:0] _0534_;
	wire _0535_;
	wire [31:0] _0536_;
	wire _0537_;
	wire [31:0] _0538_;
	wire _0539_;
	wire [31:0] _0540_;
	wire _0541_;
	wire [7:0] _0542_;
	wire _0543_;
	wire [7:0] _0544_;
	wire _0545_;
	wire [7:0] _0546_;
	wire _0547_;
	wire [7:0] _0548_;
	wire _0549_;
	wire [7:0] _0550_;
	wire _0551_;
	wire [7:0] _0552_;
	wire _0553_;
	wire [7:0] _0554_;
	wire _0555_;
	wire [7:0] _0556_;
	wire _0557_;
	wire [31:0] _0558_;
	wire _0559_;
	wire [31:0] _0560_;
	wire _0561_;
	wire [7:0] _0562_;
	wire _0563_;
	wire [7:0] _0564_;
	wire _0565_;
	wire [7:0] _0566_;
	wire _0567_;
	wire [7:0] _0568_;
	wire _0569_;
	wire [7:0] _0570_;
	wire _0571_;
	wire [31:0] _0572_;
	wire _0573_;
	wire [7:0] _0574_;
	wire _0575_;
	wire [7:0] _0576_;
	wire _0577_;
	wire [9:0] _0578_;
	wire _0579_;
	wire [9:0] _0580_;
	wire _0581_;
	wire [9:0] _0582_;
	wire _0583_;
	wire [9:0] _0584_;
	wire _0585_;
	wire _0586_;
	wire _0587_;
	wire _0588_;
	wire _0589_;
	wire _0590_;
	wire _0591_;
	wire _0592_;
	wire _0593_;
	wire [3:0] _0594_;
	wire _0595_;
	wire [3:0] _0596_;
	wire _0597_;
	wire [3:0] _0598_;
	wire _0599_;
	wire [3:0] _0600_;
	wire _0601_;
	wire _0602_;
	wire _0603_;
	wire _0604_;
	wire _0605_;
	wire _0606_;
	wire _0607_;
	wire _0608_;
	wire _0609_;
	wire _0610_;
	wire _0611_;
	wire _0612_;
	wire _0613_;
	wire [9:0] _0614_;
	wire _0615_;
	wire [9:0] _0616_;
	wire _0617_;
	wire [9:0] _0618_;
	wire _0619_;
	wire [9:0] _0620_;
	wire _0621_;
	wire [9:0] _0622_;
	wire _0623_;
	wire [7:0] _0624_;
	wire _0625_;
	wire [7:0] _0626_;
	wire _0627_;
	wire [3:0] _0628_;
	wire _0629_;
	wire [3:0] _0630_;
	wire _0631_;
	wire [3:0] _0632_;
	wire _0633_;
	wire [3:0] _0634_;
	wire _0635_;
	wire _0636_;
	wire _0637_;
	wire _0638_;
	wire _0639_;
	wire _0640_;
	wire _0641_;
	wire _0642_;
	wire _0643_;
	wire _0644_;
	wire _0645_;
	wire _0646_;
	wire _0647_;
	wire _0648_;
	wire _0649_;
	wire _0650_;
	wire _0651_;
	wire _0652_;
	wire _0653_;
	wire _0654_;
	wire _0655_;
	wire _0656_;
	wire _0657_;
	wire _0658_;
	wire _0659_;
	wire [31:0] _0660_;
	wire _0661_;
	wire [31:0] _0662_;
	wire _0663_;
	wire [31:0] _0664_;
	wire _0665_;
	wire _0666_;
	wire _0667_;
	wire [31:0] _0668_;
	wire _0669_;
	wire _0670_;
	wire _0671_;
	wire _0672_;
	wire _0673_;
	wire _0674_;
	wire _0675_;
	wire _0676_;
	wire _0677_;
	wire [35:0] _0678_;
	wire _0679_;
	wire [35:0] _0680_;
	wire _0681_;
	wire [35:0] _0682_;
	wire _0683_;
	wire [35:0] _0684_;
	wire _0685_;
	wire [35:0] _0686_;
	wire _0687_;
	wire _0688_;
	wire _0689_;
	wire [31:0] _0690_;
	wire _0691_;
	wire [31:0] _0692_;
	wire _0693_;
	wire _0694_;
	wire _0695_;
	wire _0696_;
	wire _0697_;
	wire _0698_;
	wire _0699_;
	wire _0700_;
	wire _0701_;
	wire [11:0] _0702_;
	wire _0703_;
	wire [11:0] _0704_;
	wire _0705_;
	output reg chip_clock;
	output reg [11:0] chip_inputs;
	input wire [11:0] chip_outputs;
	output reg chip_reset;
	wire clk;
	input wire clk100;
	reg [31:0] data_in;
	wire [31:0] data_out;
	input wire uart_rx;
	reg [2:0] uart_rx_sync;
	output wire uart_tx;
	reg wb_ack;
	wire wb_cyc;
	wire wb_stb;
	wire wb_we;
	reg [35:0] \wbdbg.cmd_data ;
	wire \wbdbg.cmd_fifo.i_clk ;
	wire \wbdbg.cmd_fifo.i_rd_en ;
	wire \wbdbg.cmd_fifo.i_rst ;
	wire [35:0] \wbdbg.cmd_fifo.i_wr_data ;
	wire \wbdbg.cmd_fifo.i_wr_en ;
	reg [4:0] \wbdbg.cmd_fifo.len  = 5'h00;
	wire \wbdbg.cmd_fifo.o_empty ;
	wire \wbdbg.cmd_fifo.o_full ;
	reg [35:0] \wbdbg.cmd_fifo.o_rd_data ;
	reg \wbdbg.cmd_fifo.o_rd_valid  = 1'h0;
	reg [3:0] \wbdbg.cmd_fifo.rd_ptr  = 4'h0;
	reg [3:0] \wbdbg.cmd_fifo.wr_ptr  = 4'h0;
	wire \wbdbg.cmd_fifo_empty ;
	wire \wbdbg.cmd_fifo_full ;
	wire [35:0] \wbdbg.cmd_fifo_rd_data ;
	reg \wbdbg.cmd_fifo_rd_en  = 1'h0;
	wire \wbdbg.cmd_fifo_rd_valid ;
	reg [35:0] \wbdbg.cmd_fifo_wr_data  = 36'h000000000;
	reg \wbdbg.cmd_fifo_wr_en  = 1'h0;
	wire \wbdbg.cmd_ready ;
	reg \wbdbg.cmd_reset  = 1'h0;
	reg \wbdbg.cmd_valid  = 1'h0;
	reg [25:0] \wbdbg.drop_timer  = 26'h17d7840;
	wire \wbdbg.i_clk ;
	wire \wbdbg.i_interrupt_1 ;
	wire \wbdbg.i_interrupt_2 ;
	wire \wbdbg.i_interrupt_3 ;
	wire \wbdbg.i_interrupt_4 ;
	wire \wbdbg.i_rx ;
	wire \wbdbg.i_wb_ack ;
	wire [31:0] \wbdbg.i_wb_data ;
	wire \wbdbg.i_wb_err ;
	wire \wbdbg.i_wb_stall ;
	reg \wbdbg.interrupt_1_last  = 1'h0;
	reg \wbdbg.interrupt_1_rising  = 1'h0;
	reg \wbdbg.interrupt_2_last  = 1'h0;
	reg \wbdbg.interrupt_2_rising  = 1'h0;
	reg \wbdbg.interrupt_3_last  = 1'h0;
	reg \wbdbg.interrupt_3_rising  = 1'h0;
	reg \wbdbg.interrupt_4_last  = 1'h0;
	reg \wbdbg.interrupt_4_rising  = 1'h0;
	wire \wbdbg.o_tx ;
	wire [31:0] \wbdbg.o_wb_addr ;
	wire \wbdbg.o_wb_cyc ;
	wire [31:0] \wbdbg.o_wb_data ;
	wire \wbdbg.o_wb_stb ;
	wire \wbdbg.o_wb_we ;
	reg [39:0] \wbdbg.recieve_data  = 40'h0000000000;
	reg [2:0] \wbdbg.recieve_state  = 3'h0;
	wire [35:0] \wbdbg.resp_data ;
	wire \wbdbg.resp_fifo.i_clk ;
	wire \wbdbg.resp_fifo.i_rd_en ;
	wire \wbdbg.resp_fifo.i_rst ;
	wire [35:0] \wbdbg.resp_fifo.i_wr_data ;
	wire \wbdbg.resp_fifo.i_wr_en ;
	reg [4:0] \wbdbg.resp_fifo.len  = 5'h00;
	wire \wbdbg.resp_fifo.o_empty ;
	wire \wbdbg.resp_fifo.o_full ;
	reg [35:0] \wbdbg.resp_fifo.o_rd_data ;
	reg \wbdbg.resp_fifo.o_rd_valid  = 1'h0;
	reg [3:0] \wbdbg.resp_fifo.rd_ptr  = 4'h0;
	reg [3:0] \wbdbg.resp_fifo.wr_ptr  = 4'h0;
	wire \wbdbg.resp_fifo_empty ;
	wire \wbdbg.resp_fifo_full ;
	wire [35:0] \wbdbg.resp_fifo_rd_data ;
	reg \wbdbg.resp_fifo_rd_en  = 1'h0;
	wire \wbdbg.resp_fifo_rd_valid ;
	reg [35:0] \wbdbg.resp_fifo_wr_data  = 36'h000000000;
	reg \wbdbg.resp_fifo_wr_en  = 1'h0;
	wire \wbdbg.resp_valid ;
	reg [39:0] \wbdbg.transmit_data  = 40'h0000000000;
	reg [2:0] \wbdbg.transmit_state  = 3'h0;
	reg [9:0] \wbdbg.uart_rx.counter ;
	wire \wbdbg.uart_rx.i_clk ;
	wire \wbdbg.uart_rx.i_in ;
	reg [7:0] \wbdbg.uart_rx.o_data ;
	reg \wbdbg.uart_rx.o_valid ;
	reg [3:0] \wbdbg.uart_rx.state  = 4'h0;
	wire [7:0] \wbdbg.uart_rx_data ;
	wire \wbdbg.uart_rx_valid ;
	reg [9:0] \wbdbg.uart_tx.counter ;
	reg [7:0] \wbdbg.uart_tx.data_send ;
	wire \wbdbg.uart_tx.i_clk ;
	wire [7:0] \wbdbg.uart_tx.i_data ;
	wire \wbdbg.uart_tx.i_valid ;
	wire \wbdbg.uart_tx.o_out ;
	wire \wbdbg.uart_tx.o_ready ;
	reg [3:0] \wbdbg.uart_tx.state  = 4'h0;
	reg [7:0] \wbdbg.uart_tx_data ;
	wire \wbdbg.uart_tx_ready ;
	reg \wbdbg.uart_tx_valid  = 1'h0;
	reg \wbdbg.wbdbgbusmaster.addr_inc  = 1'h0;
	wire [31:0] \wbdbg.wbdbgbusmaster.cmd_data ;
	wire [3:0] \wbdbg.wbdbgbusmaster.cmd_inst ;
	wire \wbdbg.wbdbgbusmaster.cmd_recv ;
	wire \wbdbg.wbdbgbusmaster.i_clk ;
	wire [35:0] \wbdbg.wbdbgbusmaster.i_cmd_data ;
	wire \wbdbg.wbdbgbusmaster.i_cmd_reset ;
	wire \wbdbg.wbdbgbusmaster.i_cmd_valid ;
	wire \wbdbg.wbdbgbusmaster.i_wb_ack ;
	wire [31:0] \wbdbg.wbdbgbusmaster.i_wb_data ;
	wire \wbdbg.wbdbgbusmaster.i_wb_err ;
	wire \wbdbg.wbdbgbusmaster.i_wb_stall ;
	wire \wbdbg.wbdbgbusmaster.o_cmd_ready ;
	reg [35:0] \wbdbg.wbdbgbusmaster.o_resp_data ;
	reg \wbdbg.wbdbgbusmaster.o_resp_valid  = 1'h0;
	reg [31:0] \wbdbg.wbdbgbusmaster.o_wb_addr  = 32'd0;
	reg \wbdbg.wbdbgbusmaster.o_wb_cyc  = 1'h0;
	reg [31:0] \wbdbg.wbdbgbusmaster.o_wb_data  = 32'd0;
	reg \wbdbg.wbdbgbusmaster.o_wb_stb  = 1'h0;
	reg \wbdbg.wbdbgbusmaster.o_wb_we  = 1'h0;
	reg [35:0] \wbdbg.cmd_fifo.ram  [15:0];
	always @(posedge \wbdbg.cmd_fifo.i_clk ) begin
		if (_0118_[0])
			\wbdbg.cmd_fifo.ram [_0116_][0:0] <= _0117_[0];
		if (_0118_[1])
			\wbdbg.cmd_fifo.ram [_0116_][1:1] <= _0117_[1];
		if (_0118_[2])
			\wbdbg.cmd_fifo.ram [_0116_][2:2] <= _0117_[2];
		if (_0118_[3])
			\wbdbg.cmd_fifo.ram [_0116_][3:3] <= _0117_[3];
		if (_0118_[4])
			\wbdbg.cmd_fifo.ram [_0116_][4:4] <= _0117_[4];
		if (_0118_[5])
			\wbdbg.cmd_fifo.ram [_0116_][5:5] <= _0117_[5];
		if (_0118_[6])
			\wbdbg.cmd_fifo.ram [_0116_][6:6] <= _0117_[6];
		if (_0118_[7])
			\wbdbg.cmd_fifo.ram [_0116_][7:7] <= _0117_[7];
		if (_0118_[8])
			\wbdbg.cmd_fifo.ram [_0116_][8:8] <= _0117_[8];
		if (_0118_[9])
			\wbdbg.cmd_fifo.ram [_0116_][9:9] <= _0117_[9];
		if (_0118_[10])
			\wbdbg.cmd_fifo.ram [_0116_][10:10] <= _0117_[10];
		if (_0118_[11])
			\wbdbg.cmd_fifo.ram [_0116_][11:11] <= _0117_[11];
		if (_0118_[12])
			\wbdbg.cmd_fifo.ram [_0116_][12:12] <= _0117_[12];
		if (_0118_[13])
			\wbdbg.cmd_fifo.ram [_0116_][13:13] <= _0117_[13];
		if (_0118_[14])
			\wbdbg.cmd_fifo.ram [_0116_][14:14] <= _0117_[14];
		if (_0118_[15])
			\wbdbg.cmd_fifo.ram [_0116_][15:15] <= _0117_[15];
		if (_0118_[16])
			\wbdbg.cmd_fifo.ram [_0116_][16:16] <= _0117_[16];
		if (_0118_[17])
			\wbdbg.cmd_fifo.ram [_0116_][17:17] <= _0117_[17];
		if (_0118_[18])
			\wbdbg.cmd_fifo.ram [_0116_][18:18] <= _0117_[18];
		if (_0118_[19])
			\wbdbg.cmd_fifo.ram [_0116_][19:19] <= _0117_[19];
		if (_0118_[20])
			\wbdbg.cmd_fifo.ram [_0116_][20:20] <= _0117_[20];
		if (_0118_[21])
			\wbdbg.cmd_fifo.ram [_0116_][21:21] <= _0117_[21];
		if (_0118_[22])
			\wbdbg.cmd_fifo.ram [_0116_][22:22] <= _0117_[22];
		if (_0118_[23])
			\wbdbg.cmd_fifo.ram [_0116_][23:23] <= _0117_[23];
		if (_0118_[24])
			\wbdbg.cmd_fifo.ram [_0116_][24:24] <= _0117_[24];
		if (_0118_[25])
			\wbdbg.cmd_fifo.ram [_0116_][25:25] <= _0117_[25];
		if (_0118_[26])
			\wbdbg.cmd_fifo.ram [_0116_][26:26] <= _0117_[26];
		if (_0118_[27])
			\wbdbg.cmd_fifo.ram [_0116_][27:27] <= _0117_[27];
		if (_0118_[28])
			\wbdbg.cmd_fifo.ram [_0116_][28:28] <= _0117_[28];
		if (_0118_[29])
			\wbdbg.cmd_fifo.ram [_0116_][29:29] <= _0117_[29];
		if (_0118_[30])
			\wbdbg.cmd_fifo.ram [_0116_][30:30] <= _0117_[30];
		if (_0118_[31])
			\wbdbg.cmd_fifo.ram [_0116_][31:31] <= _0117_[31];
		if (_0118_[32])
			\wbdbg.cmd_fifo.ram [_0116_][32:32] <= _0117_[32];
		if (_0118_[33])
			\wbdbg.cmd_fifo.ram [_0116_][33:33] <= _0117_[33];
		if (_0118_[34])
			\wbdbg.cmd_fifo.ram [_0116_][34:34] <= _0117_[34];
		if (_0118_[35])
			\wbdbg.cmd_fifo.ram [_0116_][35:35] <= _0117_[35];
	end
	assign _0135_ = \wbdbg.cmd_fifo.ram [\wbdbg.cmd_fifo.rd_ptr ];
	reg [35:0] \wbdbg.resp_fifo.ram  [15:0];
	always @(posedge \wbdbg.resp_fifo.i_clk ) begin
		if (_0155_[0])
			\wbdbg.resp_fifo.ram [_0153_][0:0] <= _0154_[0];
		if (_0155_[1])
			\wbdbg.resp_fifo.ram [_0153_][1:1] <= _0154_[1];
		if (_0155_[2])
			\wbdbg.resp_fifo.ram [_0153_][2:2] <= _0154_[2];
		if (_0155_[3])
			\wbdbg.resp_fifo.ram [_0153_][3:3] <= _0154_[3];
		if (_0155_[4])
			\wbdbg.resp_fifo.ram [_0153_][4:4] <= _0154_[4];
		if (_0155_[5])
			\wbdbg.resp_fifo.ram [_0153_][5:5] <= _0154_[5];
		if (_0155_[6])
			\wbdbg.resp_fifo.ram [_0153_][6:6] <= _0154_[6];
		if (_0155_[7])
			\wbdbg.resp_fifo.ram [_0153_][7:7] <= _0154_[7];
		if (_0155_[8])
			\wbdbg.resp_fifo.ram [_0153_][8:8] <= _0154_[8];
		if (_0155_[9])
			\wbdbg.resp_fifo.ram [_0153_][9:9] <= _0154_[9];
		if (_0155_[10])
			\wbdbg.resp_fifo.ram [_0153_][10:10] <= _0154_[10];
		if (_0155_[11])
			\wbdbg.resp_fifo.ram [_0153_][11:11] <= _0154_[11];
		if (_0155_[12])
			\wbdbg.resp_fifo.ram [_0153_][12:12] <= _0154_[12];
		if (_0155_[13])
			\wbdbg.resp_fifo.ram [_0153_][13:13] <= _0154_[13];
		if (_0155_[14])
			\wbdbg.resp_fifo.ram [_0153_][14:14] <= _0154_[14];
		if (_0155_[15])
			\wbdbg.resp_fifo.ram [_0153_][15:15] <= _0154_[15];
		if (_0155_[16])
			\wbdbg.resp_fifo.ram [_0153_][16:16] <= _0154_[16];
		if (_0155_[17])
			\wbdbg.resp_fifo.ram [_0153_][17:17] <= _0154_[17];
		if (_0155_[18])
			\wbdbg.resp_fifo.ram [_0153_][18:18] <= _0154_[18];
		if (_0155_[19])
			\wbdbg.resp_fifo.ram [_0153_][19:19] <= _0154_[19];
		if (_0155_[20])
			\wbdbg.resp_fifo.ram [_0153_][20:20] <= _0154_[20];
		if (_0155_[21])
			\wbdbg.resp_fifo.ram [_0153_][21:21] <= _0154_[21];
		if (_0155_[22])
			\wbdbg.resp_fifo.ram [_0153_][22:22] <= _0154_[22];
		if (_0155_[23])
			\wbdbg.resp_fifo.ram [_0153_][23:23] <= _0154_[23];
		if (_0155_[24])
			\wbdbg.resp_fifo.ram [_0153_][24:24] <= _0154_[24];
		if (_0155_[25])
			\wbdbg.resp_fifo.ram [_0153_][25:25] <= _0154_[25];
		if (_0155_[26])
			\wbdbg.resp_fifo.ram [_0153_][26:26] <= _0154_[26];
		if (_0155_[27])
			\wbdbg.resp_fifo.ram [_0153_][27:27] <= _0154_[27];
		if (_0155_[28])
			\wbdbg.resp_fifo.ram [_0153_][28:28] <= _0154_[28];
		if (_0155_[29])
			\wbdbg.resp_fifo.ram [_0153_][29:29] <= _0154_[29];
		if (_0155_[30])
			\wbdbg.resp_fifo.ram [_0153_][30:30] <= _0154_[30];
		if (_0155_[31])
			\wbdbg.resp_fifo.ram [_0153_][31:31] <= _0154_[31];
		if (_0155_[32])
			\wbdbg.resp_fifo.ram [_0153_][32:32] <= _0154_[32];
		if (_0155_[33])
			\wbdbg.resp_fifo.ram [_0153_][33:33] <= _0154_[33];
		if (_0155_[34])
			\wbdbg.resp_fifo.ram [_0153_][34:34] <= _0154_[34];
		if (_0155_[35])
			\wbdbg.resp_fifo.ram [_0153_][35:35] <= _0154_[35];
	end
	assign _0172_ = \wbdbg.resp_fifo.ram [\wbdbg.resp_fifo.rd_ptr ];
	assign _0058_ = \wbdbg.transmit_state  + 32'd1;
	assign _0059_ = \wbdbg.recieve_state  + 32'd1;
	assign _0060_ = !\wbdbg.transmit_state ;
	assign _0062_ = \wbdbg.transmit_state  == 3'h5;
	assign _0063_ = \wbdbg.recieve_state  == 3'h4;
	assign _0064_ = \wbdbg.recieve_data [35:32] == 4'hf;
	assign _0065_ = \wbdbg.drop_timer  == 26'h0000001;
	assign _0066_ = \wbdbg.recieve_state  > 32'd0;
	assign _0067_ = \wbdbg.resp_valid  && _0087_;
	assign _0072_ = _0060_ && _0092_;
	assign _0073_ = _0072_ && _0093_;
	assign _0074_ = _0073_ && _0094_;
	assign _0075_ = _0074_ && _0095_;
	assign _0076_ = _0075_ && _0096_;
	assign _0077_ = _0076_ && _0097_;
	assign _0078_ = _0077_ && _0098_;
	assign _0079_ = \wbdbg.uart_tx_ready  && _0099_;
	assign _0080_ = _0101_ && \wbdbg.cmd_ready ;
	assign _0081_ = _0080_ && _0102_;
	assign _0082_ = _0081_ && _0103_;
	assign _0083_ = _0082_ && _0104_;
	assign _0084_ = _0083_ && _0105_;
	assign _0085_ = \wbdbg.cmd_ready  && \wbdbg.cmd_fifo_rd_valid ;
	assign _0086_ = _0085_ && _0106_;
	assign _0087_ = ~\wbdbg.resp_fifo_full ;
	assign _0088_ = ~\wbdbg.interrupt_1_last ;
	assign _0089_ = ~\wbdbg.interrupt_2_last ;
	assign _0090_ = ~\wbdbg.interrupt_3_last ;
	assign _0091_ = ~\wbdbg.interrupt_4_last ;
	assign _0092_ = ~\wbdbg.resp_fifo_empty ;
	assign _0093_ = ~\wbdbg.resp_fifo_rd_valid ;
	assign _0094_ = ~\wbdbg.resp_fifo_rd_en ;
	assign _0095_ = ~\wbdbg.interrupt_1_rising ;
	assign _0096_ = ~\wbdbg.interrupt_2_rising ;
	assign _0097_ = ~\wbdbg.interrupt_3_rising ;
	assign _0098_ = ~\wbdbg.interrupt_4_rising ;
	assign _0099_ = ~\wbdbg.uart_tx_valid ;
	assign _0100_ = ~\wbdbg.cmd_fifo_full ;
	assign _0101_ = ~\wbdbg.cmd_reset ;
	assign _0102_ = ~\wbdbg.cmd_fifo_empty ;
	assign _0103_ = ~\wbdbg.cmd_fifo_rd_en ;
	assign _0104_ = ~\wbdbg.cmd_fifo_rd_valid ;
	assign _0105_ = ~\wbdbg.cmd_valid ;
	assign _0107_ = \wbdbg.drop_timer  - 32'd1;
	assign _0126_ = \wbdbg.cmd_fifo.wr_ptr  + 32'd1;
	assign _0127_ = \wbdbg.cmd_fifo.rd_ptr  + 32'd1;
	assign _0128_ = \wbdbg.cmd_fifo.len  + 32'd1;
	assign _0129_ = !\wbdbg.cmd_fifo.len ;
	assign _0130_ = \wbdbg.cmd_fifo.len  == 5'h10;
	assign _0131_ = \wbdbg.cmd_fifo.i_rd_en  && _0140_;
	assign _0132_ = _0131_ && _0141_;
	assign _0133_ = \wbdbg.cmd_fifo.i_wr_en  && _0142_;
	assign _0134_ = _0133_ && _0143_;
	assign _0140_ = ~\wbdbg.cmd_fifo.i_wr_en ;
	assign _0144_ = \wbdbg.cmd_fifo.len  - 32'd1;
	assign _0163_ = \wbdbg.resp_fifo.wr_ptr  + 32'd1;
	assign _0164_ = \wbdbg.resp_fifo.rd_ptr  + 32'd1;
	assign _0165_ = \wbdbg.resp_fifo.len  + 32'd1;
	assign _0166_ = !\wbdbg.resp_fifo.len ;
	assign _0167_ = \wbdbg.resp_fifo.len  == 5'h10;
	assign _0168_ = \wbdbg.resp_fifo.i_rd_en  && _0177_;
	assign _0169_ = _0168_ && _0178_;
	assign _0170_ = \wbdbg.resp_fifo.i_wr_en  && _0179_;
	assign _0171_ = _0170_ && _0180_;
	assign _0177_ = ~\wbdbg.resp_fifo.i_wr_en ;
	assign _0181_ = \wbdbg.resp_fifo.len  - 32'd1;
	assign _0203_ = \wbdbg.uart_rx.state  + 32'd1;
	assign _0205_ = \wbdbg.uart_rx.o_data  & _0217_;
	assign _0209_ = !\wbdbg.uart_rx.state ;
	assign _0210_ = ~\wbdbg.uart_rx.i_in ;
	assign _0211_ = !\wbdbg.uart_rx.counter ;
	assign _0212_ = \wbdbg.uart_rx.state  == 4'h9;
	assign _0216_ = -$signed(_0222_);
	assign _0217_ = ~_0219_;
	assign _0218_ = _0205_ | _0220_;
	assign _0219_ = ($signed(_0215_) < 0 ? 1'h1 << -_0215_ : 1'h1 >> _0215_);
	assign _0220_ = ($signed(_0216_) < 0 ? uart_rx_sync[2] << -_0216_ : uart_rx_sync[2] >> _0216_);
	assign _0222_ = +$signed({1'h0, _0223_});
	assign _0223_ = \wbdbg.uart_rx.state  - 32'd1;
	assign _0224_ = \wbdbg.uart_rx.counter  - 32'd1;
	assign _0233_ = \wbdbg.uart_tx.state  + 32'd1;
	assign _0236_ = !\wbdbg.uart_tx.counter ;
	assign _0239_ = !\wbdbg.uart_tx.state ;
	assign _0240_ = \wbdbg.uart_tx.state  == 4'h1;
	assign _0241_ = \wbdbg.uart_tx.state  == 4'ha;
	wire [7:0] _1087_ = \wbdbg.uart_tx.data_send ;
	assign _0242_ = _1087_[$signed(_0244_)+:1];
	assign _0243_ = \wbdbg.uart_tx.counter  - 32'd1;
	assign _0244_ = \wbdbg.uart_tx.state  - 32'd2;
	assign _0260_ = \wbdbg.wbdbgbusmaster.o_wb_addr  + \wbdbg.wbdbgbusmaster.addr_inc ;
	assign _0261_ = \wbdbg.wbdbgbusmaster.cmd_inst  == 4'h1;
	assign _0266_ = \wbdbg.wbdbgbusmaster.cmd_inst  == 4'h2;
	assign _0267_ = \wbdbg.wbdbgbusmaster.cmd_inst  == 4'h3;
	assign _0268_ = \wbdbg.wbdbgbusmaster.cmd_inst  == 4'h7;
	assign _0269_ = \wbdbg.wbdbgbusmaster.i_cmd_valid  && \wbdbg.wbdbgbusmaster.o_cmd_ready ;
	assign _0270_ = \wbdbg.wbdbgbusmaster.cmd_recv  && _0278_;
	assign _0272_ = \wbdbg.wbdbgbusmaster.cmd_recv  && _0266_;
	assign _0274_ = \wbdbg.wbdbgbusmaster.o_wb_cyc  && \wbdbg.wbdbgbusmaster.i_wb_ack ;
	assign _0275_ = \wbdbg.wbdbgbusmaster.cmd_recv  && _0280_;
	assign _0278_ = _0261_ || _0262_;
	assign _0280_ = _0267_ || _0268_;
	assign _0283_ = ~\wbdbg.wbdbgbusmaster.o_wb_cyc ;
	assign _0285_ = wb_cyc && wb_stb;
	always @(posedge \wbdbg.i_clk ) \wbdbg.interrupt_1_last  <= 1'h0;
	always @(posedge \wbdbg.i_clk ) \wbdbg.interrupt_2_last  <= 1'h0;
	always @(posedge \wbdbg.i_clk ) \wbdbg.interrupt_3_last  <= 1'h0;
	always @(posedge \wbdbg.i_clk ) \wbdbg.interrupt_4_last  <= 1'h0;
	always @(posedge \wbdbg.i_clk ) \wbdbg.resp_fifo_wr_en  <= _0286_;
	always @(posedge \wbdbg.i_clk ) \wbdbg.resp_fifo_wr_data  <= _0288_;
	always @(posedge \wbdbg.i_clk ) \wbdbg.uart_tx_data  <= _0388_;
	always @(posedge \wbdbg.i_clk ) \wbdbg.uart_tx_valid  <= _0294_;
	always @(posedge \wbdbg.i_clk ) \wbdbg.resp_fifo_rd_en  <= _0290_;
	always @(posedge \wbdbg.i_clk ) \wbdbg.transmit_data  <= _0378_;
	always @(posedge \wbdbg.i_clk ) \wbdbg.transmit_state  <= _0364_;
	always @(posedge \wbdbg.i_clk ) \wbdbg.interrupt_1_rising  <= _0346_;
	always @(posedge \wbdbg.i_clk ) \wbdbg.interrupt_2_rising  <= _0336_;
	always @(posedge \wbdbg.i_clk ) \wbdbg.interrupt_3_rising  <= _0324_;
	always @(posedge \wbdbg.i_clk ) \wbdbg.interrupt_4_rising  <= _0310_;
	always @(posedge \wbdbg.i_clk ) \wbdbg.cmd_reset  <= _0414_;
	always @(posedge \wbdbg.i_clk ) \wbdbg.cmd_fifo_wr_en  <= _0434_;
	always @(posedge \wbdbg.i_clk ) \wbdbg.cmd_fifo_wr_data  <= _0442_;
	always @(posedge \wbdbg.i_clk ) \wbdbg.recieve_data  <= {_0408_, _0404_, _0400_, _0392_, _0396_};
	always @(posedge \wbdbg.i_clk ) \wbdbg.recieve_state  <= _0426_;
	always @(posedge \wbdbg.i_clk ) \wbdbg.drop_timer  <= _0418_;
	always @(posedge \wbdbg.i_clk ) \wbdbg.cmd_valid  <= _0446_;
	always @(posedge \wbdbg.i_clk ) \wbdbg.cmd_data  <= _0448_;
	always @(posedge \wbdbg.i_clk ) \wbdbg.cmd_fifo_rd_en  <= _0444_;
	always @(posedge \wbdbg.cmd_fifo.i_clk ) \wbdbg.cmd_fifo.wr_ptr  <= _0470_;
	always @(posedge \wbdbg.cmd_fifo.i_clk ) _0136_ <= _0466_;
	always @(posedge \wbdbg.cmd_fifo.i_clk ) _0137_ <= _0464_;
	always @(posedge \wbdbg.cmd_fifo.i_clk ) _0138_ <= _0462_;
	always @(posedge \wbdbg.cmd_fifo.i_clk ) \wbdbg.cmd_fifo.o_rd_data  <= _0482_;
	always @(posedge \wbdbg.cmd_fifo.i_clk ) \wbdbg.cmd_fifo.o_rd_valid  <= _0474_;
	always @(posedge \wbdbg.cmd_fifo.i_clk ) \wbdbg.cmd_fifo.rd_ptr  <= _0478_;
	always @(posedge \wbdbg.cmd_fifo.i_clk ) \wbdbg.cmd_fifo.len  <= _0488_;
	always @(posedge \wbdbg.resp_fifo.i_clk ) \wbdbg.resp_fifo.wr_ptr  <= _0510_;
	always @(posedge \wbdbg.resp_fifo.i_clk ) _0173_ <= _0506_;
	always @(posedge \wbdbg.resp_fifo.i_clk ) _0174_ <= _0504_;
	always @(posedge \wbdbg.resp_fifo.i_clk ) _0175_ <= _0502_;
	always @(posedge \wbdbg.resp_fifo.i_clk ) \wbdbg.resp_fifo.o_rd_data  <= _0522_;
	always @(posedge \wbdbg.resp_fifo.i_clk ) \wbdbg.resp_fifo.o_rd_valid  <= _0514_;
	always @(posedge \wbdbg.resp_fifo.i_clk ) \wbdbg.resp_fifo.rd_ptr  <= _0518_;
	always @(posedge \wbdbg.resp_fifo.i_clk ) \wbdbg.resp_fifo.len  <= _0528_;
	always @(posedge \wbdbg.uart_rx.i_clk ) \wbdbg.uart_rx.o_data  <= _0570_;
	always @(posedge \wbdbg.uart_rx.i_clk ) \wbdbg.uart_rx.o_valid  <= _0592_;
	always @(posedge \wbdbg.uart_rx.i_clk ) \wbdbg.uart_rx.counter  <= _0584_;
	always @(posedge \wbdbg.uart_rx.i_clk ) \wbdbg.uart_rx.state  <= _0600_;
	always @(posedge \wbdbg.uart_rx.i_clk ) _0207_ <= 8'hxx;
	always @(posedge \wbdbg.uart_rx.i_clk ) _0206_ <= 8'hxx;
	always @(posedge \wbdbg.uart_rx.i_clk ) _0208_ <= 32'hxxxxxxxx;
	always @(posedge \wbdbg.uart_rx.i_clk ) _0214_ <= 8'hxx;
	always @(posedge \wbdbg.uart_tx.i_clk ) \wbdbg.uart_tx.counter  <= _0622_;
	always @(posedge \wbdbg.uart_tx.i_clk ) \wbdbg.uart_tx.state  <= _0634_;
	always @(posedge \wbdbg.uart_tx.i_clk ) \wbdbg.uart_tx.data_send  <= _0626_;
	always @(posedge \wbdbg.wbdbgbusmaster.i_clk ) \wbdbg.wbdbgbusmaster.o_wb_cyc  <= _0654_;
	always @(posedge \wbdbg.wbdbgbusmaster.i_clk ) \wbdbg.wbdbgbusmaster.o_wb_stb  <= _0644_;
	always @(posedge \wbdbg.wbdbgbusmaster.i_clk ) \wbdbg.wbdbgbusmaster.o_wb_addr  <= _0664_;
	always @(posedge \wbdbg.wbdbgbusmaster.i_clk ) \wbdbg.wbdbgbusmaster.addr_inc  <= _0658_;
	always @(posedge \wbdbg.wbdbgbusmaster.i_clk ) \wbdbg.wbdbgbusmaster.o_wb_we  <= _0666_;
	always @(posedge \wbdbg.wbdbgbusmaster.i_clk ) \wbdbg.wbdbgbusmaster.o_wb_data  <= _0668_;
	always @(posedge \wbdbg.wbdbgbusmaster.i_clk ) \wbdbg.wbdbgbusmaster.o_resp_valid  <= _0676_;
	always @(posedge \wbdbg.wbdbgbusmaster.i_clk ) \wbdbg.wbdbgbusmaster.o_resp_data  <= _0686_;
	always @(posedge clk) uart_rx_sync <= {uart_rx_sync[1:0], uart_rx};
	always @(posedge clk) chip_inputs <= _0704_;
	always @(posedge clk) chip_clock <= _0700_;
	always @(posedge clk) chip_reset <= _0696_;
	always @(posedge clk) wb_ack <= _0688_;
	always @(posedge clk) data_in <= _0692_;
	assign _0286_ = (_0287_ ? 1'h1 : 1'h0);
	assign _0288_ = (_0289_ ? \wbdbg.wbdbgbusmaster.o_resp_data  : \wbdbg.resp_fifo_wr_data );
	assign _0290_ = (_0291_ ? 1'h1 : 1'h0);
	assign _0292_ = (_0293_ ? 1'h1 : 1'h0);
	assign _0294_ = (_0295_ ? 1'h0 : _0292_);
	assign _0298_ = (_0299_ ? 1'h0 : _0296_);
	assign _0300_ = (_0301_ ? _0296_ : _0298_);
	assign _0302_ = (_0303_ ? _0296_ : _0300_);
	assign _0304_ = (_0305_ ? _0296_ : _0302_);
	assign _0306_ = (_0307_ ? _0296_ : _0304_);
	assign _0308_ = (_0309_ ? _0296_ : _0306_);
	assign _0310_ = (_0311_ ? _0308_ : _0296_);
	assign _0314_ = (_0315_ ? 1'h0 : _0312_);
	assign _0316_ = (_0317_ ? _0312_ : _0314_);
	assign _0318_ = (_0319_ ? _0312_ : _0316_);
	assign _0320_ = (_0321_ ? _0312_ : _0318_);
	assign _0322_ = (_0323_ ? _0312_ : _0320_);
	assign _0324_ = (_0325_ ? _0322_ : _0312_);
	assign _0328_ = (_0329_ ? 1'h0 : _0326_);
	assign _0330_ = (_0331_ ? _0326_ : _0328_);
	assign _0332_ = (_0333_ ? _0326_ : _0330_);
	assign _0334_ = (_0335_ ? _0326_ : _0332_);
	assign _0336_ = (_0337_ ? _0334_ : _0326_);
	assign _0340_ = (_0341_ ? 1'h0 : _0338_);
	assign _0342_ = (_0343_ ? _0338_ : _0340_);
	assign _0344_ = (_0345_ ? _0338_ : _0342_);
	assign _0346_ = (_0347_ ? _0344_ : _0338_);
	assign _0348_ = (_0349_ ? 3'h0 : _0058_[2:0]);
	assign _0350_ = (_0351_ ? _0348_ : \wbdbg.transmit_state );
	assign _0352_ = (_0353_ ? 3'h1 : \wbdbg.transmit_state );
	assign _0354_ = (_0355_ ? 3'h1 : _0352_);
	assign _0356_ = (_0357_ ? 3'h1 : _0354_);
	assign _0358_ = (_0359_ ? 3'h1 : _0356_);
	assign _0360_ = (_0361_ ? \wbdbg.transmit_state  : _0358_);
	assign _0362_ = (_0363_ ? 3'h1 : _0360_);
	assign _0364_ = (_0365_ ? _0362_ : _0350_);
	assign _0366_ = (_0367_ ? 40'h0b00000000 : \wbdbg.transmit_data );
	assign _0368_ = (_0369_ ? 40'h0a00000000 : _0366_);
	assign _0370_ = (_0371_ ? 40'h0900000000 : _0368_);
	assign _0372_ = (_0373_ ? 40'h0800000000 : _0370_);
	assign _0374_ = (_0375_ ? \wbdbg.transmit_data  : _0372_);
	assign _0376_ = (_0377_ ? {4'h0, \wbdbg.resp_fifo.o_rd_data } : _0374_);
	assign _0378_ = (_0379_ ? _0376_ : \wbdbg.transmit_data );
	function [7:0] _0920_;
		input [7:0] a;
		input [39:0] b;
		input [4:0] s;
		casez (s)
			5'bzzzz1: _0920_ = b[7:0];
			5'bzzz1z: _0920_ = b[15:8];
			5'bzz1zz: _0920_ = b[23:16];
			5'bz1zzz: _0920_ = b[31:24];
			5'b1zzzz: _0920_ = b[39:32];
			default: _0920_ = a;
		endcase
	endfunction
	assign _0380_ = _0920_(8'h00, \wbdbg.transmit_data , {_0385_, _0384_, _0383_, _0382_, _0381_});
	assign _0381_ = \wbdbg.transmit_state  == 3'h5;
	assign _0382_ = \wbdbg.transmit_state  == 3'h4;
	assign _0383_ = \wbdbg.transmit_state  == 3'h3;
	assign _0384_ = \wbdbg.transmit_state  == 3'h2;
	assign _0385_ = \wbdbg.transmit_state  == 3'h1;
	assign _0386_ = (_0387_ ? _0380_ : \wbdbg.uart_tx_data );
	assign _0388_ = (_0389_ ? \wbdbg.uart_tx_data  : _0386_);
	assign _0390_ = (_0391_ ? \wbdbg.uart_rx.o_data  : \wbdbg.recieve_data [15:8]);
	assign _0391_ = \wbdbg.recieve_state  == 3'h3;
	assign _0392_ = (_0393_ ? _0390_ : \wbdbg.recieve_data [15:8]);
	assign _0394_ = (_0395_ ? \wbdbg.uart_rx.o_data  : \wbdbg.recieve_data [7:0]);
	assign _0395_ = \wbdbg.recieve_state  == 3'h4;
	assign _0396_ = (_0397_ ? _0394_ : \wbdbg.recieve_data [7:0]);
	assign _0398_ = (_0399_ ? \wbdbg.uart_rx.o_data  : \wbdbg.recieve_data [23:16]);
	assign _0399_ = \wbdbg.recieve_state  == 3'h2;
	assign _0400_ = (_0401_ ? _0398_ : \wbdbg.recieve_data [23:16]);
	assign _0402_ = (_0403_ ? \wbdbg.uart_rx.o_data  : \wbdbg.recieve_data [31:24]);
	assign _0403_ = \wbdbg.recieve_state  == 3'h1;
	assign _0404_ = (_0405_ ? _0402_ : \wbdbg.recieve_data [31:24]);
	assign _0406_ = (_0407_ ? \wbdbg.uart_rx.o_data  : \wbdbg.recieve_data [39:32]);
	assign _0407_ = !\wbdbg.recieve_state ;
	assign _0408_ = (_0409_ ? _0406_ : \wbdbg.recieve_data [39:32]);
	assign _0410_ = (_0411_ ? 1'h1 : 1'h0);
	assign _0412_ = (_0413_ ? _0410_ : 1'h0);
	assign _0414_ = (_0415_ ? _0412_ : 1'h0);
	assign _0416_ = (_0417_ ? _0107_[25:0] : \wbdbg.drop_timer );
	assign _0418_ = (_0419_ ? 26'h17d7840 : _0416_);
	assign _0420_ = (_0421_ ? 3'h0 : \wbdbg.recieve_state );
	assign _0422_ = (_0423_ ? _0420_ : \wbdbg.recieve_state );
	assign _0424_ = (_0425_ ? 3'h0 : _0059_[2:0]);
	assign _0426_ = (_0427_ ? _0424_ : _0422_);
	assign _0428_ = (_0130_ ? 1'h0 : 1'h1);
	assign _0430_ = (_0431_ ? 1'h0 : _0428_);
	assign _0432_ = (_0433_ ? _0430_ : 1'h0);
	assign _0434_ = (_0435_ ? _0432_ : 1'h0);
	assign _0436_ = (_0130_ ? \wbdbg.cmd_fifo_wr_data  : {\wbdbg.recieve_data [35:8], \wbdbg.uart_rx.o_data });
	assign _0438_ = (_0439_ ? \wbdbg.cmd_fifo_wr_data  : _0436_);
	assign _0440_ = (_0441_ ? _0438_ : \wbdbg.cmd_fifo_wr_data );
	assign _0442_ = (_0443_ ? _0440_ : \wbdbg.cmd_fifo_wr_data );
	assign _0444_ = (_0445_ ? 1'h1 : 1'h0);
	assign _0446_ = (_0447_ ? 1'h1 : 1'h0);
	assign _0448_ = (_0449_ ? \wbdbg.cmd_fifo.o_rd_data  : \wbdbg.cmd_data );
	assign _0450_ = (_0451_ ? 36'hfffffffff : 36'h000000000);
	assign _0452_ = (_0453_ ? 36'hxxxxxxxxx : _0450_);
	assign _0454_ = (_0455_ ? \wbdbg.cmd_fifo_wr_data  : 36'hxxxxxxxxx);
	assign _0456_ = (_0457_ ? 36'hxxxxxxxxx : _0454_);
	assign _0458_ = (_0459_ ? \wbdbg.cmd_fifo.wr_ptr  : 4'hx);
	assign _0460_ = (_0461_ ? 4'hx : _0458_);
	assign _0462_ = (_0463_ ? 36'h000000000 : _0125_);
	assign _0464_ = (_0465_ ? 36'hxxxxxxxxx : _0124_);
	assign _0466_ = (_0467_ ? 4'hx : _0123_);
	assign _0468_ = (_0469_ ? _0126_[3:0] : \wbdbg.cmd_fifo.wr_ptr );
	assign _0470_ = (_0471_ ? 4'h0 : _0468_);
	assign _0472_ = (_0473_ ? _0102_ : 1'h0);
	assign _0474_ = (_0475_ ? 1'h0 : _0472_);
	assign _0476_ = (_0477_ ? _0127_[3:0] : \wbdbg.cmd_fifo.rd_ptr );
	assign _0478_ = (_0479_ ? 4'h0 : _0476_);
	assign _0480_ = (_0481_ ? _0135_ : \wbdbg.cmd_fifo.o_rd_data );
	assign _0482_ = (_0483_ ? \wbdbg.cmd_fifo.o_rd_data  : _0480_);
	assign _0484_ = (_0485_ ? _0128_[4:0] : \wbdbg.cmd_fifo.len );
	assign _0486_ = (_0487_ ? _0144_[4:0] : _0484_);
	assign _0488_ = (_0489_ ? 5'h00 : _0486_);
	assign _0490_ = (_0491_ ? 36'hfffffffff : 36'h000000000);
	assign _0492_ = (_0493_ ? 36'hxxxxxxxxx : _0490_);
	assign _0494_ = (_0495_ ? \wbdbg.resp_fifo_wr_data  : 36'hxxxxxxxxx);
	assign _0496_ = (_0497_ ? 36'hxxxxxxxxx : _0494_);
	assign _0498_ = (_0499_ ? \wbdbg.resp_fifo.wr_ptr  : 4'hx);
	assign _0500_ = (_0501_ ? 4'hx : _0498_);
	assign _0502_ = (_0503_ ? 36'h000000000 : _0162_);
	assign _0504_ = (_0505_ ? 36'hxxxxxxxxx : _0161_);
	assign _0506_ = (_0507_ ? 4'hx : _0160_);
	assign _0508_ = (_0509_ ? _0163_[3:0] : \wbdbg.resp_fifo.wr_ptr );
	assign _0510_ = (_0511_ ? 4'h0 : _0508_);
	assign _0512_ = (_0513_ ? _0092_ : 1'h0);
	assign _0514_ = (_0515_ ? 1'h0 : _0512_);
	assign _0516_ = (_0517_ ? _0164_[3:0] : \wbdbg.resp_fifo.rd_ptr );
	assign _0518_ = (_0519_ ? 4'h0 : _0516_);
	assign _0520_ = (_0521_ ? _0172_ : \wbdbg.resp_fifo.o_rd_data );
	assign _0522_ = (_0523_ ? \wbdbg.resp_fifo.o_rd_data  : _0520_);
	assign _0524_ = (_0525_ ? _0165_[4:0] : \wbdbg.resp_fifo.len );
	assign _0526_ = (_0527_ ? _0181_[4:0] : _0524_);
	assign _0528_ = (_0529_ ? 5'h00 : _0526_);
	assign _0530_ = (_0531_ ? \wbdbg.uart_rx.o_data  : _0218_);
	assign _0532_ = (_0533_ ? _0530_ : 8'hxx);
	assign _0534_ = (_0535_ ? 8'hxx : _0532_);
	assign _0536_ = (_0537_ ? _0208_ : _0223_);
	assign _0538_ = (_0539_ ? _0536_ : 32'hxxxxxxxx);
	assign _0540_ = (_0541_ ? 32'hxxxxxxxx : _0538_);
	assign _0542_ = (_0543_ ? _0206_ : _0220_);
	assign _0544_ = (_0545_ ? _0542_ : 8'hxx);
	assign _0546_ = (_0547_ ? 8'hxx : _0544_);
	assign _0548_ = (_0549_ ? _0207_ : _0219_);
	assign _0550_ = (_0551_ ? _0548_ : 8'hxx);
	assign _0552_ = (_0553_ ? 8'hxx : _0550_);
	assign _0554_ = (_0555_ ? _0202_ : \wbdbg.uart_rx.o_data );
	assign _0556_ = (_0557_ ? 8'hxx : _0554_);
	assign _0558_ = (_0559_ ? _0201_ : _0208_);
	assign _0560_ = (_0561_ ? 32'hxxxxxxxx : _0558_);
	assign _0562_ = (_0563_ ? _0199_ : _0206_);
	assign _0564_ = (_0565_ ? 8'hxx : _0562_);
	assign _0566_ = (_0567_ ? _0200_ : _0207_);
	assign _0568_ = (_0569_ ? 8'hxx : _0566_);
	assign _0570_ = (_0571_ ? \wbdbg.uart_rx.o_data  : _0198_);
	assign _0572_ = (_0573_ ? _0208_ : _0197_);
	assign _0574_ = (_0575_ ? _0206_ : _0195_);
	assign _0576_ = (_0577_ ? _0207_ : _0196_);
	assign _0578_ = (_0579_ ? 10'h00a : 10'h08b);
	assign _0580_ = (_0581_ ? _0578_ : _0224_[9:0]);
	assign _0582_ = (uart_rx_sync[2] ? 10'h00a : 10'h0d0);
	assign _0584_ = (_0585_ ? _0582_ : _0580_);
	assign _0586_ = (_0587_ ? 1'h1 : 1'h0);
	assign _0588_ = (_0589_ ? _0586_ : 1'h0);
	assign _0590_ = (_0591_ ? _0588_ : 1'h0);
	assign _0592_ = (_0593_ ? 1'h0 : _0590_);
	assign _0594_ = (_0595_ ? 4'h0 : _0203_[3:0]);
	assign _0596_ = (_0597_ ? _0594_ : \wbdbg.uart_rx.state );
	assign _0598_ = (uart_rx_sync[2] ? \wbdbg.uart_rx.state  : 4'h1);
	assign _0600_ = (_0601_ ? _0598_ : _0596_);
	assign _0602_ = (_0603_ ? 1'h1 : _0242_);
	assign _0604_ = (_0605_ ? 1'hx : _0602_);
	assign _0606_ = (_0607_ ? 1'hx : _0604_);
	assign _0608_ = (_0609_ ? 1'h0 : _0232_);
	assign _0610_ = (_0611_ ? 1'hx : _0608_);
	assign _0612_ = (_0613_ ? 1'h1 : _0231_);
	assign _0614_ = (_0615_ ? 10'h08a : 10'h08b);
	assign _0616_ = (_0617_ ? 10'h00a : _0614_);
	assign _0618_ = (_0619_ ? _0616_ : _0243_[9:0]);
	assign _0620_ = (_0621_ ? 10'h08b : 10'h00a);
	assign _0622_ = (_0623_ ? _0620_ : _0618_);
	assign _0624_ = (_0625_ ? \wbdbg.uart_tx_data  : \wbdbg.uart_tx.data_send );
	assign _0626_ = (_0627_ ? _0624_ : \wbdbg.uart_tx.data_send );
	assign _0628_ = (_0629_ ? 4'h0 : _0233_[3:0]);
	assign _0630_ = (_0631_ ? _0628_ : \wbdbg.uart_tx.state );
	assign _0632_ = (_0633_ ? 4'h1 : \wbdbg.uart_tx.state );
	assign _0634_ = (_0635_ ? _0632_ : _0630_);
	assign _0636_ = (_0637_ ? 1'h1 : \wbdbg.wbdbgbusmaster.o_wb_stb );
	assign _0638_ = (_0639_ ? \wbdbg.wbdbgbusmaster.o_wb_stb  : _0636_);
	assign _0642_ = (_0643_ ? 1'h0 : _0638_);
	assign _0644_ = (_0645_ ? 1'h0 : _0642_);
	assign _0646_ = (_0647_ ? 1'h1 : \wbdbg.wbdbgbusmaster.o_wb_cyc );
	assign _0648_ = (_0649_ ? 1'h0 : \wbdbg.wbdbgbusmaster.o_wb_cyc );
	assign _0650_ = (_0651_ ? _0648_ : _0646_);
	assign _0652_ = (_0653_ ? \wbdbg.wbdbgbusmaster.o_wb_cyc  : _0650_);
	assign _0654_ = (_0655_ ? 1'h0 : _0652_);
	assign _0656_ = (_0657_ ? _0268_ : \wbdbg.wbdbgbusmaster.addr_inc );
	assign _0658_ = (_0659_ ? _0656_ : \wbdbg.wbdbgbusmaster.addr_inc );
	assign _0660_ = (_0661_ ? _0260_ : \wbdbg.wbdbgbusmaster.o_wb_addr );
	assign _0662_ = (_0663_ ? \wbdbg.cmd_data [31:0] : \wbdbg.wbdbgbusmaster.o_wb_addr );
	assign _0664_ = (_0665_ ? _0662_ : _0660_);
	assign _0666_ = (\wbdbg.wbdbgbusmaster.o_wb_cyc  ? \wbdbg.wbdbgbusmaster.o_wb_we  : _0272_);
	assign _0670_ = (_0671_ ? 1'h1 : 1'h0);
	assign _0672_ = (_0673_ ? 1'h1 : _0670_);
	assign _0676_ = (_0677_ ? 1'h1 : _0674_);
	assign _0678_ = (_0679_ ? 36'h300000000 : \wbdbg.wbdbgbusmaster.o_resp_data );
	assign _0680_ = (_0681_ ? 36'h200000000 : {24'h100000, chip_outputs});
	assign _0682_ = (_0683_ ? _0680_ : _0678_);
	assign _0686_ = (_0687_ ? 36'h500000000 : _0684_);
	assign _0688_ = (_0689_ ? 1'h1 : 1'h0);
	assign _0690_ = (_0691_ ? data_in : {20'h00000, chip_outputs});
	assign _0692_ = (_0693_ ? _0690_ : data_in);
	assign _0694_ = (_0695_ ? \wbdbg.wbdbgbusmaster.o_wb_data [12] : chip_reset);
	assign _0696_ = (_0697_ ? _0694_ : chip_reset);
	assign _0698_ = (_0699_ ? \wbdbg.wbdbgbusmaster.o_wb_data [13] : chip_clock);
	assign _0700_ = (_0701_ ? _0698_ : chip_clock);
	assign _0702_ = (_0703_ ? \wbdbg.wbdbgbusmaster.o_wb_data [11:0] : chip_inputs);
	assign _0704_ = (_0705_ ? _0702_ : chip_inputs);
	SB_PLL40_CORE #(
		.DIVF(7'h28),
		.DIVQ(3'h6),
		.DIVR(4'h3),
		.FEEDBACK_PATH("SIMPLE"),
		.FILTER_RANGE(3'h2)
	) uut(
		.BYPASS(1'h0),
		.PLLOUTCORE(clk),
		.REFERENCECLK(clk100),
		.RESETB(1'h1)
	);
	assign _0006_ = 32'd0;
	assign _0007_ = 32'd0;
	assign _0008_ = 32'd0;
	assign _0009_ = 32'd0;
	assign _0010_ = 32'd0;
	assign _0011_ = 32'd0;
	assign \wbdbg.uart_rx.i_clk  = \wbdbg.i_clk ;
	assign \wbdbg.uart_rx.i_in  = \wbdbg.i_rx ;
	assign \wbdbg.uart_rx_valid  = \wbdbg.uart_rx.o_valid ;
	assign \wbdbg.uart_rx_data  = \wbdbg.uart_rx.o_data ;
	assign \wbdbg.uart_tx.o_ready  = _0234_;
	assign \wbdbg.uart_tx.i_clk  = \wbdbg.i_clk ;
	assign \wbdbg.uart_tx.i_valid  = \wbdbg.uart_tx_valid ;
	assign \wbdbg.uart_tx.i_data  = \wbdbg.uart_tx_data ;
	assign \wbdbg.o_tx  = \wbdbg.uart_tx.o_out ;
	assign \wbdbg.uart_tx_ready  = \wbdbg.uart_tx.o_ready ;
	assign \wbdbg.wbdbgbusmaster.o_cmd_ready  = _0281_;
	assign \wbdbg.wbdbgbusmaster.cmd_recv  = _0269_;
	assign \wbdbg.wbdbgbusmaster.cmd_inst  = \wbdbg.wbdbgbusmaster.i_cmd_data [35:32];
	assign \wbdbg.wbdbgbusmaster.cmd_data  = \wbdbg.wbdbgbusmaster.i_cmd_data [31:0];
	assign \wbdbg.wbdbgbusmaster.i_clk  = \wbdbg.i_clk ;
	assign \wbdbg.wbdbgbusmaster.i_wb_data  = \wbdbg.i_wb_data ;
	assign \wbdbg.wbdbgbusmaster.i_wb_stall  = \wbdbg.i_wb_stall ;
	assign \wbdbg.wbdbgbusmaster.i_wb_err  = \wbdbg.i_wb_err ;
	assign \wbdbg.wbdbgbusmaster.i_wb_ack  = \wbdbg.i_wb_ack ;
	assign \wbdbg.o_wb_data  = \wbdbg.wbdbgbusmaster.o_wb_data ;
	assign \wbdbg.o_wb_addr  = \wbdbg.wbdbgbusmaster.o_wb_addr ;
	assign \wbdbg.o_wb_we  = \wbdbg.wbdbgbusmaster.o_wb_we ;
	assign \wbdbg.o_wb_stb  = \wbdbg.wbdbgbusmaster.o_wb_stb ;
	assign \wbdbg.o_wb_cyc  = \wbdbg.wbdbgbusmaster.o_wb_cyc ;
	assign \wbdbg.resp_data  = \wbdbg.wbdbgbusmaster.o_resp_data ;
	assign \wbdbg.resp_valid  = \wbdbg.wbdbgbusmaster.o_resp_valid ;
	assign \wbdbg.wbdbgbusmaster.i_cmd_data  = \wbdbg.cmd_data ;
	assign \wbdbg.cmd_ready  = \wbdbg.wbdbgbusmaster.o_cmd_ready ;
	assign \wbdbg.wbdbgbusmaster.i_cmd_valid  = \wbdbg.cmd_valid ;
	assign \wbdbg.wbdbgbusmaster.i_cmd_reset  = \wbdbg.cmd_reset ;
	assign \wbdbg.cmd_fifo.o_empty  = _0129_;
	assign \wbdbg.cmd_fifo.o_full  = _0130_;
	assign \wbdbg.cmd_fifo.i_rst  = \wbdbg.cmd_reset ;
	assign \wbdbg.cmd_fifo.i_clk  = \wbdbg.i_clk ;
	assign \wbdbg.cmd_fifo_full  = \wbdbg.cmd_fifo.o_full ;
	assign \wbdbg.cmd_fifo_empty  = \wbdbg.cmd_fifo.o_empty ;
	assign \wbdbg.cmd_fifo.i_wr_data  = \wbdbg.cmd_fifo_wr_data ;
	assign \wbdbg.cmd_fifo.i_wr_en  = \wbdbg.cmd_fifo_wr_en ;
	assign \wbdbg.cmd_fifo_rd_valid  = \wbdbg.cmd_fifo.o_rd_valid ;
	assign \wbdbg.cmd_fifo_rd_data  = \wbdbg.cmd_fifo.o_rd_data ;
	assign \wbdbg.cmd_fifo.i_rd_en  = \wbdbg.cmd_fifo_rd_en ;
	assign \wbdbg.resp_fifo.o_empty  = _0166_;
	assign \wbdbg.resp_fifo.o_full  = _0167_;
	assign \wbdbg.resp_fifo.i_rst  = \wbdbg.cmd_reset ;
	assign \wbdbg.resp_fifo.i_clk  = \wbdbg.i_clk ;
	assign \wbdbg.resp_fifo_full  = \wbdbg.resp_fifo.o_full ;
	assign \wbdbg.resp_fifo_empty  = \wbdbg.resp_fifo.o_empty ;
	assign \wbdbg.resp_fifo.i_wr_data  = \wbdbg.resp_fifo_wr_data ;
	assign \wbdbg.resp_fifo.i_wr_en  = \wbdbg.resp_fifo_wr_en ;
	assign \wbdbg.resp_fifo_rd_valid  = \wbdbg.resp_fifo.o_rd_valid ;
	assign \wbdbg.resp_fifo_rd_data  = \wbdbg.resp_fifo.o_rd_data ;
	assign \wbdbg.resp_fifo.i_rd_en  = \wbdbg.resp_fifo_rd_en ;
	assign \wbdbg.i_clk  = clk;
	assign \wbdbg.i_interrupt_4  = _0011_[0];
	assign \wbdbg.i_interrupt_3  = _0010_[0];
	assign \wbdbg.i_interrupt_2  = _0009_[0];
	assign \wbdbg.i_interrupt_1  = _0008_[0];
	assign \wbdbg.i_wb_data  = {20'h00000, chip_outputs};
	assign \wbdbg.i_wb_stall  = _0007_[0];
	assign \wbdbg.i_wb_err  = _0006_[0];
	assign \wbdbg.i_wb_ack  = wb_ack;
	assign data_out = \wbdbg.o_wb_data ;
	assign wb_we = \wbdbg.o_wb_we ;
	assign wb_stb = \wbdbg.o_wb_stb ;
	assign wb_cyc = \wbdbg.o_wb_cyc ;
	assign \wbdbg.i_rx  = uart_rx_sync[2];
	assign uart_tx = \wbdbg.o_tx ;
	assign _0277_ = \wbdbg.cmd_reset ;
	assign _0276_ = 1'h1;
	assign _0282_ = 1'h1;
	assign _0271_ = \wbdbg.wbdbgbusmaster.o_wb_stb ;
	assign _0273_ = 1'h0;
	assign _0284_ = 1'h1;
	assign _0213_ = \wbdbg.uart_rx.i_in ;
	assign _0204_ = {7'h00, uart_rx_sync[2]};
	assign _0071_ = 1'h0;
	assign _0070_ = 1'h0;
	assign _0069_ = 1'h0;
	assign _0068_ = 1'h0;
	assign _0061_ = _0060_;
	assign _0106_ = _0101_;
	assign _0221_ = _0222_;
	assign _0238_ = _0241_;
	assign _0237_ = _0241_;
	assign _0235_ = _0239_;
	assign _0265_ = _0268_;
	assign _0264_ = _0268_;
	assign _0263_ = _0267_;
	assign _0262_ = _0266_;
	assign _0281_ = _0283_;
	assign _0234_ = _0239_;
	assign _0143_ = _0100_;
	assign _0142_ = _0103_;
	assign _0141_ = _0102_;
	assign _0139_ = _0102_;
	assign _0180_ = _0087_;
	assign _0179_ = _0094_;
	assign _0178_ = _0092_;
	assign _0176_ = _0092_;
	assign _0215_ = _0216_;
	assign _0279_ = _0280_;
	assign _0057_ = 1'h0;
	assign _0039_ = 1'h0;
	assign _0040_ = 1'h0;
	assign _0036_ = 1'h0;
	assign _0038_ = 1'h0;
	assign _0037_ = 36'h000000000;
	assign _0052_ = 1'h0;
	assign _0054_ = 1'h0;
	assign _0053_ = 36'h000000000;
	assign _0055_ = 40'h0000000000;
	assign _0056_ = 3'h0;
	assign _0042_ = 1'h0;
	assign _0044_ = 1'h0;
	assign _0046_ = 1'h0;
	assign _0048_ = 1'h0;
	assign _0043_ = 1'h0;
	assign _0045_ = 1'h0;
	assign _0047_ = 1'h0;
	assign _0049_ = 1'h0;
	assign _0025_ = 1'h0;
	assign _0023_ = 1'h0;
	assign _0021_ = 1'h0;
	assign _0019_ = 1'h0;
	assign _0050_ = 40'h0000000000;
	assign _0051_ = 3'h0;
	assign _0041_ = 26'h17d7840;
	assign _0120_ = 1'h0;
	assign _0122_ = 4'h0;
	assign _0121_ = 4'h0;
	assign _0119_ = 5'h00;
	assign _0110_ = _0118_;
	assign _0109_ = _0117_;
	assign _0108_ = _0116_;
	assign _0157_ = 1'h0;
	assign _0159_ = 4'h0;
	assign _0158_ = 4'h0;
	assign _0156_ = 5'h00;
	assign _0147_ = _0155_;
	assign _0146_ = _0154_;
	assign _0145_ = _0153_;
	assign _0194_ = 4'h0;
	assign _0187_ = _0193_;
	assign _0185_ = _0193_;
	assign _0184_ = _0192_;
	assign _0182_ = _0190_;
	assign _0183_ = _0191_;
	assign _0227_ = _0229_;
	assign _0230_ = 4'h0;
	assign _0254_ = 1'h0;
	assign _0256_ = 1'h0;
	assign _0258_ = 1'h0;
	assign _0259_ = 1'h0;
	assign _0255_ = 32'd0;
	assign _0257_ = 32'd0;
	assign _0253_ = 1'h0;
	assign _0004_ = {uart_rx_sync[1:0], uart_rx};
	assign _0287_ = _0067_;
	assign _0031_ = _0286_;
	assign _0289_ = _0067_;
	assign _0030_ = _0288_;
	assign _0291_ = _0078_;
	assign _0029_ = _0290_;
	assign _0293_ = _0079_;
	assign _0295_ = _0061_;
	assign _0035_ = _0294_;
	assign _0297_ = _0071_;
	assign _0299_ = \wbdbg.interrupt_4_rising ;
	assign _0301_ = \wbdbg.interrupt_3_rising ;
	assign _0303_ = \wbdbg.interrupt_2_rising ;
	assign _0305_ = \wbdbg.interrupt_1_rising ;
	assign _0307_ = \wbdbg.resp_fifo_rd_en ;
	assign _0309_ = \wbdbg.resp_fifo_rd_valid ;
	assign _0311_ = _0061_;
	assign _0026_ = _0310_;
	assign _0313_ = _0070_;
	assign _0315_ = \wbdbg.interrupt_3_rising ;
	assign _0317_ = \wbdbg.interrupt_2_rising ;
	assign _0319_ = \wbdbg.interrupt_1_rising ;
	assign _0321_ = \wbdbg.resp_fifo_rd_en ;
	assign _0323_ = \wbdbg.resp_fifo_rd_valid ;
	assign _0325_ = _0061_;
	assign _0024_ = _0324_;
	assign _0327_ = _0069_;
	assign _0329_ = \wbdbg.interrupt_2_rising ;
	assign _0331_ = \wbdbg.interrupt_1_rising ;
	assign _0333_ = \wbdbg.resp_fifo_rd_en ;
	assign _0335_ = \wbdbg.resp_fifo_rd_valid ;
	assign _0337_ = _0061_;
	assign _0022_ = _0336_;
	assign _0339_ = _0068_;
	assign _0341_ = \wbdbg.interrupt_1_rising ;
	assign _0343_ = \wbdbg.resp_fifo_rd_en ;
	assign _0345_ = \wbdbg.resp_fifo_rd_valid ;
	assign _0347_ = _0061_;
	assign _0020_ = _0346_;
	assign _0349_ = _0062_;
	assign _0351_ = _0079_;
	assign _0353_ = \wbdbg.interrupt_4_rising ;
	assign _0355_ = \wbdbg.interrupt_3_rising ;
	assign _0357_ = \wbdbg.interrupt_2_rising ;
	assign _0359_ = \wbdbg.interrupt_1_rising ;
	assign _0361_ = \wbdbg.resp_fifo_rd_en ;
	assign _0363_ = \wbdbg.resp_fifo_rd_valid ;
	assign _0365_ = _0061_;
	assign _0033_ = _0364_;
	assign _0367_ = \wbdbg.interrupt_4_rising ;
	assign _0369_ = \wbdbg.interrupt_3_rising ;
	assign _0371_ = \wbdbg.interrupt_2_rising ;
	assign _0373_ = \wbdbg.interrupt_1_rising ;
	assign _0375_ = \wbdbg.resp_fifo_rd_en ;
	assign _0377_ = \wbdbg.resp_fifo_rd_valid ;
	assign _0379_ = _0061_;
	assign _0032_ = _0378_;
	assign _0387_ = _0079_;
	assign _0389_ = _0061_;
	assign _0034_ = _0388_;
	assign _0393_ = \wbdbg.uart_rx_valid ;
	assign _0027_[15:8] = _0392_;
	assign _0397_ = \wbdbg.uart_rx_valid ;
	assign _0027_[7:0] = _0396_;
	assign _0401_ = \wbdbg.uart_rx_valid ;
	assign _0027_[23:16] = _0400_;
	assign _0405_ = \wbdbg.uart_rx_valid ;
	assign _0027_[31:24] = _0404_;
	assign _0409_ = \wbdbg.uart_rx_valid ;
	assign _0027_[39:32] = _0408_;
	assign _0411_ = _0064_;
	assign _0413_ = _0063_;
	assign _0415_ = \wbdbg.uart_rx_valid ;
	assign _0016_ = _0414_;
	assign _0417_ = _0066_;
	assign _0419_ = \wbdbg.uart_rx_valid ;
	assign _0018_ = _0418_;
	assign _0421_ = _0065_;
	assign _0423_ = _0066_;
	assign _0425_ = _0063_;
	assign _0427_ = \wbdbg.uart_rx_valid ;
	assign _0028_ = _0426_;
	assign _0429_ = _0100_;
	assign _0431_ = _0064_;
	assign _0433_ = _0063_;
	assign _0435_ = \wbdbg.uart_rx_valid ;
	assign _0015_ = _0434_;
	assign _0437_ = _0100_;
	assign _0439_ = _0064_;
	assign _0441_ = _0063_;
	assign _0443_ = \wbdbg.uart_rx_valid ;
	assign _0014_ = _0442_;
	assign _0445_ = _0084_;
	assign _0013_ = _0444_;
	assign _0447_ = _0086_;
	assign _0017_ = _0446_;
	assign _0449_ = _0086_;
	assign _0012_ = _0448_;
	assign _0451_ = \wbdbg.cmd_fifo.i_wr_en ;
	assign _0453_ = \wbdbg.cmd_fifo.i_rst ;
	assign _0125_ = _0452_;
	assign _0455_ = \wbdbg.cmd_fifo.i_wr_en ;
	assign _0457_ = \wbdbg.cmd_fifo.i_rst ;
	assign _0124_ = _0456_;
	assign _0459_ = \wbdbg.cmd_fifo.i_wr_en ;
	assign _0461_ = \wbdbg.cmd_fifo.i_rst ;
	assign _0123_ = _0460_;
	assign _0463_ = \wbdbg.cmd_fifo.i_rst ;
	assign _0118_ = _0462_;
	assign _0465_ = \wbdbg.cmd_fifo.i_rst ;
	assign _0117_ = _0464_;
	assign _0467_ = \wbdbg.cmd_fifo.i_rst ;
	assign _0116_ = _0466_;
	assign _0469_ = \wbdbg.cmd_fifo.i_wr_en ;
	assign _0471_ = \wbdbg.cmd_fifo.i_rst ;
	assign _0115_ = _0470_;
	assign _0473_ = \wbdbg.cmd_fifo.i_rd_en ;
	assign _0475_ = \wbdbg.cmd_fifo.i_rst ;
	assign _0113_ = _0474_;
	assign _0477_ = \wbdbg.cmd_fifo.i_rd_en ;
	assign _0479_ = \wbdbg.cmd_fifo.i_rst ;
	assign _0114_ = _0478_;
	assign _0481_ = \wbdbg.cmd_fifo.i_rd_en ;
	assign _0483_ = \wbdbg.cmd_fifo.i_rst ;
	assign _0112_ = _0482_;
	assign _0485_ = _0134_;
	assign _0487_ = _0132_;
	assign _0489_ = \wbdbg.cmd_fifo.i_rst ;
	assign _0111_ = _0488_;
	assign _0491_ = \wbdbg.resp_fifo.i_wr_en ;
	assign _0493_ = \wbdbg.resp_fifo.i_rst ;
	assign _0162_ = _0492_;
	assign _0495_ = \wbdbg.resp_fifo.i_wr_en ;
	assign _0497_ = \wbdbg.resp_fifo.i_rst ;
	assign _0161_ = _0496_;
	assign _0499_ = \wbdbg.resp_fifo.i_wr_en ;
	assign _0501_ = \wbdbg.resp_fifo.i_rst ;
	assign _0160_ = _0500_;
	assign _0503_ = \wbdbg.resp_fifo.i_rst ;
	assign _0155_ = _0502_;
	assign _0505_ = \wbdbg.resp_fifo.i_rst ;
	assign _0154_ = _0504_;
	assign _0507_ = \wbdbg.resp_fifo.i_rst ;
	assign _0153_ = _0506_;
	assign _0509_ = \wbdbg.resp_fifo.i_wr_en ;
	assign _0511_ = \wbdbg.resp_fifo.i_rst ;
	assign _0152_ = _0510_;
	assign _0513_ = \wbdbg.resp_fifo.i_rd_en ;
	assign _0515_ = \wbdbg.resp_fifo.i_rst ;
	assign _0150_ = _0514_;
	assign _0517_ = \wbdbg.resp_fifo.i_rd_en ;
	assign _0519_ = \wbdbg.resp_fifo.i_rst ;
	assign _0151_ = _0518_;
	assign _0521_ = \wbdbg.resp_fifo.i_rd_en ;
	assign _0523_ = \wbdbg.resp_fifo.i_rst ;
	assign _0149_ = _0522_;
	assign _0525_ = _0171_;
	assign _0527_ = _0169_;
	assign _0529_ = \wbdbg.resp_fifo.i_rst ;
	assign _0148_ = _0528_;
	assign _0531_ = _0212_;
	assign _0533_ = _0211_;
	assign _0535_ = _0209_;
	assign _0202_ = _0534_;
	assign _0537_ = _0212_;
	assign _0539_ = _0211_;
	assign _0541_ = _0209_;
	assign _0201_ = _0540_;
	assign _0543_ = _0212_;
	assign _0545_ = _0211_;
	assign _0547_ = _0209_;
	assign _0199_ = _0546_;
	assign _0549_ = _0212_;
	assign _0551_ = _0211_;
	assign _0553_ = _0209_;
	assign _0200_ = _0552_;
	assign _0555_ = _0211_;
	assign _0557_ = _0209_;
	assign _0198_ = _0556_;
	assign _0559_ = _0211_;
	assign _0561_ = _0209_;
	assign _0197_ = _0560_;
	assign _0563_ = _0211_;
	assign _0565_ = _0209_;
	assign _0195_ = _0564_;
	assign _0567_ = _0211_;
	assign _0569_ = _0209_;
	assign _0196_ = _0568_;
	assign _0571_ = _0209_;
	assign _0193_ = _0570_;
	assign _0573_ = _0209_;
	assign _0192_ = _0572_;
	assign _0575_ = _0209_;
	assign _0190_ = _0574_;
	assign _0577_ = _0209_;
	assign _0191_ = _0576_;
	assign _0579_ = _0212_;
	assign _0581_ = _0211_;
	assign _0583_ = _0210_;
	assign _0585_ = _0209_;
	assign _0186_ = _0584_;
	assign _0587_ = _0213_;
	assign _0589_ = _0212_;
	assign _0591_ = _0211_;
	assign _0593_ = _0209_;
	assign _0188_ = _0592_;
	assign _0595_ = _0212_;
	assign _0597_ = _0211_;
	assign _0599_ = _0210_;
	assign _0601_ = _0209_;
	assign _0189_ = _0600_;
	assign _0603_ = _0241_;
	assign _0605_ = _0240_;
	assign _0607_ = _0239_;
	assign _0232_ = _0606_;
	assign _0609_ = _0240_;
	assign _0611_ = _0239_;
	assign _0231_ = _0610_;
	assign _0613_ = _0239_;
	assign _0229_ = _0612_;
	assign _0615_ = _0238_;
	assign _0617_ = _0237_;
	assign _0619_ = _0236_;
	assign _0621_ = \wbdbg.uart_tx.i_valid ;
	assign _0623_ = _0235_;
	assign _0225_ = _0622_;
	assign _0625_ = \wbdbg.uart_tx.i_valid ;
	assign _0627_ = _0235_;
	assign _0226_ = _0626_;
	assign _0629_ = _0237_;
	assign _0631_ = _0236_;
	assign _0633_ = \wbdbg.uart_tx.i_valid ;
	assign _0635_ = _0235_;
	assign _0228_ = _0634_;
	assign _0637_ = _0270_;
	assign _0639_ = \wbdbg.wbdbgbusmaster.o_wb_cyc ;
	assign _0641_ = _0276_;
	assign _0643_ = \wbdbg.wbdbgbusmaster.o_wb_stb ;
	assign _0645_ = _0277_;
	assign _0251_ = _0644_;
	assign _0647_ = _0270_;
	assign _0649_ = \wbdbg.wbdbgbusmaster.i_wb_ack ;
	assign _0651_ = \wbdbg.wbdbgbusmaster.o_wb_cyc ;
	assign _0653_ = \wbdbg.wbdbgbusmaster.o_wb_stb ;
	assign _0655_ = _0277_;
	assign _0249_ = _0654_;
	assign _0657_ = _0279_;
	assign _0659_ = \wbdbg.wbdbgbusmaster.cmd_recv ;
	assign _0245_ = _0658_;
	assign _0661_ = _0271_;
	assign _0663_ = _0279_;
	assign _0665_ = \wbdbg.wbdbgbusmaster.cmd_recv ;
	assign _0248_ = _0664_;
	assign _0667_ = _0283_;
	assign _0252_ = _0666_;
	assign _0669_ = _0284_;
	assign _0250_ = _0668_;
	assign _0671_ = _0275_;
	assign _0673_ = _0274_;
	assign _0675_ = \wbdbg.wbdbgbusmaster.i_wb_err ;
	assign _0677_ = \wbdbg.wbdbgbusmaster.i_cmd_reset ;
	assign _0247_ = _0676_;
	assign _0679_ = _0275_;
	assign _0681_ = \wbdbg.wbdbgbusmaster.o_wb_we ;
	assign _0683_ = _0274_;
	assign _0685_ = \wbdbg.wbdbgbusmaster.i_wb_err ;
	assign _0687_ = \wbdbg.wbdbgbusmaster.i_cmd_reset ;
	assign _0246_ = _0686_;
	assign _0689_ = _0285_;
	assign _0005_ = _0688_;
	assign _0691_ = wb_we;
	assign _0693_ = _0285_;
	assign _0003_ = _0692_;
	assign _0695_ = wb_we;
	assign _0697_ = _0285_;
	assign _0002_ = _0696_;
	assign _0699_ = wb_we;
	assign _0701_ = _0285_;
	assign _0000_ = _0700_;
	assign _0703_ = wb_we;
	assign _0705_ = _0285_;
	assign _0001_ = _0704_;
	assign \wbdbg.uart_tx.o_out  = _0612_;
	assign _0296_ = \wbdbg.interrupt_4_rising ;
	assign _0312_ = \wbdbg.interrupt_3_rising ;
	assign _0326_ = \wbdbg.interrupt_2_rising ;
	assign _0338_ = \wbdbg.interrupt_1_rising ;
	assign _0668_ = \wbdbg.cmd_data [31:0];
	assign _0674_ = _0672_;
	assign _0684_ = _0682_;
	assign _0640_ = 1'h0;
endmodule
`default_nettype none
module top (
	clk100,
	reset_n,
	uart_rx,
	uart_tx,
	base_led,
	led,
	sw,
	display_sel,
	display
);
	input wire clk100;
	input wire reset_n;
	input wire uart_rx;
	output wire uart_tx;
	output wire [7:0] base_led;
	output wire [23:0] led;
	input wire [23:0] sw;
	output wire [3:0] display_sel;
	output wire [7:0] display;
	wire clk;
	wire rst;
	wire [11:0] chip_inputs;
	wire [11:0] chip_outputs;
	wire [7:0] D_in;
	wire [7:0] D_out;
	wire INTR;
	wire READY;
	wire Sync;
	wire [2:0] state;
	reg [1:0] display_cnt;
	wire [3:0] disp_arr [0:3];
	debug_harness dbg(
		.uart_rx(uart_rx),
		.uart_tx(uart_tx),
		.chip_inputs(chip_inputs),
		.chip_outputs(chip_outputs),
		.chip_clock(clk),
		.chip_reset(rst),
		.clk100(clk100)
	);
	always @(posedge clk100)
		if (rst)
			display_cnt <= 2'd0;
		else
			display_cnt <= display_cnt + 1;
	assign display_sel = ~(1 << display_cnt);
	hex_to_sevenseg convert(
		.hexdigit(disp_arr[display_cnt]),
		.seg(display)
	);
	assign disp_arr[0] = chip_inputs[3:0];
	assign disp_arr[1] = chip_inputs[7:4];
	assign disp_arr[2] = chip_outputs[3:0];
	assign disp_arr[3] = chip_outputs[7:4];
	assign chip_outputs[7:0] = D_out;
	assign chip_outputs[10:8] = state;
	assign D_in = chip_inputs[7:0];
	assign INTR = chip_inputs[8];
	assign READY = chip_inputs[9];
	i8008_core #(
		.WIDTH(8),
		.STACK_HEIGHT(8)
	) DUT(
		.D_in(D_in),
		.INTR(INTR),
		.READY(READY),
		.clk(clk),
		.rst(rst),
		.D_out(D_out),
		.Sync(Sync),
		.state(state)
	);
	assign led = {rst, clk, chip_inputs[9:8], chip_outputs[10:0], chip_inputs[7:0]};
endmodule
module i8008_core (
	D_in,
	INTR,
	READY,
	clk,
	rst,
	D_out,
	Sync,
	state
);
	parameter WIDTH = 8;
	parameter STACK_HEIGHT = 8;
	input wire [7:0] D_in;
	input wire INTR;
	input wire READY;
	input wire clk;
	input wire rst;
	output wire [7:0] D_out;
	output wire Sync;
	output wire [2:0] state;
	reg [7:0] bus;
	wire [7:0] instr;
	wire enable_SP;
	reg Ready;
	reg tempR;
	reg Intr;
	reg S_Intr;
	wire DBR_en;
	wire A_rst;
	wire B_rst;
	wire DBR_rst;
	wire IR_rst;
	wire SP_rst;
	wire IR_en;
	wire A_en;
	wire [7:0] A_in;
	wire [7:0] A_out;
	wire [7:0] B_in;
	wire [7:0] B_out;
	wire [7:0] ALU_out;
	wire [7:0] DBR_D;
	wire [7:0] DBR_out;
	wire [7:0] DBR_in;
	wire [7:0] PC_out;
	wire [7:0] rf_out;
	wire [7:0] ACC;
	wire [39:0] ctrl_signals;
	wire [3:0] flags;
	wire [2:0] sel_Stack;
	wire [1:0] cycle;
	always @(posedge clk) begin
		if (rst) begin
			Ready <= 1'b0;
			tempR <= 1'b0;
		end
		else begin
			tempR <= READY;
			Ready <= tempR;
		end
		if (rst) begin
			Intr <= 1'b0;
			S_Intr <= 1'b0;
		end
		else if (state != 3'b110) begin
			S_Intr <= INTR;
			Intr <= Intr | S_Intr;
		end
		else
			Intr <= 1'b0;
	end
	assign Sync = ctrl_signals[38];
	assign D_out = bus;
	always @(*)
		if (ctrl_signals[5])
			bus = PC_out;
		else if (ctrl_signals[11])
			bus = rf_out;
		else if (ctrl_signals[24])
			bus = ALU_out;
		else if (ctrl_signals[27]) begin
			bus[7:4] = 4'd0;
			bus[3:0] = flags;
		end
		else if (ctrl_signals[33])
			bus = A_out;
		else if (ctrl_signals[30])
			bus = B_out;
		else if (ctrl_signals[39])
			bus = D_in;
		else
			bus = 8'd0;
	assign DBR_D = bus;
	assign DBR_en = ctrl_signals[38];
	assign DBR_rst = ctrl_signals[37] | rst;
	assign IR_rst = ctrl_signals[34] | rst;
	assign IR_en = ctrl_signals[35] | (Ready && (cycle == 2'b00));
	Register #(.WIDTH(WIDTH)) IR(
		.d(D_in),
		.Q(instr),
		.clk(clk),
		.en(IR_en),
		.clear(IR_rst)
	);
	assign A_rst = ctrl_signals[31] | rst;
	assign B_rst = ctrl_signals[28] | rst;
	assign A_en = ctrl_signals[32] | ((cycle == 2'b00) && ((state == 3'b010) || (state == 3'b110)));
	assign A_in = ((cycle == 2'b00) && ((state == 3'b010) || (state == 3'b110)) ? ACC : bus);
	Register #(.WIDTH(WIDTH)) regA(
		.d(A_in),
		.Q(A_out),
		.clk(clk),
		.en(A_en),
		.clear(A_rst)
	);
	Register #(.WIDTH(WIDTH)) regB(
		.d(bus),
		.Q(B_out),
		.clk(clk),
		.en(ctrl_signals[29]),
		.clear(B_rst)
	);
	ALU Unit(
		.clk(clk),
		.rst(rst),
		.a(A_out),
		.b(B_out),
		.ALU_ctrl(ctrl_signals[24-:10]),
		.d(ALU_out),
		.flags(flags)
	);
	reg_file #(
		.WIDTH(WIDTH),
		.HEIGHT(7)
	) rf(
		.clk(clk),
		.rst(rst),
		.bus(bus),
		.ACC(ACC),
		.rf_out(rf_out),
		.rf_ctrl(ctrl_signals[14-:5])
	);
	assign enable_SP = (ctrl_signals[9] & ~((sel_Stack == 3'd0) & ~ctrl_signals[7])) & ~((sel_Stack == 3'd7) & ctrl_signals[7]);
	assign SP_rst = ctrl_signals[8] | rst;
	Counter #(.WIDTH(3)) SP_SEL(
		.load(1'd0),
		.clk(clk),
		.d(3'd0),
		.Q(sel_Stack),
		.en(enable_SP),
		.clear(SP_rst),
		.up(ctrl_signals[7])
	);
	stack #(
		.WIDTH(14),
		.HEIGHT(STACK_HEIGHT)
	) Stack(
		.clk(clk),
		.rst(rst),
		.PC_out(PC_out),
		.bus(bus),
		.sel(sel_Stack),
		.Stack_ctrl(ctrl_signals[6-:7])
	);
	fsm_decoder Brain(
		.clk(clk),
		.Ready(Ready),
		.Intr(Intr),
		.rst(rst),
		.instr(instr),
		.flags(flags),
		.ctrl_signals(ctrl_signals),
		.state(state),
		.cycle(cycle)
	);
endmodule
module ALU (
	a,
	b,
	ALU_ctrl,
	clk,
	rst,
	d,
	flags
);
	parameter WIDTH = 8;
	input wire [7:0] a;
	input wire [7:0] b;
	input wire [9:0] ALU_ctrl;
	input clk;
	input rst;
	output reg [7:0] d;
	output wire [3:0] flags;
	wire [7:0] add_tmp;
	wire [7:0] art_tmp;
	reg [3:0] flag_in;
	reg [7:0] NA;
	wire Flag_rst;
	assign Flag_rst = rst | ALU_ctrl[0];
	FlagRegister #(.WIDTH(4)) flag_reg(
		.d(flag_in),
		.Q(flags),
		.clk(clk),
		.en(ALU_ctrl[1]),
		.clear(Flag_rst)
	);
	always @(*) begin
		flag_in[3] = 1'b0;
		NA = 'd0;
		if (ALU_ctrl[2])
			case (ALU_ctrl[5-:3])
				3'b100: d = a + 1;
				3'b101: d = a - 1;
				3'b000: begin
					d = {a[6:0], a[7]};
					flag_in[3] = a[7];
				end
				3'b001: begin
					d = {a[0], a[7:1]};
					flag_in[3] = a[0];
				end
				3'b010: begin
					d = {a[6:0], flags[3]};
					flag_in[3] = a[7];
				end
				3'b011: begin
					d = {flags[3], a[7:1]};
					flag_in[3] = a[0];
				end
			endcase
		else begin
			d = 'd0;
			case (ALU_ctrl[8-:3])
				3'b000: {flag_in[3], d} = a + b;
				3'b001: {flag_in[3], d} = (a + b) + flags[3];
				3'b010: {flag_in[3], d} = a - b;
				3'b011: {flag_in[3], d} = (a - b) - flags[3];
				3'b100: d = a & b;
				3'b110: d = a | b;
				3'b101: d = a ^ b;
				3'b111: {flag_in[3], NA} = a - b;
				default: d = 'd0;
			endcase
		end
		flag_in[1] = (ALU_ctrl[2] ? flags[1] : d[7] | NA[7]);
		flag_in[0] = (ALU_ctrl[2] ? flags[0] : ^d | ^NA);
		flag_in[2] = (ALU_ctrl[2] ? flags[2] : (ALU_ctrl[8-:3] == 3'b111 ? ~(|NA) : ~(|d)));
	end
endmodule
module fsm_decoder (
	clk,
	Ready,
	Intr,
	rst,
	instr,
	flags,
	ctrl_signals,
	state,
	cycle
);
	input wire clk;
	input wire Ready;
	input wire Intr;
	input wire rst;
	input wire [7:0] instr;
	input wire [3:0] flags;
	output reg [39:0] ctrl_signals;
	output reg [2:0] state;
	output reg [1:0] cycle;
	wire [2:0] SSS;
	wire [2:0] DDD;
	wire [2:0] D5_3;
	assign SSS = instr[2:0];
	assign DDD = instr[5:3];
	assign D5_3 = instr[5:3];
	reg [1:0] next_cycle;
	reg [2:0] next_state;
	reg CF;
	always @(*)
		case (instr[4:3])
			2'b00: CF = ~flags[3];
			2'b01: CF = ~flags[2];
			2'b10: CF = ~flags[1];
			2'b11: CF = flags[0];
			default: CF = 1'b1;
		endcase
	always @(*) begin
		next_cycle = cycle;
		ctrl_signals = 'd0;
		case (cycle)
			2'b00:
				case (state)
					3'b010, 3'b110: begin
						next_state = 3'b100;
						ctrl_signals[38] = 1'b1;
						ctrl_signals[5] = 1'b1;
						ctrl_signals[4] = 1'b1;
					end
					3'b100: begin
						next_state = (Ready ? 3'b001 : 3'b000);
						ctrl_signals[38] = 1'b1;
						ctrl_signals[5] = 1'b1;
						ctrl_signals[4] = 1'b0;
						ctrl_signals[1-:2] = 2'b00;
						ctrl_signals[3] = 1'b1;
					end
					3'b000: next_state = (Ready ? 3'b001 : 3'b000);
					3'b001, 3'b011: begin
						if (instr == 8'b00zzz101) begin
							ctrl_signals[29] = 1'b1;
							ctrl_signals[31] = 1'b1;
							ctrl_signals[7] = 1'b1;
							ctrl_signals[9] = 1'b1;
							ctrl_signals[39] = 1'b1;
						end
						else begin
							ctrl_signals[29] = 1'b1;
							ctrl_signals[39] = 1'b1;
						end
						casez (instr)
							8'b0000000z, 8'b11111111, 8'b11zzz111:
								if (instr[7] && (D5_3 != 3'b111)) begin
									next_cycle = 2'b01;
									next_state = 3'b010;
								end
								else if (Intr) begin
									next_state = 3'b110;
									next_cycle = 2'b00;
								end
								else
									next_state = 3'b011;
							8'b000zz011, 8'b001zz011:
								if ((instr[5] & ~CF) | (~instr[5] & CF))
									next_state = 3'b111;
								else begin
									next_cycle = 2'b00;
									next_state = 3'b010;
								end
							8'b10zzz111, 8'b10zzz100, 8'b0100zzz1, 8'b01zzzzz1, 8'b00zzz110, 8'b01zzz100, 8'b010zz000, 8'b011zz000, 8'b01zzz110, 8'b011zz010, 8'b010zz010: begin
								next_cycle = 2'b01;
								next_state = 3'b010;
							end
							default: next_state = 3'b111;
						endcase
					end
					3'b111: begin
						casez (instr)
							8'b11zzzzzz, 8'b11111zzz, 8'b10zzzzzz:
								if (SSS != 3'b111) begin
									ctrl_signals[29] = 1'b1;
									ctrl_signals[11] = 1'b1;
									ctrl_signals[14-:3] = SSS;
									ctrl_signals[38] = 1'b1;
								end
							8'b00zzz000, 8'b00zzz001: begin
								ctrl_signals[11] = 1'b1;
								ctrl_signals[14-:3] = DDD;
								ctrl_signals[32] = 1'b1;
							end
							8'b00000010, 8'b00001010, 8'b00010010, 8'b00011010: begin
								ctrl_signals[11] = 1'b1;
								ctrl_signals[14-:3] = 3'd0;
								ctrl_signals[32] = 1'b1;
							end
							8'b00zzz111: begin
								ctrl_signals[7] = 1'b0;
								ctrl_signals[9] = 1'b1;
							end
							8'b000zz011, 8'b001zz011: begin
								ctrl_signals[7] = 1'b0;
								ctrl_signals[9] = (~instr[5] & CF) | (instr[5] & ~CF);
							end
							8'b00zzz101: begin
								ctrl_signals[33] = 1'b1;
								ctrl_signals[4] = 1'b0;
								ctrl_signals[6] = 1'b1;
							end
							default:
								;
						endcase
						if (instr[7:3] == 5'b11111) begin
							next_state = 3'b010;
							next_cycle = 2'b01;
						end
						else
							next_state = 3'b101;
					end
					3'b101: begin
						casez (instr)
							8'b00zzz101: begin
								ctrl_signals[30] = 1'b1;
								ctrl_signals[6] = 1'b1;
								ctrl_signals[4] = 1'b1;
								ctrl_signals[2] = 1'b1;
							end
							8'b00zzz000, 8'b00zzz001: begin
								ctrl_signals[10] = 1'b1;
								ctrl_signals[14-:3] = DDD;
								ctrl_signals[20-:3] = (instr[2:0] == 3'b000 ? 3'b100 : 3'b101);
								ctrl_signals[17] = 1'b1;
								ctrl_signals[24] = 1'b1;
								ctrl_signals[16] = 1'b1;
							end
							8'b10zzzzzz: begin
								ctrl_signals[10] = 1'b1;
								ctrl_signals[14-:3] = 3'd0;
								ctrl_signals[23-:3] = D5_3;
								ctrl_signals[17] = 1'b0;
								ctrl_signals[24] = 1'b1;
								ctrl_signals[16] = 1'b1;
							end
							8'b00000010, 8'b00001010, 8'b00010010, 8'b00011010: begin
								ctrl_signals[10] = 1'b1;
								ctrl_signals[14-:3] = 3'd0;
								ctrl_signals[20-:3] = D5_3;
								ctrl_signals[17] = 1'b1;
								ctrl_signals[24] = 1'b1;
								ctrl_signals[16] = 1'b1;
							end
							default:
								;
						endcase
						next_state = 3'b010;
						next_cycle = 2'b00;
					end
					default: begin
						next_state = 3'b010;
						next_cycle = 2'b00;
					end
				endcase
			2'b01:
				case (state)
					3'b010, 3'b110: begin
						next_state = 3'b100;
						casez (instr)
							8'b00111110, 8'b00zzz110, 8'b10zzz100, 8'b01zzz100, 8'b010zz000, 8'b011zz000, 8'b01zzz110, 8'b011zz010, 8'b010zz010: begin
								ctrl_signals[5] = 1'b1;
								ctrl_signals[4] = 1'b1;
								ctrl_signals[38] = 1'b1;
								ctrl_signals[1-:2] = 2'b01;
							end
							8'b11zzz111, 8'b11111zzz, 8'b10zzz111: begin
								ctrl_signals[11] = 1'b1;
								ctrl_signals[14-:3] = 3'd6;
								ctrl_signals[1-:2] = (instr[7:3] == 5'b11111 ? 2'b11 : 2'b01);
								ctrl_signals[38] = 1'b1;
							end
							8'b0100zzz1, 8'b01zzzzz1: begin
								ctrl_signals[1-:2] = 2'b10;
								ctrl_signals[33] = 1'b1;
								ctrl_signals[38] = 1'b1;
							end
							default:
								;
						endcase
					end
					3'b100: begin
						next_state = (Ready ? 3'b001 : 3'b000);
						ctrl_signals[3] = 1'b1;
						casez (instr)
							8'b00111110, 8'b00zzz110, 8'b10zzz100, 8'b01zzz100, 8'b010zz000, 8'b011zz000, 8'b01zzz110, 8'b011zz010, 8'b010zz010: begin
								ctrl_signals[5] = 1'b1;
								ctrl_signals[4] = 1'b0;
								ctrl_signals[38] = 1'b1;
								ctrl_signals[1-:2] = 2'b01;
							end
							8'b11zzz111, 8'b11111zzz, 8'b10zzz111: begin
								ctrl_signals[11] = 1'b1;
								ctrl_signals[14-:3] = 3'd5;
								ctrl_signals[1-:2] = (instr[7:3] == 5'b11111 ? 2'b11 : 2'b01);
								ctrl_signals[38] = 1'b1;
							end
							8'b0100zzz1, 8'b01zzzzz1: begin
								ctrl_signals[1-:2] = 2'b10;
								ctrl_signals[30] = 1'b1;
								ctrl_signals[38] = 1'b1;
							end
							default:
								;
						endcase
					end
					3'b000: next_state = (Ready ? 3'b001 : 3'b000);
					3'b001, 3'b011: begin
						casez (instr)
							8'b01zzzzz1, 8'b11111zzz: begin
								next_cycle = 2'b00;
								next_state = 3'b010;
							end
							8'b00111110, 8'b01zzz100, 8'b010zz000, 8'b011zz000, 8'b01zzz110, 8'b011zz010, 8'b010zz010: begin
								next_state = 3'b010;
								next_cycle = 2'b10;
							end
							default: next_state = 3'b111;
						endcase
						casez (instr)
							8'b0100zzz1, 8'b10zzz111, 8'b10zzz100, 8'b11zzz111, 8'b00111110, 8'b00zzz110, 8'b01zzz100, 8'b010zz000, 8'b011zz000, 8'b01zzz110, 8'b011zz010, 8'b010zz010: begin
								ctrl_signals[39] = 1'b1;
								ctrl_signals[29] = 1'b1;
							end
							8'b11111zzz: begin
								ctrl_signals[38] = 1'b1;
								ctrl_signals[30] = 1'b1;
							end
							default:
								;
						endcase
					end
					3'b111: begin
						next_state = 3'b101;
						if ((instr[7:4] == 4'b0100) && instr[0]) begin
							ctrl_signals[38] = 1'b1;
							ctrl_signals[27] = 1'b1;
						end
					end
					3'b101: begin
						next_state = 3'b010;
						next_cycle = 2'b00;
						casez (instr)
							8'b11zzz111, 8'b00zzz110, 8'b0100zzz1: begin
								ctrl_signals[30] = 1'b1;
								ctrl_signals[14-:3] = ((instr[7:4] == 4'b0100) && instr[0] ? 3'd0 : DDD);
								ctrl_signals[10] = 1'b1;
							end
							8'b10zzz111, 8'b10zzz100: begin
								ctrl_signals[14-:3] = 3'd0;
								ctrl_signals[10] = 1'b1;
								ctrl_signals[23-:3] = D5_3;
								ctrl_signals[17] = 1'b0;
								ctrl_signals[24] = 1'b1;
							end
							default:
								;
						endcase
					end
					default: begin
						next_cycle = 2'b00;
						next_state = 3'b010;
					end
				endcase
			2'b10:
				case (state)
					3'b010, 3'b110: begin
						next_state = 3'b100;
						casez (instr)
							8'b00111110: begin
								ctrl_signals[14-:3] = 3'd6;
								ctrl_signals[11] = 1'b1;
								ctrl_signals[38] = 1'b1;
								ctrl_signals[1-:2] = 2'b11;
							end
							8'b01zzz100, 8'b010zz000, 8'b011zz000, 8'b01zzz110, 8'b011zz010, 8'b010zz010: begin
								ctrl_signals[5] = 1'b1;
								ctrl_signals[4] = 1'b1;
								ctrl_signals[38] = 1'b1;
								ctrl_signals[1-:2] = 2'b01;
							end
							default:
								;
						endcase
					end
					3'b100: begin
						next_state = (Ready ? 3'b001 : 3'b000);
						ctrl_signals[3] = 1'b1;
						casez (instr)
							8'b00111110: begin
								ctrl_signals[14-:3] = 3'd5;
								ctrl_signals[11] = 1'b1;
								ctrl_signals[38] = 1'b1;
								ctrl_signals[1-:2] = 2'b11;
							end
							8'b01zzz100, 8'b010zz000, 8'b011zz000, 8'b01zzz110, 8'b011zz010, 8'b010zz010: begin
								ctrl_signals[5] = 1'b1;
								ctrl_signals[4] = 1'b0;
								ctrl_signals[38] = 1'b1;
								ctrl_signals[1-:2] = 2'b01;
							end
							default:
								;
						endcase
					end
					3'b000: next_state = (Ready ? 3'b001 : 3'b000);
					3'b001, 3'b011: begin
						casez (instr)
							8'b00111110: begin
								next_state = 3'b010;
								next_cycle = 2'b00;
							end
							8'b010zz000, 8'b010zz010:
								if (~CF) begin
									next_state = 3'b010;
									next_cycle = 2'b00;
								end
								else
									next_state = 3'b111;
							8'b011zz000, 8'b011zz010:
								if (CF) begin
									next_state = 3'b010;
									next_cycle = 2'b00;
								end
								else
									next_state = 3'b111;
							default: next_state = 3'b111;
						endcase
						casez (instr)
							8'b00111110: begin
								ctrl_signals[30] = 1'b1;
								ctrl_signals[38] = 1'b1;
							end
							8'b01zzz100, 8'b010zz000, 8'b011zz000, 8'b01zzz110, 8'b011zz010, 8'b010zz010: begin
								ctrl_signals[32] = 1'b1;
								ctrl_signals[39] = 1'b1;
							end
							default:
								;
						endcase
					end
					3'b111: begin
						next_state = 3'b101;
						casez (instr)
							8'b01zzz110, 8'b011zz010, 8'b010zz010: begin
								ctrl_signals[33] = 1'b1;
								ctrl_signals[6] = (((instr[7:6] == 2'b01) && (instr[2:0] == 3'b110)) | (((instr[7:5] == 3'b011) && (instr[2:0] == 3'b010)) & ~CF)) | (((instr[7:5] == 3'b010) && (instr[2:0] == 3'b010)) & CF);
								ctrl_signals[4] = 1'b0;
								ctrl_signals[7] = 1'b1;
								ctrl_signals[9] = (((instr[7:6] == 2'b01) && (instr[2:0] == 3'b110)) | (((instr[7:5] == 3'b011) && (instr[2:0] == 3'b010)) & ~CF)) | (((instr[7:5] == 3'b010) && (instr[2:0] == 3'b010)) & CF);
							end
							8'b01zzz100, 8'b010zz000, 8'b011zz000: begin
								ctrl_signals[33] = 1'b1;
								ctrl_signals[6] = (((instr[7:6] == 2'b01) && (instr[2:0] == 3'b100)) | (((instr[7:5] == 3'b011) && (instr[2:0] == 3'b000)) & ~CF)) | (((instr[7:5] == 3'b010) && (instr[2:0] == 3'b000)) & CF);
								ctrl_signals[4] = 1'b0;
							end
							default:
								;
						endcase
					end
					3'b101: begin
						next_state = 3'b010;
						next_cycle = 2'b00;
						casez (instr)
							8'b01zzz110, 8'b011zz010, 8'b010zz010, 8'b01zzz100, 8'b010zz000, 8'b011zz000: begin
								ctrl_signals[30] = 1'b1;
								ctrl_signals[6] = 1'b1;
								ctrl_signals[4] = 1'b1;
							end
							default:
								;
						endcase
					end
					default: begin
						next_state = 3'b010;
						next_cycle = 2'b00;
					end
				endcase
			default: begin
				next_state = 3'b010;
				next_cycle = 2'b00;
				ctrl_signals = 'd0;
			end
		endcase
	end
	always @(posedge clk)
		if (rst) begin
			cycle <= 2'b00;
			state <= 3'b010;
		end
		else begin
			cycle <= next_cycle;
			state <= next_state;
		end
endmodule
module reg_file (
	bus,
	clk,
	rst,
	rf_ctrl,
	rf_out,
	ACC
);
	parameter WIDTH = 8;
	parameter HEIGHT = 7;
	parameter SEL = $clog2(HEIGHT);
	input wire [7:0] bus;
	input wire clk;
	input wire rst;
	input wire [4:0] rf_ctrl;
	output wire [7:0] rf_out;
	output wire [7:0] ACC;
	reg [7:0] rf [0:6];
	reg [7:0] rs;
	assign rf_out = rs;
	assign ACC = rf[0];
	always @(posedge clk)
		if (rst) begin
			rf[3'd0] <= 8'd0;
			rf[3'd1] <= 8'd0;
			rf[3'd2] <= 8'd0;
			rf[3'd3] <= 8'd0;
			rf[3'd4] <= 8'd0;
			rf[3'd5] <= 8'd0;
			rf[3'd6] <= 8'd0;
		end
		else if (rf_ctrl[0])
			rf[rf_ctrl[4-:3]] <= bus;
	always @(*) rs = rf[rf_ctrl[4-:3]];
endmodule
module stack (
	bus,
	sel,
	clk,
	rst,
	Stack_ctrl,
	PC_out
);
	parameter WIDTH = 14;
	parameter BUS_WIDTH = 8;
	parameter HEIGHT = 8;
	parameter SEL = $clog2(HEIGHT);
	input wire [7:0] bus;
	input wire [2:0] sel;
	input wire clk;
	input wire rst;
	input wire [6:0] Stack_ctrl;
	output wire [7:0] PC_out;
	reg [13:0] rf [0:7];
	reg [13:0] rs;
	wire [7:0] upper;
	wire [7:0] RST_AAA;
	assign upper[7:6] = Stack_ctrl[1-:2];
	assign upper[5:0] = rs[13:8];
	assign PC_out = (Stack_ctrl[4] ? rs[7:0] : upper);
	assign RST_AAA[5:3] = bus[5:3];
	assign RST_AAA[2:0] = 3'd0;
	assign RST_AAA[7:6] = 2'd0;
	always @(posedge clk)
		if (rst) begin
			rf[3'd0] <= 14'd0;
			rf[3'd1] <= 14'd0;
			rf[3'd2] <= 14'd0;
			rf[3'd3] <= 14'd0;
			rf[3'd4] <= 14'd0;
			rf[3'd5] <= 14'd0;
			rf[3'd6] <= 14'd0;
			rf[3'd7] <= 14'd0;
		end
		else if (Stack_ctrl[6] && Stack_ctrl[4])
			rf[sel][7:0] <= (Stack_ctrl[2] ? RST_AAA : bus);
		else if (Stack_ctrl[6] && ~Stack_ctrl[4])
			rf[sel][13:8] <= bus[5:0];
		else if (Stack_ctrl[3])
			rf[sel][13:0] <= rf[sel][13:0] + 1;
	always @(*) rs = rf[sel];
endmodule
module Register (
	en,
	clear,
	clk,
	d,
	Q
);
	parameter WIDTH = 8;
	input wire en;
	input wire clear;
	input wire clk;
	input wire [7:0] d;
	output reg [7:0] Q;
	always @(posedge clk)
		if (clear)
			Q <= 'd0;
		else if (en)
			Q <= d;
endmodule
module FlagRegister (
	en,
	clear,
	clk,
	d,
	Q
);
	parameter WIDTH = 4;
	input wire en;
	input wire clear;
	input wire clk;
	input wire [3:0] d;
	output reg [3:0] Q;
	always @(posedge clk)
		if (clear)
			Q <= 'd0;
		else if (en)
			Q <= d;
endmodule
module Counter (
	en,
	clear,
	load,
	up,
	clk,
	d,
	Q
);
	parameter WIDTH = 3;
	input wire en;
	input wire clear;
	input wire load;
	input wire up;
	input wire clk;
	input wire [2:0] d;
	output reg [2:0] Q;
	always @(posedge clk)
		if (clear)
			Q <= 'd0;
		else if (load)
			Q <= d;
		else if (en && up)
			Q <= Q + 1;
		else if (en && ~up)
			Q <= Q - 1;
endmodule
module Stabilizer (
	D,
	clk,
	Q
);
	input wire D;
	input wire clk;
	output reg Q;
	reg temp;
	always @(posedge clk) begin
		temp <= D;
		Q <= temp;
	end
endmodule
`default_nettype wire

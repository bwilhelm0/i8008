#include <backends/cxxrtl/cxxrtl.h>

#if defined(CXXRTL_INCLUDE_CAPI_IMPL) || \
    defined(CXXRTL_INCLUDE_VCD_CAPI_IMPL)
#include <backends/cxxrtl/cxxrtl_capi.cc>
#endif

#if defined(CXXRTL_INCLUDE_VCD_CAPI_IMPL)
#include <backends/cxxrtl/cxxrtl_vcd_capi.cc>
#endif

using namespace cxxrtl_yosys;

namespace cxxrtl_design {

// \top: 1
// \src: i8008_core.v:2.1-62.10
struct p_top : public module {
	// \hdlname: DUT instr
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:84.12-84.17
	wire<8> p_DUT_2e_instr;
	// \hdlname: DUT Intr
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:87.6-87.10
	wire<1> p_DUT_2e_Intr;
	// \hdlname: DUT regA Q
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:780.19-780.20|i8008_core.v:150.28-156.3
	wire<8> p_DUT_2e_regA_2e_Q;
	// \hdlname: DUT regB Q
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:780.19-780.20|i8008_core.v:157.28-163.3
	wire<8> p_DUT_2e_regB_2e_Q;
	// \hdlname: DUT Unit flag_reg Q
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:239.28-245.3|i8008_core.v:799.19-799.20|i8008_core.v:164.6-172.3
	wire<4> p_DUT_2e_Unit_2e_flag__reg_2e_Q;
	// \hdlname: DUT Unit d
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:231.19-231.20|i8008_core.v:164.6-172.3
	wire<8> p_DUT_2e_Unit_2e_d;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:176.4-182.3
	wire<8> i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_718_24_367__EN;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:176.4-182.3
	wire<8> i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_718_24_367__DATA;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:176.4-182.3
	wire<3> i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_718_24_367__ADDR;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:176.4-182.3
	wire<8> i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_715_24_366__EN;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:176.4-182.3
	wire<8> i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_714_24_365__EN;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:176.4-182.3
	wire<8> i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_713_24_364__EN;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:176.4-182.3
	wire<8> i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_712_24_363__EN;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:176.4-182.3
	wire<8> i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_711_24_362__EN;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:176.4-182.3
	wire<8> i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_710_24_361__EN;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:176.4-182.3
	wire<8> i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_709_24_360__EN;
	// \hdlname: DUT SP_SEL Q
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:822.19-822.20|i8008_core.v:185.23-193.3
	wire<3> p_DUT_2e_SP__SEL_2e_Q;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:197.4-204.3
	wire<14> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_765_24_286__EN;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:197.4-204.3
	wire<14> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_765_24_286__DATA;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:197.4-204.3
	wire<3> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_765_24_286__ADDR;
	// \nosync: 1
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:197.4-204.3
	wire<14> i_flatten_5c_DUT_2e__5c_Stack_2e__24_mem2bits_24__5c_rf_24_i8008__core_2e_v_3a_765_24_285;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:197.4-204.3
	wire<14> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_763_24_284__EN;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:197.4-204.3
	wire<14> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_763_24_284__DATA;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:197.4-204.3
	wire<3> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_763_24_284__ADDR;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:197.4-204.3
	wire<14> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_761_24_283__EN;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:197.4-204.3
	wire<14> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_761_24_283__DATA;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:197.4-204.3
	wire<3> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_761_24_283__ADDR;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:197.4-204.3
	wire<14> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_758_24_282__EN;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:197.4-204.3
	wire<14> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_757_24_281__EN;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:197.4-204.3
	wire<14> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_756_24_280__EN;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:197.4-204.3
	wire<14> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_755_24_279__EN;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:197.4-204.3
	wire<14> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_754_24_278__EN;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:197.4-204.3
	wire<14> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_753_24_277__EN;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:197.4-204.3
	wire<14> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_752_24_276__EN;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:0.0-0.0|i8008_core.v:197.4-204.3
	wire<14> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_751_24_275__EN;
	// \hdlname: DUT Brain cycle
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:313.12-313.17|i8008_core.v:205.14-214.3
	wire<2> p_DUT_2e_Brain_2e_cycle;
	// \hdlname: DUT Brain state
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:306.19-306.24|i8008_core.v:205.14-214.3
	wire<3> p_DUT_2e_Brain_2e_state;
	// \src: i8008_core.v:21.20-21.27
	/*output*/ value<8> p_display;
	// \src: i8008_core.v:20.20-20.31
	/*output*/ value<4> p_display__sel;
	// \src: i8008_core.v:19.20-19.22
	/*input*/ value<24> p_sw;
	value<24> prev_p_sw;
	bool posedge_p_sw_9() const {
		return !prev_p_sw.slice<9>().val() && p_sw.slice<9>().val();
	}
	// \src: i8008_core.v:18.20-18.23
	/*output*/ value<24> p_led;
	// \src: i8008_core.v:17.20-17.28
	/*output*/ value<8> p_base__led;
	// \src: i8008_core.v:16.14-16.21
	/*output*/ value<1> p_uart__tx;
	// \src: i8008_core.v:15.13-15.20
	/*input*/ value<1> p_uart__rx;
	// \src: i8008_core.v:14.13-14.20
	/*input*/ value<1> p_reset__n;
	// \src: i8008_core.v:13.13-13.19
	/*input*/ value<1> p_clk100;
	value<1> prev_p_clk100;
	bool posedge_p_clk100() const {
		return !prev_p_clk100.slice<0>().val() && p_clk100.slice<0>().val();
	}
	// \hdlname: DUT rst
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:79.13-79.16
	/*outline*/ value<1> p_DUT_2e_rst;
	// \hdlname: DUT Sync
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:81.14-81.18
	/*outline*/ value<1> p_DUT_2e_Sync;
	// \hdlname: DUT bus
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:83.12-83.15
	/*outline*/ value<8> p_DUT_2e_bus;
	// \hdlname: DUT enable_SP
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:85.7-85.16
	/*outline*/ value<1> p_DUT_2e_enable__SP;
	// \hdlname: DUT DBR_en
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:88.7-88.13
	/*outline*/ value<1> p_DUT_2e_DBR__en;
	// \hdlname: DUT A_rst
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:89.7-89.12
	/*outline*/ value<1> p_DUT_2e_A__rst;
	// \hdlname: DUT B_rst
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:90.7-90.12
	/*outline*/ value<1> p_DUT_2e_B__rst;
	// \hdlname: DUT DBR_rst
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:91.7-91.14
	/*outline*/ value<1> p_DUT_2e_DBR__rst;
	// \hdlname: DUT IR_rst
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:92.7-92.13
	/*outline*/ value<1> p_DUT_2e_IR__rst;
	// \hdlname: DUT SP_rst
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:93.7-93.13
	/*outline*/ value<1> p_DUT_2e_SP__rst;
	// \hdlname: DUT IR_en
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:94.7-94.12
	/*outline*/ value<1> p_DUT_2e_IR__en;
	// \hdlname: DUT A_in
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:95.13-95.17
	/*outline*/ value<8> p_DUT_2e_A__in;
	// \hdlname: DUT B_in
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:97.13-97.17
	/*outline*/ value<8> p_DUT_2e_B__in;
	// \hdlname: DUT DBR_out
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:101.13-101.20
	/*outline*/ value<8> p_DUT_2e_DBR__out;
	// \hdlname: DUT DBR_in
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:102.13-102.19
	/*outline*/ value<8> p_DUT_2e_DBR__in;
	// \hdlname: DUT cycle
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:108.13-108.18
	/*outline*/ value<2> p_DUT_2e_cycle;
	// \hdlname: DUT regA en
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:776.13-776.15|i8008_core.v:150.28-156.3
	/*outline*/ value<1> p_DUT_2e_regA_2e_en;
	// \hdlname: DUT regB en
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:776.13-776.15|i8008_core.v:157.28-163.3
	/*outline*/ value<1> p_DUT_2e_regB_2e_en;
	// \hdlname: DUT Unit flag_reg en
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:239.28-245.3|i8008_core.v:795.13-795.15|i8008_core.v:164.6-172.3
	/*outline*/ value<1> p_DUT_2e_Unit_2e_flag__reg_2e_en;
	// \hdlname: DUT Unit Flag_rst
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:237.7-237.15|i8008_core.v:164.6-172.3
	/*outline*/ value<1> p_DUT_2e_Unit_2e_Flag__rst;
	// \hdlname: DUT Unit NA
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:236.12-236.14|i8008_core.v:164.6-172.3
	/*outline*/ value<8> p_DUT_2e_Unit_2e_NA;
	// \hdlname: DUT Unit flag_in
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:235.12-235.19|i8008_core.v:164.6-172.3
	/*outline*/ value<4> p_DUT_2e_Unit_2e_flag__in;
	// \hdlname: DUT Unit art_tmp
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:234.13-234.20|i8008_core.v:164.6-172.3
	/*outline*/ value<8> p_DUT_2e_Unit_2e_art__tmp;
	// \hdlname: DUT Unit add_tmp
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:233.13-233.20|i8008_core.v:164.6-172.3
	/*outline*/ value<8> p_DUT_2e_Unit_2e_add__tmp;
	// \hdlname: DUT Unit ALU_ctrl
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:228.19-228.27|i8008_core.v:164.6-172.3
	/*outline*/ value<10> p_DUT_2e_Unit_2e_ALU__ctrl;
	// \hdlname: DUT rf rs
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:705.12-705.14|i8008_core.v:176.4-182.3
	/*outline*/ value<8> p_DUT_2e_rf_2e_rs;
	// \hdlname: DUT rf rf_ctrl
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:702.19-702.26|i8008_core.v:176.4-182.3
	/*outline*/ value<5> p_DUT_2e_rf_2e_rf__ctrl;
	// \hdlname: DUT SP_SEL up
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:819.13-819.15|i8008_core.v:185.23-193.3
	/*outline*/ value<1> p_DUT_2e_SP__SEL_2e_up;
	// \hdlname: DUT Stack RST_AAA
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:742.13-742.20|i8008_core.v:197.4-204.3
	/*outline*/ value<8> p_DUT_2e_Stack_2e_RST__AAA;
	// \hdlname: DUT Stack upper
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:741.13-741.18|i8008_core.v:197.4-204.3
	/*outline*/ value<8> p_DUT_2e_Stack_2e_upper;
	// \hdlname: DUT Stack rs
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:740.13-740.15|i8008_core.v:197.4-204.3
	/*outline*/ value<14> p_DUT_2e_Stack_2e_rs;
	// \hdlname: DUT Stack PC_out
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:738.20-738.26|i8008_core.v:197.4-204.3
	/*outline*/ value<8> p_DUT_2e_Stack_2e_PC__out;
	// \hdlname: DUT Stack Stack_ctrl
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:737.19-737.29|i8008_core.v:197.4-204.3
	/*outline*/ value<7> p_DUT_2e_Stack_2e_Stack__ctrl;
	// \hdlname: DUT Brain CF
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:316.6-316.8|i8008_core.v:205.14-214.3
	/*outline*/ value<1> p_DUT_2e_Brain_2e_CF;
	// \hdlname: DUT Brain next_state
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:315.12-315.22|i8008_core.v:205.14-214.3
	/*outline*/ value<3> p_DUT_2e_Brain_2e_next__state;
	// \hdlname: DUT Brain next_cycle
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:314.12-314.22|i8008_core.v:205.14-214.3
	/*outline*/ value<2> p_DUT_2e_Brain_2e_next__cycle;
	// \hdlname: DUT Brain D5_3
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:309.13-309.17|i8008_core.v:205.14-214.3
	/*outline*/ value<3> p_DUT_2e_Brain_2e_D5__3;
	// \hdlname: DUT Brain DDD
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:308.13-308.16|i8008_core.v:205.14-214.3
	/*outline*/ value<3> p_DUT_2e_Brain_2e_DDD;
	// \hdlname: DUT Brain SSS
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:307.13-307.16|i8008_core.v:205.14-214.3
	/*outline*/ value<3> p_DUT_2e_Brain_2e_SSS;
	// \hdlname: DUT Brain ctrl_signals
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:305.20-305.32|i8008_core.v:205.14-214.3
	/*outline*/ value<40> p_DUT_2e_Brain_2e_ctrl__signals;
	// \src: i8008_core.v:29.7-29.12
	/*outline*/ value<1> p_READY;
	// \src: i8008_core.v:28.7-28.11
	/*outline*/ value<1> p_INTR;
	// \src: i8008_core.v:26.13-26.17
	/*outline*/ value<8> p_D__in;
	// \src: i8008_core.v:25.14-25.26
	/*outline*/ value<12> p_chip__outputs;
	// \src: i8008_core.v:24.14-24.25
	/*outline*/ value<12> p_chip__inputs;
	// \src: i8008_core.v:23.7-23.10
	/*outline*/ value<1> p_rst;
	// \hdlname: DUT rf rf
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:704.12-704.14|i8008_core.v:176.4-182.3
	memory<8> memory_p_DUT_2e_rf_2e_rf { 7u };
	// \hdlname: DUT Stack rf
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:739.13-739.15|i8008_core.v:197.4-204.3
	memory<14> memory_p_DUT_2e_Stack_2e_rf { 8u };

	p_top(interior) {}
	p_top() {
		reset();
	};

	void reset() override;
	bool eval() override;
	bool commit() override;

	void debug_eval();
	debug_outline debug_eval_outline { std::bind(&p_top::debug_eval, this) };

	void debug_info(debug_items &items, std::string path = "") override;
}; // struct p_top

void p_top::reset() {
}

bool p_top::eval() {
	bool converged = true;
	bool posedge_p_sw_9 = this->posedge_p_sw_9();
	bool posedge_p_clk100 = this->posedge_p_clk100();
	value<1> i_procmux_24_2850__Y;
	value<2> i_procmux_24_2840__CMP;
	value<4> i_procmux_24_2838__CMP;
	value<2> i_procmux_24_2786__CMP;
	value<2> i_procmux_24_2783__CMP;
	value<2> i_procmux_24_2774__CMP;
	value<2> i_procmux_24_2771__CMP;
	value<2> i_procmux_24_2762__CMP;
	value<2> i_procmux_24_2759__CMP;
	value<2> i_procmux_24_2750__CMP;
	value<2> i_procmux_24_2747__CMP;
	value<2> i_procmux_24_2738__CMP;
	value<2> i_procmux_24_2735__CMP;
	value<2> i_procmux_24_2726__CMP;
	value<2> i_procmux_24_2723__CMP;
	value<2> i_procmux_24_2714__CMP;
	value<2> i_procmux_24_2711__CMP;
	value<2> i_procmux_24_2702__CMP;
	value<2> i_procmux_24_2699__CMP;
	value<2> i_procmux_24_2690__CMP;
	value<2> i_procmux_24_2687__CMP;
	value<2> i_procmux_24_2678__CMP;
	value<2> i_procmux_24_2675__CMP;
	value<2> i_procmux_24_2666__CMP;
	value<2> i_procmux_24_2663__CMP;
	value<2> i_procmux_24_2654__CMP;
	value<2> i_procmux_24_2652__CMP;
	value<2> i_procmux_24_2638__CMP;
	value<2> i_procmux_24_2635__CMP;
	value<2> i_procmux_24_2626__CMP;
	value<2> i_procmux_24_2623__CMP;
	value<2> i_procmux_24_2614__CMP;
	value<2> i_procmux_24_2611__CMP;
	value<2> i_procmux_24_2602__CMP;
	value<2> i_procmux_24_2599__CMP;
	value<2> i_procmux_24_2590__CMP;
	value<2> i_procmux_24_2587__CMP;
	value<2> i_procmux_24_2578__CMP;
	value<2> i_procmux_24_2575__CMP;
	value<2> i_procmux_24_2566__CMP;
	value<2> i_procmux_24_2555__CMP;
	value<2> i_procmux_24_2543__CMP;
	value<2> i_procmux_24_2531__CMP;
	value<2> i_procmux_24_2519__CMP;
	value<2> i_procmux_24_2508__CMP;
	value<3> i_procmux_24_2506__CMP;
	value<2> i_procmux_24_2505__CMP;
	value<11> i_procmux_24_2504__CMP;
	value<2> i_procmux_24_2494__CMP;
	value<3> i_procmux_24_2492__CMP;
	value<2> i_procmux_24_2491__CMP;
	value<11> i_procmux_24_2490__CMP;
	value<2> i_procmux_24_2480__CMP;
	value<3> i_procmux_24_2478__CMP;
	value<2> i_procmux_24_2463__CMP;
	value<3> i_procmux_24_2461__CMP;
	value<2> i_procmux_24_2446__CMP;
	value<3> i_procmux_24_2444__CMP;
	value<2> i_procmux_24_2426__CMP;
	value<3> i_procmux_24_2424__CMP;
	value<2> i_procmux_24_2406__CMP;
	value<2> i_procmux_24_2404__CMP;
	value<2> i_procmux_24_2390__CMP;
	value<2> i_procmux_24_2387__CMP;
	value<2> i_procmux_24_2378__CMP;
	value<2> i_procmux_24_2375__CMP;
	value<2> i_procmux_24_2349__CMP;
	value<2> i_procmux_24_2348__CMP;
	value<2> i_procmux_24_2332__CMP;
	value<2> i_procmux_24_2320__CMP;
	value<2> i_procmux_24_2286__CMP;
	value<2> i_procmux_24_2270__CMP;
	value<2> i_procmux_24_2254__CMP;
	value<2> i_procmux_24_2235__CMP;
	value<2> i_procmux_24_2216__CMP;
	value<2> i_procmux_24_2197__CMP;
	value<4> i_procmux_24_2196__CMP;
	value<2> i_procmux_24_2171__CMP;
	value<2> i_procmux_24_2170__CMP;
	value<4> i_procmux_24_2169__CMP;
	value<2> i_procmux_24_2135__CMP;
	value<2> i_procmux_24_2132__CMP;
	value<2> i_procmux_24_2123__CMP;
	value<2> i_procmux_24_2120__CMP;
	value<2> i_procmux_24_2109__CMP;
	value<4> i_procmux_24_2107__CMP;
	value<2> i_procmux_24_2097__CMP;
	value<4> i_procmux_24_2071__CMP;
	value<4> i_procmux_24_2021__CMP;
	value<2> i_procmux_24_2011__CMP;
	value<2> i_procmux_24_1999__CMP;
	value<4> i_procmux_24_1998__CMP;
	value<2> i_procmux_24_1988__CMP;
	value<6> i_procmux_24_1976__CMP;
	value<2> i_procmux_24_1968__CMP;
	value<3> i_procmux_24_1898__CMP;
	value<2> i_procmux_24_1886__CMP;
	value<12> i_procmux_24_1884__CMP;
	value<2> i_procmux_24_1875__CMP;
	value<2> i_procmux_24_1872__CMP;
	value<2> i_procmux_24_1864__CMP;
	value<2> i_procmux_24_1861__CMP;
	value<2> i_procmux_24_1853__CMP;
	value<2> i_procmux_24_1850__CMP;
	value<2> i_procmux_24_1842__CMP;
	value<3> i_procmux_24_1840__CMP;
	value<2> i_procmux_24_1827__CMP;
	value<2> i_procmux_24_1824__CMP;
	value<2> i_procmux_24_1816__CMP;
	value<2> i_procmux_24_1813__CMP;
	value<2> i_procmux_24_1805__CMP;
	value<2> i_procmux_24_1802__CMP;
	value<2> i_procmux_24_1794__CMP;
	value<2> i_procmux_24_1791__CMP;
	value<2> i_procmux_24_1783__CMP;
	value<2> i_procmux_24_1780__CMP;
	value<2> i_procmux_24_1762__CMP;
	value<2> i_procmux_24_1759__CMP;
	value<2> i_procmux_24_1751__CMP;
	value<2> i_procmux_24_1748__CMP;
	value<2> i_procmux_24_1740__CMP;
	value<3> i_procmux_24_1738__CMP;
	value<2> i_procmux_24_1725__CMP;
	value<2> i_procmux_24_1723__CMP;
	value<2> i_procmux_24_1711__CMP;
	value<9> i_procmux_24_1709__CMP;
	value<2> i_procmux_24_1695__CMP;
	value<9> i_procmux_24_1693__CMP;
	value<3> i_procmux_24_1692__CMP;
	value<2> i_procmux_24_1691__CMP;
	value<2> i_procmux_24_1679__CMP;
	value<9> i_procmux_24_1677__CMP;
	value<3> i_procmux_24_1676__CMP;
	value<2> i_procmux_24_1675__CMP;
	value<2> i_procmux_24_1663__CMP;
	value<9> i_procmux_24_1661__CMP;
	value<2> i_procmux_24_1647__CMP;
	value<2> i_procmux_24_1644__CMP;
	value<2> i_procmux_24_1636__CMP;
	value<2> i_procmux_24_1633__CMP;
	value<3> i_procmux_24_1623__CMP;
	value<2> i_procmux_24_1609__CMP;
	value<9> i_procmux_24_1596__CMP;
	value<9> i_procmux_24_1581__CMP;
	value<3> i_procmux_24_1580__CMP;
	value<2> i_procmux_24_1579__CMP;
	value<9> i_procmux_24_1566__CMP;
	value<3> i_procmux_24_1565__CMP;
	value<2> i_procmux_24_1564__CMP;
	value<2> i_procmux_24_1539__CMP;
	value<2> i_procmux_24_1536__CMP;
	value<2> i_procmux_24_1528__CMP;
	value<2> i_procmux_24_1526__CMP;
	value<7> i_procmux_24_1525__CMP;
	value<2> i_procmux_24_1516__CMP;
	value<2> i_procmux_24_1514__CMP;
	value<7> i_procmux_24_1513__CMP;
	value<2> i_procmux_24_1504__CMP;
	value<12> i_procmux_24_1502__CMP;
	value<2> i_procmux_24_1493__CMP;
	value<2> i_procmux_24_1483__CMP;
	value<2> i_procmux_24_1473__CMP;
	value<2> i_procmux_24_1470__CMP;
	value<2> i_procmux_24_1452__CMP;
	value<2> i_procmux_24_1449__CMP;
	value<2> i_procmux_24_1441__CMP;
	value<2> i_procmux_24_1438__CMP;
	value<3> i_procmux_24_1419__CMP;
	value<2> i_procmux_24_1418__CMP;
	value<3> i_procmux_24_1409__CMP;
	value<3> i_procmux_24_1399__CMP;
	value<2> i_procmux_24_1389__CMP;
	value<2> i_procmux_24_1365__CMP;
	value<2> i_procmux_24_1351__CMP;
	value<2> i_procmux_24_1348__CMP;
	value<2> i_procmux_24_1341__CMP;
	value<2> i_procmux_24_1338__CMP;
	value<2> i_procmux_24_1331__CMP;
	value<2> i_procmux_24_1328__CMP;
	value<2> i_procmux_24_1321__CMP;
	value<2> i_procmux_24_1318__CMP;
	value<2> i_procmux_24_1311__CMP;
	value<2> i_procmux_24_1308__CMP;
	value<2> i_procmux_24_1301__CMP;
	value<2> i_procmux_24_1298__CMP;
	value<2> i_procmux_24_1291__CMP;
	value<2> i_procmux_24_1288__CMP;
	value<2> i_procmux_24_1281__CMP;
	value<2> i_procmux_24_1278__CMP;
	value<2> i_procmux_24_1271__CMP;
	value<2> i_procmux_24_1268__CMP;
	value<3> i_procmux_24_1259__CMP;
	value<2> i_procmux_24_1251__CMP;
	value<2> i_procmux_24_1237__CMP;
	value<6> i_procmux_24_1235__CMP;
	value<2> i_procmux_24_1224__CMP;
	value<6> i_procmux_24_1221__CMP;
	value<2> i_procmux_24_1210__CMP;
	value<6> i_procmux_24_1207__CMP;
	value<2> i_procmux_24_1196__CMP;
	value<6> i_procmux_24_1194__CMP;
	value<2> i_procmux_24_1170__CMP;
	value<6> i_procmux_24_1168__CMP;
	value<6> i_procmux_24_1145__CMP;
	value<6> i_procmux_24_1132__CMP;
	value<6> i_procmux_24_1119__CMP;
	value<2> i_procmux_24_1097__CMP;
	value<2> i_procmux_24_1094__CMP;
	value<2> i_procmux_24_1087__CMP;
	value<2> i_procmux_24_1084__CMP;
	value<2> i_procmux_24_1077__CMP;
	value<2> i_procmux_24_1074__CMP;
	value<2> i_procmux_24_1073__CMP;
	value<2> i_procmux_24_1065__CMP;
	value<2> i_procmux_24_1062__CMP;
	value<2> i_procmux_24_1061__CMP;
	value<2> i_procmux_24_1053__CMP;
	value<2> i_procmux_24_1051__CMP;
	value<2> i_procmux_24_1039__CMP;
	value<2> i_procmux_24_1037__CMP;
	value<2> i_procmux_24_1025__CMP;
	value<2> i_procmux_24_1023__CMP;
	value<2> i_procmux_24_1012__CMP;
	value<2> i_procmux_24_1010__CMP;
	value<2> i_procmux_24_999__CMP;
	value<6> i_procmux_24_997__CMP;
	value<2> i_procmux_24_989__CMP;
	value<2> i_procmux_24_978__CMP;
	value<2> i_procmux_24_967__CMP;
	value<2> i_procmux_24_964__CMP;
	value<2> i_procmux_24_957__CMP;
	value<2> i_procmux_24_954__CMP;
	value<3> i_procmux_24_945__CMP;
	value<3> i_procmux_24_944__CMP;
	value<3> i_procmux_24_935__CMP;
	value<3> i_procmux_24_916__CMP;
	value<3> i_procmux_24_915__CMP;
	value<2> i_procmux_24_908__CMP;
	value<2> i_procmux_24_905__CMP;
	value<2> i_procmux_24_898__CMP;
	value<2> i_procmux_24_895__CMP;
	value<6> i_procmux_24_886__CMP;
	value<6> i_procmux_24_878__CMP;
	value<3> i_procmux_24_862__Y;
	value<14> i_procmux_24_859__Y;
	value<14> i_procmux_24_856__Y;
	value<3> i_procmux_24_853__Y;
	value<14> i_procmux_24_850__Y;
	value<14> i_procmux_24_847__Y;
	value<3> i_procmux_24_841__Y;
	value<14> i_procmux_24_838__Y;
	value<14> i_procmux_24_835__Y;
	value<14> i_procmux_24_832__Y;
	value<14> i_procmux_24_829__Y;
	value<14> i_procmux_24_826__Y;
	value<14> i_procmux_24_823__Y;
	value<14> i_procmux_24_820__Y;
	value<14> i_procmux_24_817__Y;
	value<14> i_procmux_24_814__Y;
	value<14> i_procmux_24_811__Y;
	value<3> i_procmux_24_626__Y;
	value<8> i_procmux_24_623__Y;
	value<8> i_procmux_24_620__Y;
	value<8> i_procmux_24_617__Y;
	value<8> i_procmux_24_614__Y;
	value<8> i_procmux_24_611__Y;
	value<8> i_procmux_24_608__Y;
	value<8> i_procmux_24_605__Y;
	value<8> i_procmux_24_602__Y;
	value<8> i_procmux_24_599__Y;
	value<8> i_procmux_24_575__Y;
	value<1> i_procmux_24_568__CMP;
	value<1> i_procmux_24_567__CMP;
	value<1> i_procmux_24_566__CMP;
	value<1> i_procmux_24_565__CMP;
	value<1> i_procmux_24_564__CMP;
	value<1> i_procmux_24_563__CMP;
	// \hdlname: DUT clk
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:78.13-78.16
	value<1> p_DUT_2e_clk;
	// \hdlname: DUT bus
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:83.12-83.15
	value<8> p_DUT_2e_bus;
	// \hdlname: DUT Ready
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:86.7-86.12
	value<1> p_DUT_2e_Ready;
	// \hdlname: DUT ctrl_signals
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:105.14-105.26
	value<40> p_DUT_2e_ctrl__signals;
	// \hdlname: DUT sel_Stack
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:107.13-107.22
	value<3> p_DUT_2e_sel__Stack;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:119.2-137.15
	value<8> i_flatten_5c_DUT_2e__24_4_5c_bus_5b_7_3a_0_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:119.2-137.15
	value<8> i_flatten_5c_DUT_2e__24_5_5c_bus_5b_7_3a_0_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:280.32-280.37|i8008_core.v:164.6-172.3
	value<9> i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_280_24_40__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:276.31-276.58|i8008_core.v:164.6-172.3
	value<9> i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_276_24_36__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:276.42-276.57|i8008_core.v:164.6-172.3
	value<9> i_flatten_5c_DUT_2e__5c_Unit_2e__24_and_24_i8008__core_2e_v_3a_276_24_35__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:275.31-275.36|i8008_core.v:164.6-172.3
	value<9> i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_275_24_33__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:274.31-274.58|i8008_core.v:164.6-172.3
	value<9> i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_274_24_32__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:274.42-274.57|i8008_core.v:164.6-172.3
	value<9> i_flatten_5c_DUT_2e__5c_Unit_2e__24_and_24_i8008__core_2e_v_3a_274_24_31__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:273.31-273.36|i8008_core.v:164.6-172.3
	value<9> i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_273_24_29__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:252.31-252.36|i8008_core.v:164.6-172.3
	value<32> i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_252_24_28__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:251.31-251.36|i8008_core.v:164.6-172.3
	value<32> i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_251_24_27__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:246.2-287.5|i8008_core.v:164.6-172.3
	value<8> i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_NA_5b_7_3a_0_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:246.2-287.5|i8008_core.v:164.6-172.3
	value<8> i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_d_5b_7_3a_0_5d_;
	// \hdlname: DUT Unit flags
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:232.20-232.25|i8008_core.v:164.6-172.3
	value<4> p_DUT_2e_Unit_2e_flags;
	// \hdlname: DUT Unit ALU_ctrl
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:228.19-228.27|i8008_core.v:164.6-172.3
	value<10> p_DUT_2e_Unit_2e_ALU__ctrl;
	// \hdlname: DUT Unit b
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:227.19-227.20|i8008_core.v:164.6-172.3
	value<8> p_DUT_2e_Unit_2e_b;
	// \hdlname: DUT Unit a
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:226.19-226.20|i8008_core.v:164.6-172.3
	value<8> p_DUT_2e_Unit_2e_a;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:719.19-719.21|i8008_core.v:176.4-182.3
	value<8> i_flatten_5c_DUT_2e__5c_rf_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_719_24_393__DATA;
	// \hdlname: DUT rf rf_ctrl
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:702.19-702.26|i8008_core.v:176.4-182.3
	value<5> p_DUT_2e_rf_2e_rf__ctrl;
	// \hdlname: DUT rf clk
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:700.13-700.16|i8008_core.v:176.4-182.3
	value<1> p_DUT_2e_rf_2e_clk;
	// \hdlname: DUT SP_SEL up
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:819.13-819.15|i8008_core.v:185.23-193.3
	value<1> p_DUT_2e_SP__SEL_2e_up;
	// \hdlname: DUT SP_SEL en
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:816.13-816.15|i8008_core.v:185.23-193.3
	value<1> p_DUT_2e_SP__SEL_2e_en;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:766.19-766.21|i8008_core.v:197.4-204.3
	value<14> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_766_24_353__DATA;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:765.21-765.23|i8008_core.v:197.4-204.3
	value<14> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_765_24_350__DATA;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:762.12-762.43|i8008_core.v:197.4-204.3
	value<1> i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_762_24_338__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:760.12-760.42|i8008_core.v:197.4-204.3
	value<1> i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y;
	// \hdlname: DUT Stack RST_AAA
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:742.13-742.20|i8008_core.v:197.4-204.3
	value<8> p_DUT_2e_Stack_2e_RST__AAA;
	// \hdlname: DUT Stack upper
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:741.13-741.18|i8008_core.v:197.4-204.3
	value<8> p_DUT_2e_Stack_2e_upper;
	// \hdlname: DUT Stack rs
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:740.13-740.15|i8008_core.v:197.4-204.3
	value<14> p_DUT_2e_Stack_2e_rs;
	// \hdlname: DUT Stack Stack_ctrl
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:737.19-737.29|i8008_core.v:197.4-204.3
	value<7> p_DUT_2e_Stack_2e_Stack__ctrl;
	// \hdlname: DUT Stack clk
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:735.13-735.16|i8008_core.v:197.4-204.3
	value<1> p_DUT_2e_Stack_2e_clk;
	// \hdlname: DUT Stack sel
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:734.19-734.22|i8008_core.v:197.4-204.3
	value<3> p_DUT_2e_Stack_2e_sel;
	// \hdlname: DUT Stack bus
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:733.19-733.22|i8008_core.v:197.4-204.3
	value<8> p_DUT_2e_Stack_2e_bus;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_78_5c_ctrl__signals_5b_7_3a_6_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_76_5c_ctrl__signals_5b_39_3a_38_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<4> i_flatten_5c_DUT_2e__5c_Brain_2e__24_72_5c_ctrl__signals_5b_14_3a_11_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_71_5c_ctrl__signals_5b_5_3a_4_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<4> i_flatten_5c_DUT_2e__5c_Brain_2e__24_68_5c_ctrl__signals_5b_14_3a_11_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_67_5c_ctrl__signals_5b_5_3a_4_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_65_5c_ctrl__signals_5b_39_3a_38_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_64_5c_ctrl__signals_5b_33_3a_32_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<5> i_flatten_5c_DUT_2e__5c_Brain_2e__24_60_5c_ctrl__signals_5b_7_3a_3_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<4> i_flatten_5c_DUT_2e__5c_Brain_2e__24_57_5c_ctrl__signals_5b_24_3a_21_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:540.11-540.46|i8008_core.v:205.14-214.3
	value<1> i_flatten_5c_DUT_2e__5c_Brain_2e__24_logic__and_24_i8008__core_2e_v_3a_540_24_84__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_51_5c_ctrl__signals_5b_39_3a_38_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_50_5c_ctrl__signals_5b_30_3a_29_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<4> i_flatten_5c_DUT_2e__5c_Brain_2e__24_47_5c_ctrl__signals_5b_14_3a_11_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_46_5c_ctrl__signals_5b_5_3a_4_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<4> i_flatten_5c_DUT_2e__5c_Brain_2e__24_42_5c_ctrl__signals_5b_14_3a_11_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_41_5c_ctrl__signals_5b_5_3a_4_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_39_5c_ctrl__signals_5b_39_3a_38_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_37_5c_ctrl__signals_5b_30_3a_29_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<5> i_flatten_5c_DUT_2e__5c_Brain_2e__24_33_5c_ctrl__signals_5b_14_3a_10_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<3> i_flatten_5c_DUT_2e__5c_Brain_2e__24_32_5c_ctrl__signals_5b_5_3a_3_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<9> i_flatten_5c_DUT_2e__5c_Brain_2e__24_28_5c_ctrl__signals_5b_24_3a_16_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:419.11-419.33|i8008_core.v:205.14-214.3
	value<1> i_flatten_5c_DUT_2e__5c_Brain_2e__24_eq_24_i8008__core_2e_v_3a_419_24_74__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<4> i_flatten_5c_DUT_2e__5c_Brain_2e__24_20_5c_ctrl__signals_5b_14_3a_11_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:387.13-387.26|i8008_core.v:205.14-214.3
	value<1> i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_387_24_68__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_18_5c_ctrl__signals_5b_33_3a_32_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<4> i_flatten_5c_DUT_2e__5c_Brain_2e__24_16_5c_ctrl__signals_5b_14_3a_11_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_14_5c_ctrl__signals_5b_7_3a_6_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:371.13-371.48|i8008_core.v:205.14-214.3
	value<1> i_flatten_5c_DUT_2e__5c_Brain_2e__24_or_24_i8008__core_2e_v_3a_371_24_67__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:360.13-360.27|i8008_core.v:205.14-214.3
	value<1> i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_360_24_62__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:347.11-347.31|i8008_core.v:205.14-214.3
	value<1> i_flatten_5c_DUT_2e__5c_Brain_2e__24_eq_24_i8008__core_2e_v_3a_347_24_61__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_7_5c_ctrl__signals_5b_39_3a_38_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<5> i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<9> i_flatten_5c_DUT_2e__5c_Brain_2e__24_4_5c_ctrl__signals_5b_24_3a_16_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<6> i_flatten_5c_DUT_2e__5c_Brain_2e__24_3_5c_ctrl__signals_5b_14_3a_9_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<8> i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_;
	// \hdlname: DUT Brain CF
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:316.6-316.8|i8008_core.v:205.14-214.3
	value<1> p_DUT_2e_Brain_2e_CF;
	// \hdlname: DUT Brain ctrl_signals
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:305.20-305.32|i8008_core.v:205.14-214.3
	value<40> p_DUT_2e_Brain_2e_ctrl__signals;
	// \hdlname: DUT Brain flags
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:304.19-304.24|i8008_core.v:205.14-214.3
	value<4> p_DUT_2e_Brain_2e_flags;
	// \hdlname: DUT Brain instr
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:303.19-303.24|i8008_core.v:205.14-214.3
	value<8> p_DUT_2e_Brain_2e_instr;
	// \hdlname: DUT Brain Intr
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:301.13-301.17|i8008_core.v:205.14-214.3
	value<1> p_DUT_2e_Brain_2e_Intr;
	// \hdlname: DUT Brain Ready
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:300.13-300.18|i8008_core.v:205.14-214.3
	value<1> p_DUT_2e_Brain_2e_Ready;
	// \hdlname: DUT Brain clk
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:299.13-299.16|i8008_core.v:205.14-214.3
	value<1> p_DUT_2e_Brain_2e_clk;
	// connection
	p_DUT_2e_Unit_2e_flags = p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr;
	// connection
	p_DUT_2e_Brain_2e_instr = p_DUT_2e_instr.curr;
	// connection
	p_DUT_2e_Brain_2e_flags = p_DUT_2e_Unit_2e_flags;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:387.13-387.26|i8008_core.v:205.14-214.3
	// cell $flatten\DUT.\Brain.$ne$i8008_core.v:387$68
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_387_24_68__Y = ne_uu<1>(p_DUT_2e_Brain_2e_instr.slice<2,0>().val(), value<3>{0x7u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2235_CMP0
	i_procmux_24_2235__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2235_CMP1
	i_procmux_24_2235__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2254_CMP0
	i_procmux_24_2254__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2254_CMP1
	i_procmux_24_2254__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2320_CMP0
	i_procmux_24_2320__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2320_CMP1
	i_procmux_24_2320__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2216_CMP0
	i_procmux_24_2216__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2216_CMP1
	i_procmux_24_2216__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x2u});
	// cells $procmux$2850 $procmux$2851_CMP0 $procmux$2852_CMP0 $procmux$2853_CMP0 $procmux$2854_CMP0 $flatten\DUT.\Brain.$not$i8008_core.v:321$57 $flatten\DUT.\Brain.$not$i8008_core.v:320$56 $flatten\DUT.\Brain.$not$i8008_core.v:319$55
	i_procmux_24_2850__Y = (eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<4,3>().val(), value<2>{0x3u}) ? p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr.slice<0>().val() : (eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<4,3>().val(), value<2>{0x2u}) ? not_u<1>(p_DUT_2e_Brain_2e_flags.slice<1>().val()) : (eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<4,3>().val(), value<2>{0x1u}) ? not_u<1>(p_DUT_2e_Brain_2e_flags.slice<2>().val()) : (logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<4,3>().val()) ? not_u<1>(p_DUT_2e_Brain_2e_flags.slice<3>().val()) : value<1>{0u}))));
	// connection
	p_DUT_2e_Brain_2e_CF = i_procmux_24_2850__Y;
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2270_CMP0
	i_procmux_24_2270__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2270_CMP1
	i_procmux_24_2270__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP0
	i_procmux_24_1884__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,4>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP1
	i_procmux_24_1884__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP2
	i_procmux_24_1884__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP3
	i_procmux_24_1884__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP4
	i_procmux_24_1884__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP5
	i_procmux_24_1884__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP6
	i_procmux_24_1884__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP7
	i_procmux_24_1884__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP8
	i_procmux_24_1884__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP9
	i_procmux_24_1884__CMP.slice<9>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP10
	i_procmux_24_1884__CMP.slice<10>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP11
	i_procmux_24_1884__CMP.slice<11>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1675_CMP0
	i_procmux_24_1675__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,4>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1675_CMP1
	i_procmux_24_1675__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1676_CMP0
	i_procmux_24_1676__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1676_CMP1
	i_procmux_24_1676__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1676_CMP2
	i_procmux_24_1676__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1677_CMP0
	i_procmux_24_1677__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1677_CMP1
	i_procmux_24_1677__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1677_CMP2
	i_procmux_24_1677__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1677_CMP3
	i_procmux_24_1677__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1677_CMP4
	i_procmux_24_1677__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1677_CMP5
	i_procmux_24_1677__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1677_CMP6
	i_procmux_24_1677__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1677_CMP7
	i_procmux_24_1677__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1677_CMP8
	i_procmux_24_1677__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1564_CMP0
	i_procmux_24_1564__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,4>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1564_CMP1
	i_procmux_24_1564__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1565_CMP0
	i_procmux_24_1565__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1565_CMP1
	i_procmux_24_1565__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1565_CMP2
	i_procmux_24_1565__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1566_CMP0
	i_procmux_24_1566__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1566_CMP1
	i_procmux_24_1566__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1566_CMP2
	i_procmux_24_1566__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1566_CMP3
	i_procmux_24_1566__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1566_CMP4
	i_procmux_24_1566__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1566_CMP5
	i_procmux_24_1566__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1566_CMP6
	i_procmux_24_1566__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1566_CMP7
	i_procmux_24_1566__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1566_CMP8
	i_procmux_24_1566__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// cells $flatten\DUT.\Brain.$logic_and$i8008_core.v:540$84 $flatten\DUT.\Brain.$eq$i8008_core.v:540$83
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_logic__and_24_i8008__core_2e_v_3a_540_24_84__Y = logic_and<1>(eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,4>().val(), value<4>{0x4u}), p_DUT_2e_Brain_2e_instr.slice<0>().val());
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1207_CMP0
	i_procmux_24_1207__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1207_CMP1
	i_procmux_24_1207__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1207_CMP2
	i_procmux_24_1207__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1207_CMP3
	i_procmux_24_1207__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1207_CMP4
	i_procmux_24_1207__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1207_CMP5
	i_procmux_24_1207__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$1168_CMP0
	i_procmux_24_1168__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$1168_CMP1
	i_procmux_24_1168__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$1168_CMP2
	i_procmux_24_1168__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$1168_CMP3
	i_procmux_24_1168__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$1168_CMP4
	i_procmux_24_1168__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$1168_CMP5
	i_procmux_24_1168__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1119_CMP0
	i_procmux_24_1119__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1119_CMP1
	i_procmux_24_1119__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1119_CMP2
	i_procmux_24_1119__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1119_CMP3
	i_procmux_24_1119__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1119_CMP4
	i_procmux_24_1119__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1119_CMP5
	i_procmux_24_1119__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2196_CMP0
	i_procmux_24_2196__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2196_CMP1
	i_procmux_24_2196__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0xau});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2196_CMP2
	i_procmux_24_2196__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2196_CMP3
	i_procmux_24_2196__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2197_CMP0
	i_procmux_24_2197__CMP.slice<0>() = logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val());
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2197_CMP1
	i_procmux_24_2197__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2286_CMP0
	i_procmux_24_2286__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2286_CMP1
	i_procmux_24_2286__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x2u});
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:347.11-347.31|i8008_core.v:205.14-214.3
	// cell $flatten\DUT.\Brain.$eq$i8008_core.v:347$61
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_eq_24_i8008__core_2e_v_3a_347_24_61__Y = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x5u});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$997_CMP0
	i_procmux_24_997__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$997_CMP1
	i_procmux_24_997__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$997_CMP2
	i_procmux_24_997__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$997_CMP3
	i_procmux_24_997__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$997_CMP4
	i_procmux_24_997__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$997_CMP5
	i_procmux_24_997__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$944_CMP0
	i_procmux_24_944__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$944_CMP1
	i_procmux_24_944__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$944_CMP2
	i_procmux_24_944__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$945_CMP0
	i_procmux_24_945__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$945_CMP1
	i_procmux_24_945__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$945_CMP2
	i_procmux_24_945__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP0
	i_procmux_24_1502__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,4>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP1
	i_procmux_24_1502__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP2
	i_procmux_24_1502__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP3
	i_procmux_24_1502__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP4
	i_procmux_24_1502__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP5
	i_procmux_24_1502__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP6
	i_procmux_24_1502__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP7
	i_procmux_24_1502__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP8
	i_procmux_24_1502__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP9
	i_procmux_24_1502__CMP.slice<9>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP10
	i_procmux_24_1502__CMP.slice<10>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP11
	i_procmux_24_1502__CMP.slice<11>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1609_CMP0
	i_procmux_24_1609__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,4>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1609_CMP1
	i_procmux_24_1609__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1409_CMP0
	i_procmux_24_1409__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1409_CMP1
	i_procmux_24_1409__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1409_CMP2
	i_procmux_24_1409__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,4>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$886_CMP0
	i_procmux_24_886__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$886_CMP1
	i_procmux_24_886__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$886_CMP2
	i_procmux_24_886__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$886_CMP3
	i_procmux_24_886__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$886_CMP4
	i_procmux_24_886__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$886_CMP5
	i_procmux_24_886__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2348_CMP0
	i_procmux_24_2348__CMP.slice<0>() = logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val());
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2348_CMP1
	i_procmux_24_2348__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2349_CMP0
	i_procmux_24_2349__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2349_CMP1
	i_procmux_24_2349__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2169_CMP0
	i_procmux_24_2169__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2169_CMP1
	i_procmux_24_2169__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0xau});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2169_CMP2
	i_procmux_24_2169__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2169_CMP3
	i_procmux_24_2169__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2170_CMP0
	i_procmux_24_2170__CMP.slice<0>() = logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val());
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2170_CMP1
	i_procmux_24_2170__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2171_CMP0
	i_procmux_24_2171__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2171_CMP1
	i_procmux_24_2171__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2097_CMP0
	i_procmux_24_2097__CMP.slice<0>() = logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val());
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2097_CMP1
	i_procmux_24_2097__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2332_CMP0
	i_procmux_24_2332__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2332_CMP1
	i_procmux_24_2332__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0xbu});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2107_CMP0
	i_procmux_24_2107__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2107_CMP1
	i_procmux_24_2107__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0xau});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2107_CMP2
	i_procmux_24_2107__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2107_CMP3
	i_procmux_24_2107__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2109_CMP0
	i_procmux_24_2109__CMP.slice<0>() = logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val());
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2109_CMP1
	i_procmux_24_2109__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$935_CMP0
	i_procmux_24_935__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$935_CMP1
	i_procmux_24_935__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$935_CMP2
	i_procmux_24_935__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1709_CMP0
	i_procmux_24_1709__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1709_CMP1
	i_procmux_24_1709__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1709_CMP2
	i_procmux_24_1709__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1709_CMP3
	i_procmux_24_1709__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1709_CMP4
	i_procmux_24_1709__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1709_CMP5
	i_procmux_24_1709__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1709_CMP6
	i_procmux_24_1709__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1709_CMP7
	i_procmux_24_1709__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1709_CMP8
	i_procmux_24_1709__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1661_CMP0
	i_procmux_24_1661__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1661_CMP1
	i_procmux_24_1661__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1661_CMP2
	i_procmux_24_1661__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1661_CMP3
	i_procmux_24_1661__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1661_CMP4
	i_procmux_24_1661__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1661_CMP5
	i_procmux_24_1661__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1661_CMP6
	i_procmux_24_1661__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1661_CMP7
	i_procmux_24_1661__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1661_CMP8
	i_procmux_24_1661__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1596_CMP0
	i_procmux_24_1596__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1596_CMP1
	i_procmux_24_1596__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1596_CMP2
	i_procmux_24_1596__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1596_CMP3
	i_procmux_24_1596__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1596_CMP4
	i_procmux_24_1596__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1596_CMP5
	i_procmux_24_1596__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1596_CMP6
	i_procmux_24_1596__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1596_CMP7
	i_procmux_24_1596__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1596_CMP8
	i_procmux_24_1596__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1235_CMP0
	i_procmux_24_1235__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1235_CMP1
	i_procmux_24_1235__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1235_CMP2
	i_procmux_24_1235__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1235_CMP3
	i_procmux_24_1235__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1235_CMP4
	i_procmux_24_1235__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1235_CMP5
	i_procmux_24_1235__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1194_CMP0
	i_procmux_24_1194__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1194_CMP1
	i_procmux_24_1194__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1194_CMP2
	i_procmux_24_1194__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1194_CMP3
	i_procmux_24_1194__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1194_CMP4
	i_procmux_24_1194__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1194_CMP5
	i_procmux_24_1194__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1145_CMP0
	i_procmux_24_1145__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1145_CMP1
	i_procmux_24_1145__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1145_CMP2
	i_procmux_24_1145__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1145_CMP3
	i_procmux_24_1145__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1145_CMP4
	i_procmux_24_1145__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1145_CMP5
	i_procmux_24_1145__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$1259_CMP0
	i_procmux_24_1259__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$1259_CMP1
	i_procmux_24_1259__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$1259_CMP2
	i_procmux_24_1259__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$915_CMP0
	i_procmux_24_915__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$915_CMP1
	i_procmux_24_915__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$915_CMP2
	i_procmux_24_915__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$916_CMP0
	i_procmux_24_916__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$916_CMP1
	i_procmux_24_916__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$916_CMP2
	i_procmux_24_916__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$1976_CMP0
	i_procmux_24_1976__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$1976_CMP1
	i_procmux_24_1976__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$1976_CMP2
	i_procmux_24_1976__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$1976_CMP3
	i_procmux_24_1976__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$1976_CMP4
	i_procmux_24_1976__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$1976_CMP5
	i_procmux_24_1976__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$878_CMP0
	i_procmux_24_878__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$878_CMP1
	i_procmux_24_878__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$878_CMP2
	i_procmux_24_878__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$878_CMP3
	i_procmux_24_878__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$878_CMP4
	i_procmux_24_878__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$878_CMP5
	i_procmux_24_878__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2071_CMP0
	i_procmux_24_2071__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2071_CMP1
	i_procmux_24_2071__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0xau});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2071_CMP2
	i_procmux_24_2071__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2071_CMP3
	i_procmux_24_2071__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2838_CMP0
	i_procmux_24_2838__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2838_CMP1
	i_procmux_24_2838__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0xau});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2838_CMP2
	i_procmux_24_2838__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2838_CMP3
	i_procmux_24_2838__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2840_CMP0
	i_procmux_24_2840__CMP.slice<0>() = logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val());
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2840_CMP1
	i_procmux_24_2840__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2021_CMP0
	i_procmux_24_2021__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2021_CMP1
	i_procmux_24_2021__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0xau});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2021_CMP2
	i_procmux_24_2021__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2021_CMP3
	i_procmux_24_2021__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2011_CMP0
	i_procmux_24_2011__CMP.slice<0>() = logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val());
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2011_CMP1
	i_procmux_24_2011__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$1998_CMP0
	i_procmux_24_1998__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$1998_CMP1
	i_procmux_24_1998__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0xau});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$1998_CMP2
	i_procmux_24_1998__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$1998_CMP3
	i_procmux_24_1998__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$1999_CMP0
	i_procmux_24_1999__CMP.slice<0>() = logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val());
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$1999_CMP1
	i_procmux_24_1999__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$1988_CMP0
	i_procmux_24_1988__CMP.slice<0>() = logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val());
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$1988_CMP1
	i_procmux_24_1988__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1898_CMP0
	i_procmux_24_1898__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1898_CMP1
	i_procmux_24_1898__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1898_CMP2
	i_procmux_24_1898__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1840_CMP0
	i_procmux_24_1840__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1840_CMP1
	i_procmux_24_1840__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1840_CMP2
	i_procmux_24_1840__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1738_CMP0
	i_procmux_24_1738__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1738_CMP1
	i_procmux_24_1738__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1738_CMP2
	i_procmux_24_1738__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1623_CMP0
	i_procmux_24_1623__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1623_CMP1
	i_procmux_24_1623__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1623_CMP2
	i_procmux_24_1623__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1399_CMP0
	i_procmux_24_1399__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1399_CMP1
	i_procmux_24_1399__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1399_CMP2
	i_procmux_24_1399__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,4>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1418_CMP0
	i_procmux_24_1418__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1418_CMP1
	i_procmux_24_1418__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1419_CMP0
	i_procmux_24_1419__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1419_CMP1
	i_procmux_24_1419__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1419_CMP2
	i_procmux_24_1419__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,4>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1691_CMP0
	i_procmux_24_1691__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,4>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1691_CMP1
	i_procmux_24_1691__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1692_CMP0
	i_procmux_24_1692__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1692_CMP1
	i_procmux_24_1692__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1692_CMP2
	i_procmux_24_1692__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1693_CMP0
	i_procmux_24_1693__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1693_CMP1
	i_procmux_24_1693__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1693_CMP2
	i_procmux_24_1693__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1693_CMP3
	i_procmux_24_1693__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1693_CMP4
	i_procmux_24_1693__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1693_CMP5
	i_procmux_24_1693__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1693_CMP6
	i_procmux_24_1693__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1693_CMP7
	i_procmux_24_1693__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1693_CMP8
	i_procmux_24_1693__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1579_CMP0
	i_procmux_24_1579__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,4>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1579_CMP1
	i_procmux_24_1579__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1580_CMP0
	i_procmux_24_1580__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1580_CMP1
	i_procmux_24_1580__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1580_CMP2
	i_procmux_24_1580__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1581_CMP0
	i_procmux_24_1581__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1581_CMP1
	i_procmux_24_1581__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1581_CMP2
	i_procmux_24_1581__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1581_CMP3
	i_procmux_24_1581__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1581_CMP4
	i_procmux_24_1581__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1581_CMP5
	i_procmux_24_1581__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1581_CMP6
	i_procmux_24_1581__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1581_CMP7
	i_procmux_24_1581__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1581_CMP8
	i_procmux_24_1581__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1221_CMP0
	i_procmux_24_1221__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1221_CMP1
	i_procmux_24_1221__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1221_CMP2
	i_procmux_24_1221__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1221_CMP3
	i_procmux_24_1221__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1221_CMP4
	i_procmux_24_1221__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1221_CMP5
	i_procmux_24_1221__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1132_CMP0
	i_procmux_24_1132__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1132_CMP1
	i_procmux_24_1132__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1132_CMP2
	i_procmux_24_1132__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1132_CMP3
	i_procmux_24_1132__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1132_CMP4
	i_procmux_24_1132__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1132_CMP5
	i_procmux_24_1132__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1723_CMP0
	i_procmux_24_1723__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,4>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1723_CMP1
	i_procmux_24_1723__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1968_CMP0
	i_procmux_24_1968__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1968_CMP1
	i_procmux_24_1968__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1389_CMP0
	i_procmux_24_1389__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1389_CMP1
	i_procmux_24_1389__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2519_CMP0
	i_procmux_24_2519__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2519_CMP1
	i_procmux_24_2519__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1886_CMP0
	i_procmux_24_1886__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1886_CMP1
	i_procmux_24_1886__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1679_CMP0
	i_procmux_24_1679__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1679_CMP1
	i_procmux_24_1679__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1483_CMP0
	i_procmux_24_1483__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1483_CMP1
	i_procmux_24_1483__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1210_CMP0
	i_procmux_24_1210__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1210_CMP1
	i_procmux_24_1210__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1170_CMP0
	i_procmux_24_1170__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1170_CMP1
	i_procmux_24_1170__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$989_CMP0
	i_procmux_24_989__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$989_CMP1
	i_procmux_24_989__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2566_CMP0
	i_procmux_24_2566__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2566_CMP1
	i_procmux_24_2566__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2555_CMP0
	i_procmux_24_2555__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2555_CMP1
	i_procmux_24_2555__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$999_CMP0
	i_procmux_24_999__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$999_CMP1
	i_procmux_24_999__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1504_CMP0
	i_procmux_24_1504__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1504_CMP1
	i_procmux_24_1504__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1493_CMP0
	i_procmux_24_1493__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1493_CMP1
	i_procmux_24_1493__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$978_CMP0
	i_procmux_24_978__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$978_CMP1
	i_procmux_24_978__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// cells $procmux$2323 $procmux$2324_CMP0 $procmux$2321 $procmux$2322_CMP0 $procmux$2319 $procmux$2320_ANY $procmux$2317
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_20_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2320__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_387_24_68__Y ? p_DUT_2e_instr.curr.slice<2,0>().val() : value<3>{0u}) : value<3>{0u}) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$2219 $procmux$2220_CMP0 $procmux$2217 $procmux$2218_CMP0 $procmux$2215 $procmux$2216_ANY $procmux$2213
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_20_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2216__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_387_24_68__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2531_CMP0
	i_procmux_24_2531__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2531_CMP1
	i_procmux_24_2531__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2543_CMP0
	i_procmux_24_2543__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2543_CMP1
	i_procmux_24_2543__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1711_CMP0
	i_procmux_24_1711__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1711_CMP1
	i_procmux_24_1711__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1663_CMP0
	i_procmux_24_1663__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1663_CMP1
	i_procmux_24_1663__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1237_CMP0
	i_procmux_24_1237__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1237_CMP1
	i_procmux_24_1237__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1196_CMP0
	i_procmux_24_1196__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1196_CMP1
	i_procmux_24_1196__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1842_CMP0
	i_procmux_24_1842__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1842_CMP1
	i_procmux_24_1842__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1740_CMP0
	i_procmux_24_1740__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1740_CMP1
	i_procmux_24_1740__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1365_CMP0
	i_procmux_24_1365__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1365_CMP1
	i_procmux_24_1365__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1251_CMP0
	i_procmux_24_1251__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1251_CMP1
	i_procmux_24_1251__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1695_CMP0
	i_procmux_24_1695__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1695_CMP1
	i_procmux_24_1695__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1224_CMP0
	i_procmux_24_1224__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1224_CMP1
	i_procmux_24_1224__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1725_CMP0
	i_procmux_24_1725__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1725_CMP1
	i_procmux_24_1725__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2663_CMP0
	i_procmux_24_2663__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2663_CMP1
	i_procmux_24_2663__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2666_CMP0
	i_procmux_24_2666__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2666_CMP1
	i_procmux_24_2666__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2120_CMP0
	i_procmux_24_2120__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2120_CMP1
	i_procmux_24_2120__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2123_CMP0
	i_procmux_24_2123__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2123_CMP1
	i_procmux_24_2123__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1536_CMP0
	i_procmux_24_1536__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1536_CMP1
	i_procmux_24_1536__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1539_CMP0
	i_procmux_24_1539__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1539_CMP1
	i_procmux_24_1539__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1438_CMP0
	i_procmux_24_1438__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1438_CMP1
	i_procmux_24_1438__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1441_CMP0
	i_procmux_24_1441__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1441_CMP1
	i_procmux_24_1441__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$954_CMP0
	i_procmux_24_954__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$954_CMP1
	i_procmux_24_954__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$957_CMP0
	i_procmux_24_957__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$957_CMP1
	i_procmux_24_957__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$895_CMP0
	i_procmux_24_895__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$895_CMP1
	i_procmux_24_895__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$898_CMP0
	i_procmux_24_898__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$898_CMP1
	i_procmux_24_898__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2735_CMP0
	i_procmux_24_2735__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2735_CMP1
	i_procmux_24_2735__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2738_CMP0
	i_procmux_24_2738__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2738_CMP1
	i_procmux_24_2738__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2635_CMP0
	i_procmux_24_2635__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2635_CMP1
	i_procmux_24_2635__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2638_CMP0
	i_procmux_24_2638__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2638_CMP1
	i_procmux_24_2638__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2587_CMP0
	i_procmux_24_2587__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2587_CMP1
	i_procmux_24_2587__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2590_CMP0
	i_procmux_24_2590__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2590_CMP1
	i_procmux_24_2590__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2575_CMP0
	i_procmux_24_2575__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2575_CMP1
	i_procmux_24_2575__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2578_CMP0
	i_procmux_24_2578__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2578_CMP1
	i_procmux_24_2578__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1318_CMP0
	i_procmux_24_1318__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1318_CMP1
	i_procmux_24_1318__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1321_CMP0
	i_procmux_24_1321__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1321_CMP1
	i_procmux_24_1321__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1084_CMP0
	i_procmux_24_1084__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1084_CMP1
	i_procmux_24_1084__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1087_CMP0
	i_procmux_24_1087__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1087_CMP1
	i_procmux_24_1087__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1824_CMP0
	i_procmux_24_1824__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1824_CMP1
	i_procmux_24_1824__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1827_CMP0
	i_procmux_24_1827__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1827_CMP1
	i_procmux_24_1827__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1470_CMP0
	i_procmux_24_1470__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1470_CMP1
	i_procmux_24_1470__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1473_CMP0
	i_procmux_24_1473__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1473_CMP1
	i_procmux_24_1473__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1338_CMP0
	i_procmux_24_1338__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1338_CMP1
	i_procmux_24_1338__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1341_CMP0
	i_procmux_24_1341__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1341_CMP1
	i_procmux_24_1341__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2611_CMP0
	i_procmux_24_2611__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2611_CMP1
	i_procmux_24_2611__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2614_CMP0
	i_procmux_24_2614__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2614_CMP1
	i_procmux_24_2614__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2599_CMP0
	i_procmux_24_2599__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2599_CMP1
	i_procmux_24_2599__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2602_CMP0
	i_procmux_24_2602__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2602_CMP1
	i_procmux_24_2602__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2387_CMP0
	i_procmux_24_2387__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2387_CMP1
	i_procmux_24_2387__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2390_CMP0
	i_procmux_24_2390__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2390_CMP1
	i_procmux_24_2390__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2132_CMP0
	i_procmux_24_2132__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2132_CMP1
	i_procmux_24_2132__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2135_CMP0
	i_procmux_24_2135__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2135_CMP1
	i_procmux_24_2135__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1348_CMP0
	i_procmux_24_1348__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1348_CMP1
	i_procmux_24_1348__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1351_CMP0
	i_procmux_24_1351__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1351_CMP1
	i_procmux_24_1351__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2783_CMP0
	i_procmux_24_2783__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2783_CMP1
	i_procmux_24_2783__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2786_CMP0
	i_procmux_24_2786__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2786_CMP1
	i_procmux_24_2786__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2747_CMP0
	i_procmux_24_2747__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2747_CMP1
	i_procmux_24_2747__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2750_CMP0
	i_procmux_24_2750__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2750_CMP1
	i_procmux_24_2750__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2699_CMP0
	i_procmux_24_2699__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2699_CMP1
	i_procmux_24_2699__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2702_CMP0
	i_procmux_24_2702__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2702_CMP1
	i_procmux_24_2702__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2687_CMP0
	i_procmux_24_2687__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2687_CMP1
	i_procmux_24_2687__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2690_CMP0
	i_procmux_24_2690__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2690_CMP1
	i_procmux_24_2690__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2675_CMP0
	i_procmux_24_2675__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2675_CMP1
	i_procmux_24_2675__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2678_CMP0
	i_procmux_24_2678__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2678_CMP1
	i_procmux_24_2678__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2623_CMP0
	i_procmux_24_2623__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2623_CMP1
	i_procmux_24_2623__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2626_CMP0
	i_procmux_24_2626__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2626_CMP1
	i_procmux_24_2626__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2375_CMP0
	i_procmux_24_2375__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2375_CMP1
	i_procmux_24_2375__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2378_CMP0
	i_procmux_24_2378__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2378_CMP1
	i_procmux_24_2378__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1748_CMP0
	i_procmux_24_1748__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1748_CMP1
	i_procmux_24_1748__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1751_CMP0
	i_procmux_24_1751__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1751_CMP1
	i_procmux_24_1751__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1644_CMP0
	i_procmux_24_1644__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1644_CMP1
	i_procmux_24_1644__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1647_CMP0
	i_procmux_24_1647__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1647_CMP1
	i_procmux_24_1647__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1328_CMP0
	i_procmux_24_1328__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1328_CMP1
	i_procmux_24_1328__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1331_CMP0
	i_procmux_24_1331__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1331_CMP1
	i_procmux_24_1331__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1278_CMP0
	i_procmux_24_1278__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1278_CMP1
	i_procmux_24_1278__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1281_CMP0
	i_procmux_24_1281__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1281_CMP1
	i_procmux_24_1281__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1094_CMP0
	i_procmux_24_1094__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1094_CMP1
	i_procmux_24_1094__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1097_CMP0
	i_procmux_24_1097__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1097_CMP1
	i_procmux_24_1097__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$964_CMP0
	i_procmux_24_964__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$964_CMP1
	i_procmux_24_964__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$967_CMP0
	i_procmux_24_967__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$967_CMP1
	i_procmux_24_967__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$905_CMP0
	i_procmux_24_905__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$905_CMP1
	i_procmux_24_905__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$908_CMP0
	i_procmux_24_908__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$908_CMP1
	i_procmux_24_908__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1850_CMP0
	i_procmux_24_1850__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1850_CMP1
	i_procmux_24_1850__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1853_CMP0
	i_procmux_24_1853__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1853_CMP1
	i_procmux_24_1853__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2759_CMP0
	i_procmux_24_2759__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2759_CMP1
	i_procmux_24_2759__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2762_CMP0
	i_procmux_24_2762__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2762_CMP1
	i_procmux_24_2762__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2771_CMP0
	i_procmux_24_2771__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2771_CMP1
	i_procmux_24_2771__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2774_CMP0
	i_procmux_24_2774__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2774_CMP1
	i_procmux_24_2774__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1780_CMP0
	i_procmux_24_1780__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1780_CMP1
	i_procmux_24_1780__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1783_CMP0
	i_procmux_24_1783__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1783_CMP1
	i_procmux_24_1783__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1633_CMP0
	i_procmux_24_1633__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1633_CMP1
	i_procmux_24_1633__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1636_CMP0
	i_procmux_24_1636__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1636_CMP1
	i_procmux_24_1636__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1449_CMP0
	i_procmux_24_1449__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1449_CMP1
	i_procmux_24_1449__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1452_CMP0
	i_procmux_24_1452__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1452_CMP1
	i_procmux_24_1452__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1268_CMP0
	i_procmux_24_1268__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1268_CMP1
	i_procmux_24_1268__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1271_CMP0
	i_procmux_24_1271__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1271_CMP1
	i_procmux_24_1271__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1791_CMP0
	i_procmux_24_1791__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1791_CMP1
	i_procmux_24_1791__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1794_CMP0
	i_procmux_24_1794__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1794_CMP1
	i_procmux_24_1794__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1288_CMP0
	i_procmux_24_1288__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1288_CMP1
	i_procmux_24_1288__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1291_CMP0
	i_procmux_24_1291__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1291_CMP1
	i_procmux_24_1291__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1759_CMP0
	i_procmux_24_1759__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1759_CMP1
	i_procmux_24_1759__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1762_CMP0
	i_procmux_24_1762__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1762_CMP1
	i_procmux_24_1762__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1861_CMP0
	i_procmux_24_1861__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1861_CMP1
	i_procmux_24_1861__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1864_CMP0
	i_procmux_24_1864__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1864_CMP1
	i_procmux_24_1864__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1872_CMP0
	i_procmux_24_1872__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1872_CMP1
	i_procmux_24_1872__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1875_CMP0
	i_procmux_24_1875__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1875_CMP1
	i_procmux_24_1875__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// cells $procmux$1887 $procmux$1888_CMP0 $procmux$1885 $procmux$1886_ANY $procmux$1883 $procmux$1884_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_51_5c_ctrl__signals_5b_39_3a_38_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1886__CMP) ? (reduce_or<1>(i_procmux_24_1884__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1484 $procmux$1485_CMP0 $procmux$1482 $procmux$1483_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_51_5c_ctrl__signals_5b_39_3a_38_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1483__CMP) ? value<1>{0u} : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1171 $procmux$1172_CMP0 $procmux$1169 $procmux$1170_ANY $procmux$1167 $procmux$1168_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_76_5c_ctrl__signals_5b_39_3a_38_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1170__CMP) ? (reduce_or<1>(i_procmux_24_1168__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$990 $procmux$991_CMP0 $procmux$988 $procmux$989_ANY $procmux$986 $procmux$987_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_76_5c_ctrl__signals_5b_39_3a_38_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_989__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$2200 $procmux$2201_CMP0 $procmux$2198 $procmux$2199_CMP0 $procmux$2195 $procmux$2196_ANY $procmux$2197_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_18_5c_ctrl__signals_5b_33_3a_32_5d_.slice<0>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2196__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_2197__CMP) ? value<1>{0x1u} : value<1>{0u})) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$2158 $procmux$2159_CMP0 $procmux$2156 $procmux$2157_CMP0 $procmux$2154 $procmux$2155_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_18_5c_ctrl__signals_5b_33_3a_32_5d_.slice<1>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x5u}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1505 $procmux$1506_CMP0 $procmux$1503 $procmux$1504_ANY $procmux$1501 $procmux$1502_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_50_5c_ctrl__signals_5b_30_3a_29_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1504__CMP) ? (reduce_or<1>(i_procmux_24_1502__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1494 $procmux$1495_CMP0 $procmux$1492 $procmux$1493_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_50_5c_ctrl__signals_5b_30_3a_29_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1493__CMP) ? value<1>{0u} : value<1>{0u}) : value<1>{0u});
	// cells $procmux$2352 $procmux$2353_CMP0 $procmux$2350 $procmux$2351_CMP0 $procmux$2347 $procmux$2348_ANY $procmux$2349_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_16_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2348__CMP) ? p_DUT_2e_instr.curr.slice<5,3>().val() : (reduce_or<1>(i_procmux_24_2349__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_20_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>().val() : value<3>{0u})) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$2174 $procmux$2175_CMP0 $procmux$2172 $procmux$2173_CMP0 $procmux$2168 $procmux$2169_ANY $procmux$2170_ANY $procmux$2171_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_16_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2169__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_2170__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_2171__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_20_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>().val() : value<1>{0u}))) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$2304 $procmux$2305_CMP0 $procmux$2302 $procmux$2303_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_14_5c_ctrl__signals_5b_7_3a_6_5d_.slice<1>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : value<1>{0u}) : value<1>{0u});
	// cells $procmux$2185 $procmux$2186_CMP0 $procmux$2183 $procmux$2184_CMP0 $procmux$2181 $procmux$2182_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_14_5c_ctrl__signals_5b_7_3a_6_5d_.slice<0>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x5u}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1712 $procmux$1713_CMP0 $procmux$1710 $procmux$1711_ANY $procmux$1708 $procmux$1709_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_41_5c_ctrl__signals_5b_5_3a_4_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1711__CMP) ? (reduce_or<1>(i_procmux_24_1709__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1664 $procmux$1665_CMP0 $procmux$1662 $procmux$1663_ANY $procmux$1660 $procmux$1661_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_41_5c_ctrl__signals_5b_5_3a_4_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1663__CMP) ? (reduce_or<1>(i_procmux_24_1661__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1599 $procmux$1600_CMP0 $procmux$1597 $procmux$1598_CMP0 $procmux$1595 $procmux$1596_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_46_5c_ctrl__signals_5b_5_3a_4_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (reduce_or<1>(i_procmux_24_1596__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1554 $procmux$1555_CMP0 $procmux$1552 $procmux$1553_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_46_5c_ctrl__signals_5b_5_3a_4_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1238 $procmux$1239_CMP0 $procmux$1236 $procmux$1237_ANY $procmux$1234 $procmux$1235_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_67_5c_ctrl__signals_5b_5_3a_4_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1237__CMP) ? (reduce_or<1>(i_procmux_24_1235__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1197 $procmux$1198_CMP0 $procmux$1195 $procmux$1196_ANY $procmux$1193 $procmux$1194_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_67_5c_ctrl__signals_5b_5_3a_4_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1196__CMP) ? (reduce_or<1>(i_procmux_24_1194__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1148 $procmux$1149_CMP0 $procmux$1146 $procmux$1147_CMP0 $procmux$1144 $procmux$1145_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_71_5c_ctrl__signals_5b_5_3a_4_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (reduce_or<1>(i_procmux_24_1145__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1110 $procmux$1111_CMP0 $procmux$1108 $procmux$1109_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_71_5c_ctrl__signals_5b_5_3a_4_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1262 $procmux$1263_CMP0 $procmux$1260 $procmux$1261_CMP0 $procmux$1258 $procmux$1259_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_78_5c_ctrl__signals_5b_7_3a_6_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_1259__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$919 $procmux$920_CMP0 $procmux$917 $procmux$918_CMP0 $procmux$914 $procmux$915_ANY $procmux$916_ANY $flatten\DUT.\Brain.$or$i8008_core.v:651$132 $flatten\DUT.\Brain.$and$i8008_core.v:651$131 $flatten\DUT.\Brain.$logic_and$i8008_core.v:651$130 $flatten\DUT.\Brain.$eq$i8008_core.v:651$129 $flatten\DUT.\Brain.$eq$i8008_core.v:651$128 $flatten\DUT.\Brain.$or$i8008_core.v:651$127 $flatten\DUT.\Brain.$and$i8008_core.v:651$126 $flatten\DUT.\Brain.$not$i8008_core.v:651$125 $flatten\DUT.\Brain.$logic_and$i8008_core.v:651$124 $flatten\DUT.\Brain.$eq$i8008_core.v:651$123 $flatten\DUT.\Brain.$eq$i8008_core.v:651$122 $flatten\DUT.\Brain.$logic_and$i8008_core.v:651$121 $flatten\DUT.\Brain.$eq$i8008_core.v:651$120 $flatten\DUT.\Brain.$eq$i8008_core.v:651$119 $flatten\DUT.\Brain.$or$i8008_core.v:644$104 $flatten\DUT.\Brain.$and$i8008_core.v:644$103 $flatten\DUT.\Brain.$logic_and$i8008_core.v:644$102 $flatten\DUT.\Brain.$eq$i8008_core.v:644$101 $flatten\DUT.\Brain.$eq$i8008_core.v:644$100 $flatten\DUT.\Brain.$or$i8008_core.v:644$99 $flatten\DUT.\Brain.$and$i8008_core.v:644$98 $flatten\DUT.\Brain.$not$i8008_core.v:644$97 $flatten\DUT.\Brain.$logic_and$i8008_core.v:644$96 $flatten\DUT.\Brain.$eq$i8008_core.v:644$95 $flatten\DUT.\Brain.$eq$i8008_core.v:644$94 $flatten\DUT.\Brain.$logic_and$i8008_core.v:644$93 $flatten\DUT.\Brain.$eq$i8008_core.v:644$92 $flatten\DUT.\Brain.$eq$i8008_core.v:644$91
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_78_5c_ctrl__signals_5b_7_3a_6_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_915__CMP) ? or_uu<1>(or_uu<1>(logic_and<1>(eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x1u}), eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<2,0>().val(), value<3>{0x4u})), and_uu<1>(logic_and<1>(eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().val(), value<3>{0x3u}), logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<2,0>().val())), not_u<1>(p_DUT_2e_Brain_2e_CF))), and_uu<1>(logic_and<1>(eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().val(), value<3>{0x2u}), logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<2,0>().val())), p_DUT_2e_Brain_2e_CF)) : (reduce_or<1>(i_procmux_24_916__CMP) ? or_uu<1>(or_uu<1>(logic_and<1>(eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x1u}), eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<2,0>().val(), value<3>{0x6u})), and_uu<1>(logic_and<1>(eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().val(), value<3>{0x3u}), eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<2,0>().val(), value<3>{0x2u})), not_u<1>(p_DUT_2e_Brain_2e_CF))), and_uu<1>(logic_and<1>(eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().val(), value<3>{0x2u}), eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<2,0>().val(), value<3>{0x2u})), p_DUT_2e_Brain_2e_CF)) : value<1>{0u})) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$2843 $procmux$2844_CMP0 $procmux$2841 $procmux$2842_CMP0 $procmux$2837 $procmux$2838_ANY $procmux$2839_CMP0 $procmux$2840_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_28_5c_ctrl__signals_5b_24_3a_16_5d_.slice<8>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_2838__CMP) ? value<1>{0x1u} : (eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x2u}) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_2840__CMP) ? value<1>{0x1u} : value<1>{0u}))) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$2025 $procmux$2026_CMP0 $procmux$2023 $procmux$2024_CMP0 $procmux$2020 $procmux$2021_ANY $procmux$2022_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_28_5c_ctrl__signals_5b_24_3a_16_5d_.slice<7,5>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_2021__CMP) ? p_DUT_2e_instr.curr.slice<5,3>().val() : (eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x2u}) ? p_DUT_2e_instr.curr.slice<5,3>().val() : value<3>{0u})) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$2014 $procmux$2015_CMP0 $procmux$2012 $procmux$2013_CMP0 $procmux$2010 $procmux$2011_ANY $flatten\DUT.\Brain.$ternary$i8008_core.v:437$76 $flatten\DUT.\Brain.$eq$i8008_core.v:437$75
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_28_5c_ctrl__signals_5b_24_3a_16_5d_.slice<4,2>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_2011__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<2,0>().val()) ? value<3>{0x4u} : value<3>{0x5u}) : value<3>{0u}) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$2002 $procmux$2003_CMP0 $procmux$2000 $procmux$2001_CMP0 $procmux$1997 $procmux$1998_ANY $procmux$1999_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_28_5c_ctrl__signals_5b_24_3a_16_5d_.slice<1>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_1998__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_1999__CMP) ? value<1>{0x1u} : value<1>{0u})) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1991 $procmux$1992_CMP0 $procmux$1989 $procmux$1990_CMP0 $procmux$1987 $procmux$1988_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_28_5c_ctrl__signals_5b_24_3a_16_5d_.slice<0>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_1988__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1901 $procmux$1902_CMP0 $procmux$1899 $procmux$1900_CMP0 $procmux$1897 $procmux$1898_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_47_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (reduce_or<1>(i_procmux_24_1898__CMP) ? value<3>{0x5u} : value<3>{0u}) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$1843 $procmux$1844_CMP0 $procmux$1841 $procmux$1842_ANY $procmux$1839 $procmux$1840_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_42_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1842__CMP) ? (reduce_or<1>(i_procmux_24_1840__CMP) ? value<3>{0x6u} : value<3>{0u}) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$1741 $procmux$1742_CMP0 $procmux$1739 $procmux$1740_ANY $procmux$1737 $procmux$1738_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_42_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1740__CMP) ? (reduce_or<1>(i_procmux_24_1738__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1626 $procmux$1627_CMP0 $procmux$1624 $procmux$1625_CMP0 $procmux$1622 $procmux$1623_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_47_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (reduce_or<1>(i_procmux_24_1623__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1366 $procmux$1367_CMP0 $procmux$1364 $procmux$1365_ANY $procmux$1362 $procmux$1363_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_68_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1365__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu}) ? value<3>{0x6u} : value<3>{0u}) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$1252 $procmux$1253_CMP0 $procmux$1250 $procmux$1251_ANY $procmux$1248 $procmux$1249_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_68_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1251__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1184 $procmux$1185_CMP0 $procmux$1182 $procmux$1183_CMP0 $procmux$1180 $procmux$1181_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_72_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu}) ? value<3>{0x5u} : value<3>{0u}) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$1161 $procmux$1162_CMP0 $procmux$1159 $procmux$1160_CMP0 $procmux$1157 $procmux$1158_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_72_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1971 $procmux$1972_CMP0 $procmux$1969 $procmux$1970_CMP0 $procmux$1967 $procmux$1968_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_57_5c_ctrl__signals_5b_24_3a_21_5d_.slice<3>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_1968__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1392 $procmux$1393_CMP0 $procmux$1390 $procmux$1391_CMP0 $procmux$1388 $procmux$1389_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_57_5c_ctrl__signals_5b_24_3a_21_5d_.slice<2,0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_1389__CMP) ? p_DUT_2e_instr.curr.slice<5,3>().val() : value<3>{0u}) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$2667 $procmux$2668_CMP0 $procmux$2660 $procmux$2661_CMP0 $procmux$2662_CMP0 $procmux$2663_ANY $procmux$2664_CMP0 $procmux$2665_CMP0 $procmux$2666_ANY $procmux$2273 $procmux$2274_CMP0 $procmux$2271 $procmux$2272_CMP0 $procmux$2269 $procmux$2270_ANY $procmux$2238 $procmux$2239_CMP0 $procmux$2236 $procmux$2237_CMP0 $procmux$2234 $procmux$2235_ANY $procmux$2232
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_7_5c_ctrl__signals_5b_39_3a_38_5d_.slice<0>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2270__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2235__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_387_24_68__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_2663__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_2666__CMP) ? value<1>{0x1u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2124 $procmux$2125_CMP0 $procmux$2117 $procmux$2118_CMP0 $procmux$2119_CMP0 $procmux$2120_ANY $procmux$2121_CMP0 $procmux$2122_CMP0 $procmux$2123_ANY $procmux$2520 $procmux$2521_CMP0 $procmux$2518 $procmux$2519_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_7_5c_ctrl__signals_5b_39_3a_38_5d_.slice<1>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2120__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2519__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2123__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1540 $procmux$1541_CMP0 $procmux$1533 $procmux$1534_CMP0 $procmux$1535_CMP0 $procmux$1536_ANY $procmux$1537_CMP0 $procmux$1538_CMP0 $procmux$1539_ANY $procmux$1463 $procmux$1464_CMP0 $procmux$1461 $procmux$1462_CMP0 $procmux$1459 $procmux$1569 $procmux$1570_CMP0 $procmux$1567 $procmux$1568_CMP0 $procmux$1563 $procmux$1564_ANY $procmux$1565_ANY $procmux$1566_ANY $procmux$1680 $procmux$1681_CMP0 $procmux$1678 $procmux$1679_ANY $procmux$1674 $procmux$1675_ANY $procmux$1676_ANY $procmux$1677_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_39_5c_ctrl__signals_5b_39_3a_38_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_logic__and_24_i8008__core_2e_v_3a_540_24_84__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_1536__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_51_5c_ctrl__signals_5b_39_3a_38_5d_.slice<0>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (reduce_or<1>(i_procmux_24_1564__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_1565__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_1566__CMP) ? value<1>{0x1u} : value<1>{0u}))) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_1539__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1679__CMP) ? (reduce_or<1>(i_procmux_24_1675__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_1676__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_1677__CMP) ? value<1>{0x1u} : value<1>{0u}))) : value<1>{0u}) : value<1>{0u}) : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1442 $procmux$1443_CMP0 $procmux$1435 $procmux$1436_CMP0 $procmux$1437_CMP0 $procmux$1438_ANY $procmux$1439_CMP0 $procmux$1440_CMP0 $procmux$1441_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_39_5c_ctrl__signals_5b_39_3a_38_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1438__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_51_5c_ctrl__signals_5b_39_3a_38_5d_.slice<1>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1441__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$958 $procmux$959_CMP0 $procmux$951 $procmux$952_CMP0 $procmux$953_CMP0 $procmux$954_ANY $procmux$955_CMP0 $procmux$956_CMP0 $procmux$957_ANY $procmux$1123 $procmux$1124_CMP0 $procmux$1121 $procmux$1122_CMP0 $procmux$1118 $procmux$1119_ANY $procmux$1120_CMP0 $procmux$1211 $procmux$1212_CMP0 $procmux$1209 $procmux$1210_ANY $procmux$1206 $procmux$1207_ANY $procmux$1208_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_65_5c_ctrl__signals_5b_39_3a_38_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_954__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_76_5c_ctrl__signals_5b_39_3a_38_5d_.slice<0>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (reduce_or<1>(i_procmux_24_1119__CMP) ? value<1>{0x1u} : (eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu}) ? value<1>{0x1u} : value<1>{0u})) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_957__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1210__CMP) ? (reduce_or<1>(i_procmux_24_1207__CMP) ? value<1>{0x1u} : (eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu}) ? value<1>{0x1u} : value<1>{0u})) : value<1>{0u}) : value<1>{0u}) : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$899 $procmux$900_CMP0 $procmux$892 $procmux$893_CMP0 $procmux$894_CMP0 $procmux$895_ANY $procmux$896_CMP0 $procmux$897_CMP0 $procmux$898_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_65_5c_ctrl__signals_5b_39_3a_38_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_895__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_76_5c_ctrl__signals_5b_39_3a_38_5d_.slice<1>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_898__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2739 $procmux$2740_CMP0 $procmux$2732 $procmux$2733_CMP0 $procmux$2734_CMP0 $procmux$2735_ANY $procmux$2736_CMP0 $procmux$2737_CMP0 $procmux$2738_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_.slice<4,3>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_18_5c_ctrl__signals_5b_33_3a_32_5d_ : (reduce_or<1>(i_procmux_24_2735__CMP) ? value<2>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<2>{0u} : (reduce_or<1>(i_procmux_24_2738__CMP) ? value<2>{0u} : value<2>{0u})))))) : value<2>{0u});
	// cells $procmux$2639 $procmux$2640_CMP0 $procmux$2632 $procmux$2633_CMP0 $procmux$2634_CMP0 $procmux$2635_ANY $procmux$2636_CMP0 $procmux$2637_CMP0 $procmux$2638_ANY $procmux$2289 $procmux$2290_CMP0 $procmux$2287 $procmux$2288_CMP0 $procmux$2285 $procmux$2286_ANY $procmux$2257 $procmux$2258_CMP0 $procmux$2255 $procmux$2256_CMP0 $procmux$2253 $procmux$2254_ANY $procmux$2251 $procmux$2567 $procmux$2568_CMP0 $procmux$2565 $procmux$2566_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_.slice<0>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2286__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2254__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_387_24_68__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_2635__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2566__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2638__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2591 $procmux$2592_CMP0 $procmux$2584 $procmux$2585_CMP0 $procmux$2586_CMP0 $procmux$2587_ANY $procmux$2588_CMP0 $procmux$2589_CMP0 $procmux$2590_ANY $procmux$2064 $procmux$2065_CMP0 $procmux$2062 $procmux$2063_CMP0 $procmux$2060 $procmux$2061_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_.slice<1>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x5u}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2587__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2590__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2579 $procmux$2580_CMP0 $procmux$2572 $procmux$2573_CMP0 $procmux$2574_CMP0 $procmux$2575_ANY $procmux$2576_CMP0 $procmux$2577_CMP0 $procmux$2578_ANY $procmux$2556 $procmux$2557_CMP0 $procmux$2554 $procmux$2555_ANY $procmux$2552
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_.slice<2>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2575__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2555__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_eq_24_i8008__core_2e_v_3a_347_24_61__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2578__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1322 $procmux$1323_CMP0 $procmux$1315 $procmux$1316_CMP0 $procmux$1317_CMP0 $procmux$1318_ANY $procmux$1319_CMP0 $procmux$1320_CMP0 $procmux$1321_ANY $procmux$1000 $procmux$1001_CMP0 $procmux$998 $procmux$999_ANY $procmux$996 $procmux$997_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_64_5c_ctrl__signals_5b_33_3a_32_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1318__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_999__CMP) ? (reduce_or<1>(i_procmux_24_997__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1321__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1088 $procmux$1089_CMP0 $procmux$1081 $procmux$1082_CMP0 $procmux$1083_CMP0 $procmux$1084_ANY $procmux$1085_CMP0 $procmux$1086_CMP0 $procmux$1087_ANY $procmux$948 $procmux$949_CMP0 $procmux$946 $procmux$947_CMP0 $procmux$943 $procmux$944_ANY $procmux$945_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_64_5c_ctrl__signals_5b_33_3a_32_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_944__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_945__CMP) ? value<1>{0x1u} : value<1>{0u})) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_1084__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1087__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1828 $procmux$1829_CMP0 $procmux$1821 $procmux$1822_CMP0 $procmux$1823_CMP0 $procmux$1824_ANY $procmux$1825_CMP0 $procmux$1826_CMP0 $procmux$1827_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_37_5c_ctrl__signals_5b_30_3a_29_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1824__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_50_5c_ctrl__signals_5b_30_3a_29_5d_.slice<0>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1827__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1474 $procmux$1475_CMP0 $procmux$1467 $procmux$1468_CMP0 $procmux$1469_CMP0 $procmux$1470_ANY $procmux$1471_CMP0 $procmux$1472_CMP0 $procmux$1473_ANY $procmux$1412 $procmux$1413_CMP0 $procmux$1410 $procmux$1411_CMP0 $procmux$1408 $procmux$1409_ANY $procmux$1612 $procmux$1613_CMP0 $procmux$1610 $procmux$1611_CMP0 $procmux$1608 $procmux$1609_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_37_5c_ctrl__signals_5b_30_3a_29_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_1409__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1470__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_50_5c_ctrl__signals_5b_30_3a_29_5d_.slice<1>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (reduce_or<1>(i_procmux_24_1609__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_1473__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2615 $procmux$2616_CMP0 $procmux$2608 $procmux$2609_CMP0 $procmux$2610_CMP0 $procmux$2611_ANY $procmux$2612_CMP0 $procmux$2613_CMP0 $procmux$2614_ANY $procmux$2100 $procmux$2101_CMP0 $procmux$2098 $procmux$2099_CMP0 $procmux$2096 $procmux$2097_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_3_5c_ctrl__signals_5b_14_3a_9_5d_.slice<5,3>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_2097__CMP) ? p_DUT_2e_instr.curr.slice<5,3>().val() : value<3>{0u}) : value<3>{0u}) : value<3>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_16_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>().val() : (reduce_or<1>(i_procmux_24_2611__CMP) ? value<3>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<3>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<3>{0u} : (reduce_or<1>(i_procmux_24_2614__CMP) ? value<3>{0u} : value<3>{0u})))))) : value<3>{0u});
	// cells $procmux$2603 $procmux$2604_CMP0 $procmux$2596 $procmux$2597_CMP0 $procmux$2598_CMP0 $procmux$2599_ANY $procmux$2600_CMP0 $procmux$2601_CMP0 $procmux$2602_ANY $procmux$2336 $procmux$2337_CMP0 $procmux$2334 $procmux$2335_CMP0 $procmux$2331 $procmux$2332_ANY $procmux$2333_CMP0 $flatten\DUT.\Brain.$or$i8008_core.v:409$73 $flatten\DUT.\Brain.$and$i8008_core.v:409$72 $flatten\DUT.\Brain.$not$i8008_core.v:409$71 $flatten\DUT.\Brain.$and$i8008_core.v:409$70 $flatten\DUT.\Brain.$not$i8008_core.v:409$69 $procmux$2532 $procmux$2533_CMP0 $procmux$2530 $procmux$2531_ANY $procmux$2528
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_3_5c_ctrl__signals_5b_14_3a_9_5d_.slice<0>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2332__CMP) ? or_uu<1>(and_uu<1>(not_u<1>(p_DUT_2e_Brain_2e_instr.slice<5>().val()), p_DUT_2e_Brain_2e_CF), and_uu<1>(p_DUT_2e_Brain_2e_instr.slice<5>().val(), not_u<1>(p_DUT_2e_Brain_2e_CF))) : (eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x7u}) ? value<1>{0x1u} : value<1>{0u})) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_2599__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2531__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_eq_24_i8008__core_2e_v_3a_347_24_61__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2602__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2391 $procmux$2392_CMP0 $procmux$2384 $procmux$2385_CMP0 $procmux$2386_CMP0 $procmux$2387_ANY $procmux$2388_CMP0 $procmux$2389_CMP0 $procmux$2390_ANY $procmux$2112 $procmux$2113_CMP0 $procmux$2110 $procmux$2111_CMP0 $procmux$2106 $procmux$2107_ANY $procmux$2108_CMP0 $procmux$2109_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_3_5c_ctrl__signals_5b_14_3a_9_5d_.slice<1>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_2107__CMP) ? value<1>{0x1u} : (eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x2u}) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_2109__CMP) ? value<1>{0x1u} : value<1>{0u}))) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2387__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2390__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2136 $procmux$2137_CMP0 $procmux$2129 $procmux$2130_CMP0 $procmux$2131_CMP0 $procmux$2132_ANY $procmux$2133_CMP0 $procmux$2134_CMP0 $procmux$2135_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_3_5c_ctrl__signals_5b_14_3a_9_5d_.slice<2>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_16_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>().val() : (reduce_or<1>(i_procmux_24_2132__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2135__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2787 $procmux$2788_CMP0 $procmux$2780 $procmux$2781_CMP0 $procmux$2782_CMP0 $procmux$2783_ANY $procmux$2784_CMP0 $procmux$2785_CMP0 $procmux$2786_ANY $procmux$2051 $procmux$2052_CMP0 $procmux$2049 $procmux$2050_CMP0 $procmux$2047 $procmux$2048_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<6>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x5u}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_14_5c_ctrl__signals_5b_7_3a_6_5d_.slice<0>().val() : (reduce_or<1>(i_procmux_24_2783__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2786__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2751 $procmux$2752_CMP0 $procmux$2744 $procmux$2745_CMP0 $procmux$2746_CMP0 $procmux$2747_ANY $procmux$2748_CMP0 $procmux$2749_CMP0 $procmux$2750_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<3>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2747__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_2750__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2703 $procmux$2704_CMP0 $procmux$2696 $procmux$2697_CMP0 $procmux$2698_CMP0 $procmux$2699_ANY $procmux$2700_CMP0 $procmux$2701_CMP0 $procmux$2702_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<1,0>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<2>{0u} : (reduce_or<1>(i_procmux_24_2699__CMP) ? value<2>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<2>{0u} : (reduce_or<1>(i_procmux_24_2702__CMP) ? value<2>{0u} : value<2>{0u})))))) : value<2>{0u});
	// cells $procmux$2691 $procmux$2692_CMP0 $procmux$2684 $procmux$2685_CMP0 $procmux$2686_CMP0 $procmux$2687_ANY $procmux$2688_CMP0 $procmux$2689_CMP0 $procmux$2690_ANY $procmux$2088 $procmux$2089_CMP0 $procmux$2086 $procmux$2087_CMP0 $procmux$2084 $procmux$2085_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<2>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x5u}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2687__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2690__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2679 $procmux$2680_CMP0 $procmux$2672 $procmux$2673_CMP0 $procmux$2674_CMP0 $procmux$2675_ANY $procmux$2676_CMP0 $procmux$2677_CMP0 $procmux$2678_ANY $procmux$2038 $procmux$2039_CMP0 $procmux$2036 $procmux$2037_CMP0 $procmux$2034 $procmux$2035_CMP0 $procmux$2367 $procmux$2368_CMP0 $procmux$2365 $procmux$2366_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<4>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x5u}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_2675__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2678__CMP) ? value<1>{0x1u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2627 $procmux$2628_CMP0 $procmux$2620 $procmux$2621_CMP0 $procmux$2622_CMP0 $procmux$2623_ANY $procmux$2624_CMP0 $procmux$2625_CMP0 $procmux$2626_ANY $procmux$2544 $procmux$2545_CMP0 $procmux$2542 $procmux$2543_ANY $procmux$2540
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<7>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_14_5c_ctrl__signals_5b_7_3a_6_5d_.slice<1>().val() : (reduce_or<1>(i_procmux_24_2623__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2543__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_eq_24_i8008__core_2e_v_3a_347_24_61__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2626__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2379 $procmux$2380_CMP0 $procmux$2372 $procmux$2373_CMP0 $procmux$2374_CMP0 $procmux$2375_ANY $procmux$2376_CMP0 $procmux$2377_CMP0 $procmux$2378_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<5>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2375__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_2378__CMP) ? value<1>{0x1u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1752 $procmux$1753_CMP0 $procmux$1745 $procmux$1746_CMP0 $procmux$1747_CMP0 $procmux$1748_ANY $procmux$1749_CMP0 $procmux$1750_CMP0 $procmux$1751_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_32_5c_ctrl__signals_5b_5_3a_3_5d_.slice<2,1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<2>{0u} : (reduce_or<1>(i_procmux_24_1748__CMP) ? value<2>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_46_5c_ctrl__signals_5b_5_3a_4_5d_ : (reduce_or<1>(i_procmux_24_1751__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_41_5c_ctrl__signals_5b_5_3a_4_5d_ : value<2>{0u})))))) : value<2>{0u});
	// cells $procmux$1648 $procmux$1649_CMP0 $procmux$1641 $procmux$1642_CMP0 $procmux$1643_CMP0 $procmux$1644_ANY $procmux$1645_CMP0 $procmux$1646_CMP0 $procmux$1647_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_32_5c_ctrl__signals_5b_5_3a_3_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1644__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_1647__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1332 $procmux$1333_CMP0 $procmux$1325 $procmux$1326_CMP0 $procmux$1327_CMP0 $procmux$1328_ANY $procmux$1329_CMP0 $procmux$1330_CMP0 $procmux$1331_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_60_5c_ctrl__signals_5b_7_3a_3_5d_.slice<2>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1328__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_71_5c_ctrl__signals_5b_5_3a_4_5d_.slice<1>().val() : (reduce_or<1>(i_procmux_24_1331__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_67_5c_ctrl__signals_5b_5_3a_4_5d_.slice<1>().val() : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1282 $procmux$1283_CMP0 $procmux$1275 $procmux$1276_CMP0 $procmux$1277_CMP0 $procmux$1278_ANY $procmux$1279_CMP0 $procmux$1280_CMP0 $procmux$1281_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_60_5c_ctrl__signals_5b_7_3a_3_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1278__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_1281__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1098 $procmux$1099_CMP0 $procmux$1091 $procmux$1092_CMP0 $procmux$1093_CMP0 $procmux$1094_ANY $procmux$1095_CMP0 $procmux$1096_CMP0 $procmux$1097_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_60_5c_ctrl__signals_5b_7_3a_3_5d_.slice<4>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_78_5c_ctrl__signals_5b_7_3a_6_5d_.slice<1>().val() : (reduce_or<1>(i_procmux_24_1094__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1097__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$968 $procmux$969_CMP0 $procmux$961 $procmux$962_CMP0 $procmux$963_CMP0 $procmux$964_ANY $procmux$965_CMP0 $procmux$966_CMP0 $procmux$967_ANY $procmux$1979 $procmux$1980_CMP0 $procmux$1977 $procmux$1978_CMP0 $procmux$1975 $procmux$1976_ANY $procmux$928 $procmux$929_CMP0 $procmux$926 $procmux$927_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_60_5c_ctrl__signals_5b_7_3a_3_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_1976__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_964__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_71_5c_ctrl__signals_5b_5_3a_4_5d_.slice<0>().val() : (reduce_or<1>(i_procmux_24_967__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_67_5c_ctrl__signals_5b_5_3a_4_5d_.slice<0>().val() : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$909 $procmux$910_CMP0 $procmux$902 $procmux$903_CMP0 $procmux$904_CMP0 $procmux$905_ANY $procmux$906_CMP0 $procmux$907_CMP0 $procmux$908_ANY $procmux$881 $procmux$882_CMP0 $procmux$879 $procmux$880_CMP0 $procmux$877 $procmux$878_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_60_5c_ctrl__signals_5b_7_3a_3_5d_.slice<3>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_878__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_78_5c_ctrl__signals_5b_7_3a_6_5d_.slice<0>().val() : (reduce_or<1>(i_procmux_24_905__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_908__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2775 $procmux$2776_CMP0 $procmux$2768 $procmux$2769_CMP0 $procmux$2770_CMP0 $procmux$2771_ANY $procmux$2772_CMP0 $procmux$2773_CMP0 $procmux$2774_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_4_5c_ctrl__signals_5b_24_3a_16_5d_ = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_28_5c_ctrl__signals_5b_24_3a_16_5d_ : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<9>{0u} : (reduce_or<1>(i_procmux_24_2771__CMP) ? value<9>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<9>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<9>{0u} : (reduce_or<1>(i_procmux_24_2774__CMP) ? value<9>{0u} : value<9>{0u})))))) : value<9>{0u});
	// cells $procmux$1784 $procmux$1785_CMP0 $procmux$1777 $procmux$1778_CMP0 $procmux$1779_CMP0 $procmux$1780_ANY $procmux$1781_CMP0 $procmux$1782_CMP0 $procmux$1783_ANY $procmux$1402 $procmux$1403_CMP0 $procmux$1400 $procmux$1401_CMP0 $procmux$1398 $procmux$1399_ANY $flatten\DUT.\Brain.$ternary$i8008_core.v:551$87 $flatten\DUT.\Brain.$logic_and$i8008_core.v:551$86 $flatten\DUT.\Brain.$eq$i8008_core.v:551$85
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_33_5c_ctrl__signals_5b_14_3a_10_5d_.slice<4,2>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_1399__CMP) ? (logic_and<1>(eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,4>().val(), value<4>{0x4u}), p_DUT_2e_Brain_2e_instr.slice<0>().val()) ? value<3>{0u} : p_DUT_2e_Brain_2e_instr.slice<5,3>().val()) : value<3>{0u}) : value<3>{0u}) : value<3>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<3>{0u} : (reduce_or<1>(i_procmux_24_1780__CMP) ? value<3>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<3>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_47_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>().val() : (reduce_or<1>(i_procmux_24_1783__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_42_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>().val() : value<3>{0u})))))) : value<3>{0u});
	// cells $procmux$1637 $procmux$1638_CMP0 $procmux$1630 $procmux$1631_CMP0 $procmux$1632_CMP0 $procmux$1633_ANY $procmux$1634_CMP0 $procmux$1635_CMP0 $procmux$1636_ANY $procmux$1422 $procmux$1423_CMP0 $procmux$1420 $procmux$1421_CMP0 $procmux$1417 $procmux$1418_ANY $procmux$1419_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_33_5c_ctrl__signals_5b_14_3a_10_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_1418__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_1419__CMP) ? value<1>{0x1u} : value<1>{0u})) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1633__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1636__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1453 $procmux$1454_CMP0 $procmux$1446 $procmux$1447_CMP0 $procmux$1448_CMP0 $procmux$1449_ANY $procmux$1450_CMP0 $procmux$1451_CMP0 $procmux$1452_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_33_5c_ctrl__signals_5b_14_3a_10_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1449__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_47_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>().val() : (reduce_or<1>(i_procmux_24_1452__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_42_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>().val() : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1955 $procmux$1956_CMP0 $procmux$1957_CMP0 $procmux$1958_CMP0 $procmux$1292 $procmux$1293_CMP0 $procmux$1285 $procmux$1286_CMP0 $procmux$1287_CMP0 $procmux$1288_ANY $procmux$1289_CMP0 $procmux$1290_CMP0 $procmux$1291_ANY $procmux$1136 $procmux$1137_CMP0 $procmux$1134 $procmux$1135_CMP0 $procmux$1131 $procmux$1132_ANY $procmux$1133_CMP0 $procmux$1225 $procmux$1226_CMP0 $procmux$1223 $procmux$1224_ANY $procmux$1220 $procmux$1221_ANY $procmux$1222_CMP0 $procmux$1795 $procmux$1796_CMP0 $procmux$1788 $procmux$1789_CMP0 $procmux$1790_CMP0 $procmux$1791_ANY $procmux$1792_CMP0 $procmux$1793_CMP0 $procmux$1794_ANY $procmux$1584 $procmux$1585_CMP0 $procmux$1582 $procmux$1583_CMP0 $procmux$1578 $procmux$1579_ANY $procmux$1580_ANY $procmux$1581_ANY $flatten\DUT.\Brain.$ternary$i8008_core.v:504$81 $flatten\DUT.\Brain.$eq$i8008_core.v:504$80 $procmux$1696 $procmux$1697_CMP0 $procmux$1694 $procmux$1695_ANY $procmux$1690 $procmux$1691_ANY $procmux$1692_ANY $procmux$1693_ANY $flatten\DUT.\Brain.$ternary$i8008_core.v:481$78 $flatten\DUT.\Brain.$eq$i8008_core.v:481$77 $procmux$2848 $procmux$2849_CMP0 $procmux$1904 $procmux$1905_CMP0 $procmux$1906_CMP0 $procmux$1907_CMP0 $procmux$2830 $procmux$2831_CMP0 $procmux$2832_CMP0 $procmux$1382 $procmux$1383_CMP0 $procmux$1384_CMP0 $procmux$1352 $procmux$1353_CMP0 $procmux$1345 $procmux$1346_CMP0 $procmux$1347_CMP0 $procmux$1348_ANY $procmux$1349_CMP0 $procmux$1350_CMP0 $procmux$1351_ANY $procmux$938 $procmux$939_CMP0 $procmux$936 $procmux$937_CMP0 $procmux$934 $procmux$935_ANY $flatten\DUT.\Brain.$or$i8008_core.v:647$118 $flatten\DUT.\Brain.$and$i8008_core.v:647$117 $flatten\DUT.\Brain.$logic_and$i8008_core.v:647$116 $flatten\DUT.\Brain.$eq$i8008_core.v:647$115 $flatten\DUT.\Brain.$eq$i8008_core.v:647$114 $flatten\DUT.\Brain.$or$i8008_core.v:647$113 $flatten\DUT.\Brain.$and$i8008_core.v:647$112 $flatten\DUT.\Brain.$not$i8008_core.v:647$111 $flatten\DUT.\Brain.$logic_and$i8008_core.v:647$110 $flatten\DUT.\Brain.$eq$i8008_core.v:647$109 $flatten\DUT.\Brain.$eq$i8008_core.v:647$108 $flatten\DUT.\Brain.$logic_and$i8008_core.v:647$107 $flatten\DUT.\Brain.$eq$i8008_core.v:647$106 $flatten\DUT.\Brain.$eq$i8008_core.v:647$105 $procmux$1947 $procmux$1948_CMP0 $procmux$1949_CMP0 $procmux$1941 $procmux$1942_CMP0 $procmux$1943_CMP0 $procmux$1944_CMP0 $procmux$1272 $procmux$1273_CMP0 $procmux$1265 $procmux$1266_CMP0 $procmux$1267_CMP0 $procmux$1268_ANY $procmux$1269_CMP0 $procmux$1270_CMP0 $procmux$1271_ANY $procmux$1934 $procmux$1935_CMP0 $procmux$2826 $procmux$2827_CMP0 $procmux$2828_CMP0 $procmux$1876 $procmux$1877_CMP0 $procmux$1869 $procmux$1870_CMP0 $procmux$1871_CMP0 $procmux$1872_ANY $procmux$1873_CMP0 $procmux$1874_CMP0 $procmux$1875_ANY $procmux$1431 $procmux$1432_CMP0 $procmux$1429 $procmux$1430_CMP0 $procmux$1929 $procmux$1930_CMP0 $procmux$2821 $procmux$2822_CMP0 $procmux$2823_CMP0 $procmux$1865 $procmux$1866_CMP0 $procmux$1858 $procmux$1859_CMP0 $procmux$1860_CMP0 $procmux$1861_ANY $procmux$1862_CMP0 $procmux$1863_CMP0 $procmux$1864_ANY $procmux$1920 $procmux$1921_CMP0 $procmux$2763 $procmux$2764_CMP0 $procmux$2756 $procmux$2757_CMP0 $procmux$2758_CMP0 $procmux$2759_ANY $procmux$2760_CMP0 $procmux$2761_CMP0 $procmux$2762_ANY $procmux$2075 $procmux$2076_CMP0 $procmux$2073 $procmux$2074_CMP0 $procmux$2070 $procmux$2071_ANY $procmux$2072_CMP0 $procmux$1915 $procmux$1916_CMP0 $procmux$1854 $procmux$1855_CMP0 $procmux$1847 $procmux$1848_CMP0 $procmux$1849_CMP0 $procmux$1850_ANY $procmux$1851_CMP0 $procmux$1852_CMP0 $procmux$1853_ANY $procmux$1773 $procmux$1774_CMP0 $procmux$1771 $procmux$1772_CMP0 $procmux$1769 $procmux$1910 $procmux$1911_CMP0 $procmux$1912_CMP0 $procmux$1373 $procmux$1374_CMP0 $procmux$1375_CMP0 $procmux$1376_CMP0 $procmux$1342 $procmux$1343_CMP0 $procmux$1335 $procmux$1336_CMP0 $procmux$1337_CMP0 $procmux$1338_ANY $procmux$1339_CMP0 $procmux$1340_CMP0 $procmux$1341_ANY $procmux$889 $procmux$890_CMP0 $procmux$887 $procmux$888_CMP0 $procmux$885 $procmux$886_ANY $procmux$979 $procmux$980_CMP0 $procmux$977 $procmux$978_ANY $procmux$975 $procmux$976_CMP0 $procmux$2817 $procmux$2818_CMP0 $procmux$1369 $procmux$1370_CMP0 $procmux$1371_CMP0 $procmux$1960 $procmux$1961_CMP0 $procmux$1962_CMP0 $procmux$1963_CMP0 $procmux$1763 $procmux$1764_CMP0 $procmux$1756 $procmux$1757_CMP0 $procmux$1758_CMP0 $procmux$1759_ANY $procmux$1760_CMP0 $procmux$1761_CMP0 $procmux$1762_ANY $procmux$1726 $procmux$1727_CMP0 $procmux$1724 $procmux$1725_ANY $procmux$1722 $procmux$1723_ANY $procmux$871 $procmux$872_CMP0 $procmux$873_CMP0 $procmux$874_CMP0
	p_DUT_2e_Brain_2e_ctrl__signals = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_65_5c_ctrl__signals_5b_39_3a_38_5d_ : (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_39_5c_ctrl__signals_5b_39_3a_38_5d_ : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_7_5c_ctrl__signals_5b_39_3a_38_5d_ : value<2>{0u}))).concat(value<4>{0u}).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_64_5c_ctrl__signals_5b_33_3a_32_5d_.slice<1>().val() : (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1759__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1762__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1725__CMP) ? (reduce_or<1>(i_procmux_24_1723__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u})))))) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_.slice<4>().val() : value<1>{0u})))).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_64_5c_ctrl__signals_5b_33_3a_32_5d_.slice<0>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_.slice<3>().val() : value<1>{0u}))).concat((logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_.slice<2>().val() : value<1>{0u})).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_886__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1338__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_978__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1341__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_37_5c_ctrl__signals_5b_30_3a_29_5d_.slice<1>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_.slice<1>().val() : value<1>{0u})))).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_37_5c_ctrl__signals_5b_30_3a_29_5d_.slice<0>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_.slice<0>().val() : value<1>{0u}))).concat(value<1>{0u}).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_logic__and_24_i8008__core_2e_v_3a_540_24_84__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_1850__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1853__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u}) : value<1>{0u})).concat((logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_2071__CMP) ? value<1>{0x1u} : (eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x2u}) ? value<1>{0x1u} : value<1>{0u})) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2759__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2762__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u}) : value<1>{0u})).concat(value<1>{0u}).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_57_5c_ctrl__signals_5b_24_3a_21_5d_ : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<4>{0u} : (reduce_or<1>(i_procmux_24_1861__CMP) ? value<4>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<4>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<4>{0u} : (reduce_or<1>(i_procmux_24_1864__CMP) ? value<4>{0u} : value<4>{0u})))))) : value<4>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_4_5c_ctrl__signals_5b_24_3a_16_5d_.slice<8,5>().val() : value<4>{0u}))).concat((logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_4_5c_ctrl__signals_5b_24_3a_16_5d_.slice<4,2>().val() : value<3>{0u})).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1872__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1875__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_4_5c_ctrl__signals_5b_24_3a_16_5d_.slice<1>().val() : value<1>{0u}))).concat((logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_4_5c_ctrl__signals_5b_24_3a_16_5d_.slice<0>().val() : value<1>{0u})).concat(value<1>{0u}).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<4>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<4>{0u} : (reduce_or<1>(i_procmux_24_1268__CMP) ? value<4>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<4>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_72_5c_ctrl__signals_5b_14_3a_11_5d_ : (reduce_or<1>(i_procmux_24_1271__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_68_5c_ctrl__signals_5b_14_3a_11_5d_ : value<4>{0u})))))) : value<4>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_33_5c_ctrl__signals_5b_14_3a_10_5d_.slice<4,1>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_3_5c_ctrl__signals_5b_14_3a_9_5d_.slice<5,2>().val() : value<4>{0u})))).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_33_5c_ctrl__signals_5b_14_3a_10_5d_.slice<0>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_3_5c_ctrl__signals_5b_14_3a_9_5d_.slice<1>().val() : value<1>{0u}))).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_935__CMP) ? or_uu<1>(or_uu<1>(logic_and<1>(eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().val(), value<2>{0x1u}), eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<2,0>().val(), value<3>{0x6u})), and_uu<1>(logic_and<1>(eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().val(), value<3>{0x3u}), eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<2,0>().val(), value<3>{0x2u})), not_u<1>(p_DUT_2e_Brain_2e_CF))), and_uu<1>(logic_and<1>(eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().val(), value<3>{0x2u}), eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<2,0>().val(), value<3>{0x2u})), p_DUT_2e_Brain_2e_CF)) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_1348__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1351__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_3_5c_ctrl__signals_5b_14_3a_9_5d_.slice<0>().val() : value<1>{0u}))).concat(value<1>{0u}).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_60_5c_ctrl__signals_5b_7_3a_3_5d_.slice<4,3>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<7,6>().val() : value<2>{0u}))).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_60_5c_ctrl__signals_5b_7_3a_3_5d_.slice<2,0>().val() : (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_32_5c_ctrl__signals_5b_5_3a_3_5d_ : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<5,3>().val() : value<3>{0u})))).concat((logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<2>().val() : value<1>{0u})).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<2>{0u} : (reduce_or<1>(i_procmux_24_1288__CMP) ? value<2>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (reduce_or<1>(i_procmux_24_1132__CMP) ? value<2>{0x1u} : (eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu}) ? value<2>{0x3u} : value<2>{0u})) : value<2>{0u}) : value<2>{0u}) : (reduce_or<1>(i_procmux_24_1291__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1224__CMP) ? (reduce_or<1>(i_procmux_24_1221__CMP) ? value<2>{0x1u} : (eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu}) ? value<2>{0x3u} : value<2>{0u})) : value<2>{0u}) : value<2>{0u}) : value<2>{0u})))))) : value<2>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<2>{0u} : (reduce_or<1>(i_procmux_24_1791__CMP) ? value<2>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (reduce_or<1>(i_procmux_24_1579__CMP) ? value<2>{0x2u} : (reduce_or<1>(i_procmux_24_1580__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,3>().val(), value<5>{0x1fu}) ? value<2>{0x3u} : value<2>{0x1u}) : (reduce_or<1>(i_procmux_24_1581__CMP) ? value<2>{0x1u} : value<2>{0u}))) : value<2>{0u}) : value<2>{0u}) : (reduce_or<1>(i_procmux_24_1794__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1695__CMP) ? (reduce_or<1>(i_procmux_24_1691__CMP) ? value<2>{0x2u} : (reduce_or<1>(i_procmux_24_1692__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,3>().val(), value<5>{0x1fu}) ? value<2>{0x3u} : value<2>{0x1u}) : (reduce_or<1>(i_procmux_24_1693__CMP) ? value<2>{0x1u} : value<2>{0u}))) : value<2>{0u}) : value<2>{0u}) : value<2>{0u})))))) : value<2>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<1,0>().val() : value<2>{0u})))).val();
	// connection
	p_DUT_2e_ctrl__signals = p_DUT_2e_Brain_2e_ctrl__signals;
	// cells $procmux$454 $procmux$451 $procmux$448 $procmux$445 $procmux$442 $procmux$439 $procmux$436 $procmux$433 $procmux$430 $procmux$427 $procmux$424 $procmux$421 $procmux$418 $procmux$415 $procmux$412 $procmux$409 $procmux$406 $procmux$403
	i_flatten_5c_DUT_2e__24_5_5c_bus_5b_7_3a_0_5d_ = (p_DUT_2e_ctrl__signals.slice<5>().val() ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<11>().val() ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<24>().val() ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<27>().val() ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<33>().val() ? p_DUT_2e_regA_2e_Q.curr : (p_DUT_2e_ctrl__signals.slice<5>().val() ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<11>().val() ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<24>().val() ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<27>().val() ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<33>().val() ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<30>().val() ? p_DUT_2e_regB_2e_Q.curr : (p_DUT_2e_ctrl__signals.slice<5>().val() ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<11>().val() ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<24>().val() ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<27>().val() ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<33>().val() ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<30>().val() ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<39>().val() ? p_sw.slice<7,0>().val() : value<8>{0u}))))))))))))))))));
	// connection
	p_DUT_2e_Brain_2e_Intr = p_DUT_2e_Intr.curr;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:360.13-360.27|i8008_core.v:205.14-214.3
	// cell $flatten\DUT.\Brain.$ne$i8008_core.v:360$62
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_360_24_62__Y = ne_uu<1>(p_DUT_2e_Brain_2e_instr.slice<5,3>().val(), value<3>{0x7u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2424_CMP0
	i_procmux_24_2424__CMP.slice<0>() = logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<7,1>().val());
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2424_CMP1
	i_procmux_24_2424__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0xffu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2424_CMP2
	i_procmux_24_2424__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2444_CMP0
	i_procmux_24_2444__CMP.slice<0>() = logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<7,1>().val());
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2444_CMP1
	i_procmux_24_2444__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0xffu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2444_CMP2
	i_procmux_24_2444__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2426_CMP0
	i_procmux_24_2426__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2426_CMP1
	i_procmux_24_2426__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2446_CMP0
	i_procmux_24_2446__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2446_CMP1
	i_procmux_24_2446__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// cells $procmux$478 $procmux$475 $procmux$472 $procmux$469
	i_flatten_5c_DUT_2e__24_4_5c_bus_5b_7_3a_0_5d_.slice<3,0>() = (p_DUT_2e_ctrl__signals.slice<5>().val() ? value<4>{0u} : (p_DUT_2e_ctrl__signals.slice<11>().val() ? value<4>{0u} : (p_DUT_2e_ctrl__signals.slice<24>().val() ? value<4>{0u} : (p_DUT_2e_ctrl__signals.slice<27>().val() ? p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr : i_flatten_5c_DUT_2e__24_5_5c_bus_5b_7_3a_0_5d_.slice<3,0>().val()))));
	// cells $procmux$466 $procmux$463 $procmux$460 $procmux$457
	i_flatten_5c_DUT_2e__24_4_5c_bus_5b_7_3a_0_5d_.slice<7,4>() = (p_DUT_2e_ctrl__signals.slice<5>().val() ? value<4>{0u} : (p_DUT_2e_ctrl__signals.slice<11>().val() ? value<4>{0u} : (p_DUT_2e_ctrl__signals.slice<24>().val() ? value<4>{0u} : (p_DUT_2e_ctrl__signals.slice<27>().val() ? value<4>{0u} : i_flatten_5c_DUT_2e__24_5_5c_bus_5b_7_3a_0_5d_.slice<7,4>().val()))));
	// connection
	p_DUT_2e_sel__Stack = p_DUT_2e_SP__SEL_2e_Q.curr;
	// connection
	p_DUT_2e_Unit_2e_ALU__ctrl = p_DUT_2e_ctrl__signals.slice<24,15>().val();
	// connection
	p_DUT_2e_rf_2e_rf__ctrl = p_DUT_2e_ctrl__signals.slice<14,10>().val();
	// connection
	p_DUT_2e_Stack_2e_Stack__ctrl = p_DUT_2e_ctrl__signals.slice<6,0>().val();
	// connection
	p_DUT_2e_Stack_2e_sel = p_DUT_2e_sel__Stack;
	// cells $flatten\DUT.\Brain.$or$i8008_core.v:371$67 $flatten\DUT.\Brain.$and$i8008_core.v:371$66 $flatten\DUT.\Brain.$not$i8008_core.v:371$65 $flatten\DUT.\Brain.$and$i8008_core.v:371$64 $flatten\DUT.\Brain.$not$i8008_core.v:371$63
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_or_24_i8008__core_2e_v_3a_371_24_67__Y = or_uu<1>(and_uu<1>(p_DUT_2e_Brain_2e_instr.slice<5>().val(), not_u<1>(p_DUT_2e_Brain_2e_CF)), and_uu<1>(not_u<1>(p_DUT_2e_Brain_2e_instr.slice<5>().val()), p_DUT_2e_Brain_2e_CF));
	// \full_case: 1
	// \src: i8008_core.v:250.4-269.11
	// cell $procmux$563_CMP0
	i_procmux_24_563__CMP = eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x3u});
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:719.19-719.21|i8008_core.v:176.4-182.3
	// memory \DUT.rf.rf read port 0
	auto tmp_0 = memory_index(p_DUT_2e_rf_2e_rf__ctrl.slice<4,2>().val(), 0, 7);
	CXXRTL_ASSERT(tmp_0.valid && "out of bounds read");
	if(tmp_0.valid) {
		value<8> tmp_1 = memory_p_DUT_2e_rf_2e_rf[tmp_0.index];
		i_flatten_5c_DUT_2e__5c_rf_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_719_24_393__DATA = tmp_1;
	} else {
		i_flatten_5c_DUT_2e__5c_rf_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_719_24_393__DATA = value<8> {};
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:765.21-765.23|i8008_core.v:197.4-204.3
	// memory \DUT.Stack.rf read port 0
	auto tmp_2 = memory_index(p_DUT_2e_Stack_2e_sel, 0, 8);
	CXXRTL_ASSERT(tmp_2.valid && "out of bounds read");
	if(tmp_2.valid) {
		value<14> tmp_3 = memory_p_DUT_2e_Stack_2e_rf[tmp_2.index];
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_765_24_350__DATA = tmp_3;
	} else {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_765_24_350__DATA = value<14> {};
	}
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2478_CMP0
	i_procmux_24_2478__CMP.slice<0>() = logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<7,1>().val());
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2478_CMP1
	i_procmux_24_2478__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0xffu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2478_CMP2
	i_procmux_24_2478__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2404_CMP0
	i_procmux_24_2404__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2404_CMP1
	i_procmux_24_2404__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0xbu});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1037_CMP0
	i_procmux_24_1037__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1037_CMP1
	i_procmux_24_1037__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1010_CMP0
	i_procmux_24_1010__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1010_CMP1
	i_procmux_24_1010__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2652_CMP0
	i_procmux_24_2652__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2652_CMP1
	i_procmux_24_2652__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0xbu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2461_CMP0
	i_procmux_24_2461__CMP.slice<0>() = logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<7,1>().val());
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2461_CMP1
	i_procmux_24_2461__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0xffu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2461_CMP2
	i_procmux_24_2461__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1051_CMP0
	i_procmux_24_1051__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1051_CMP1
	i_procmux_24_1051__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1023_CMP0
	i_procmux_24_1023__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1023_CMP1
	i_procmux_24_1023__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:250.4-269.11
	// cell $procmux$564_CMP0
	i_procmux_24_564__CMP = eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x2u});
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:766.19-766.21|i8008_core.v:197.4-204.3
	// memory \DUT.Stack.rf read port 1
	auto tmp_4 = memory_index(p_DUT_2e_Stack_2e_sel, 0, 8);
	CXXRTL_ASSERT(tmp_4.valid && "out of bounds read");
	if(tmp_4.valid) {
		value<14> tmp_5 = memory_p_DUT_2e_Stack_2e_rf[tmp_4.index];
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_766_24_353__DATA = tmp_5;
	} else {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_766_24_353__DATA = value<14> {};
	}
	// cells $flatten\DUT.\Stack.$logic_and$i8008_core.v:762$338 $flatten\DUT.\Stack.$not$i8008_core.v:762$337
	i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_762_24_338__Y = logic_and<1>(p_DUT_2e_Stack_2e_Stack__ctrl.slice<6>().val(), not_u<1>(p_DUT_2e_Stack_2e_Stack__ctrl.slice<4>().val()));
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2480_CMP0
	i_procmux_24_2480__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2480_CMP1
	i_procmux_24_2480__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2406_CMP0
	i_procmux_24_2406__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2406_CMP1
	i_procmux_24_2406__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1039_CMP0
	i_procmux_24_1039__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1039_CMP1
	i_procmux_24_1039__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1012_CMP0
	i_procmux_24_1012__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1012_CMP1
	i_procmux_24_1012__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2654_CMP0
	i_procmux_24_2654__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2654_CMP1
	i_procmux_24_2654__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2463_CMP0
	i_procmux_24_2463__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2463_CMP1
	i_procmux_24_2463__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1053_CMP0
	i_procmux_24_1053__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1053_CMP1
	i_procmux_24_1053__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1025_CMP0
	i_procmux_24_1025__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1025_CMP1
	i_procmux_24_1025__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// connection
	p_DUT_2e_Unit_2e_a = p_DUT_2e_regA_2e_Q.curr;
	// connection
	p_DUT_2e_Unit_2e_b = p_DUT_2e_regB_2e_Q.curr;
	// connection
	p_DUT_2e_Stack_2e_rs = i_flatten_5c_DUT_2e__5c_Stack_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_766_24_353__DATA;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:760.12-760.42|i8008_core.v:197.4-204.3
	// cell $flatten\DUT.\Stack.$logic_and$i8008_core.v:760$325
	i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y = logic_and<1>(p_DUT_2e_Stack_2e_Stack__ctrl.slice<6>().val(), p_DUT_2e_Stack_2e_Stack__ctrl.slice<4>().val());
	// \full_case: 1
	// \src: i8008_core.v:250.4-269.11
	// cell $procmux$565_CMP0
	i_procmux_24_565__CMP = eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x1u});
	// connection
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_and_24_i8008__core_2e_v_3a_274_24_31__Y.slice<0>() = p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr.slice<0>().val();
	// connection
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_and_24_i8008__core_2e_v_3a_274_24_31__Y.slice<8,1>() = value<8>{0u};
	// connection
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_and_24_i8008__core_2e_v_3a_276_24_35__Y.slice<0>() = p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr.slice<0>().val();
	// connection
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_and_24_i8008__core_2e_v_3a_276_24_35__Y.slice<8,1>() = value<8>{0u};
	// connection
	p_DUT_2e_Stack_2e_upper.slice<5,0>() = p_DUT_2e_Stack_2e_rs.slice<13,8>().val();
	// connection
	p_DUT_2e_Stack_2e_upper.slice<7,6>() = p_DUT_2e_Stack_2e_Stack__ctrl.slice<1,0>().val();
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:280.32-280.37|i8008_core.v:164.6-172.3
	// cell $flatten\DUT.\Unit.$sub$i8008_core.v:280$40
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_280_24_40__Y = sub_uu<9>(p_DUT_2e_Unit_2e_a, p_DUT_2e_Unit_2e_b);
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:251.31-251.36|i8008_core.v:164.6-172.3
	// cell $flatten\DUT.\Unit.$add$i8008_core.v:251$27
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_251_24_27__Y = add_uu<32>(p_DUT_2e_Unit_2e_a, value<32>{0x1u});
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:252.31-252.36|i8008_core.v:164.6-172.3
	// cell $flatten\DUT.\Unit.$sub$i8008_core.v:252$28
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_252_24_28__Y = sub_uu<32>(p_DUT_2e_Unit_2e_a, value<32>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:250.4-269.11
	// cell $procmux$566_CMP0
	i_procmux_24_566__CMP = logic_not<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val());
	// \full_case: 1
	// \src: i8008_core.v:250.4-269.11
	// cell $procmux$567_CMP0
	i_procmux_24_567__CMP = eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x5u});
	// \full_case: 1
	// \src: i8008_core.v:250.4-269.11
	// cell $procmux$568_CMP0
	i_procmux_24_568__CMP = eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x4u});
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:273.31-273.36|i8008_core.v:164.6-172.3
	// cell $flatten\DUT.\Unit.$add$i8008_core.v:273$29
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_273_24_29__Y = add_uu<9>(p_DUT_2e_Unit_2e_a, p_DUT_2e_Unit_2e_b);
	// cells $flatten\DUT.\Unit.$add$i8008_core.v:274$32 $flatten\DUT.\Unit.$add$i8008_core.v:274$30
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_274_24_32__Y = add_uu<9>(add_uu<9>(p_DUT_2e_Unit_2e_a, p_DUT_2e_Unit_2e_b), i_flatten_5c_DUT_2e__5c_Unit_2e__24_and_24_i8008__core_2e_v_3a_274_24_31__Y);
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:275.31-275.36|i8008_core.v:164.6-172.3
	// cell $flatten\DUT.\Unit.$sub$i8008_core.v:275$33
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_275_24_33__Y = sub_uu<9>(p_DUT_2e_Unit_2e_a, p_DUT_2e_Unit_2e_b);
	// cells $flatten\DUT.\Unit.$sub$i8008_core.v:276$36 $flatten\DUT.\Unit.$sub$i8008_core.v:276$34
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_276_24_36__Y = sub_uu<9>(sub_uu<9>(p_DUT_2e_Unit_2e_a, p_DUT_2e_Unit_2e_b), i_flatten_5c_DUT_2e__5c_Unit_2e__24_and_24_i8008__core_2e_v_3a_276_24_35__Y);
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:419.11-419.33|i8008_core.v:205.14-214.3
	// cell $flatten\DUT.\Brain.$eq$i8008_core.v:419$74
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_eq_24_i8008__core_2e_v_3a_419_24_74__Y = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP0
	i_procmux_24_2504__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP1
	i_procmux_24_2504__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP2
	i_procmux_24_2504__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,4>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP3
	i_procmux_24_2504__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP4
	i_procmux_24_2504__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP5
	i_procmux_24_2504__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP6
	i_procmux_24_2504__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP7
	i_procmux_24_2504__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP8
	i_procmux_24_2504__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP9
	i_procmux_24_2504__CMP.slice<9>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP10
	i_procmux_24_2504__CMP.slice<10>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2505_CMP0
	i_procmux_24_2505__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2505_CMP1
	i_procmux_24_2505__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0xbu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2506_CMP0
	i_procmux_24_2506__CMP.slice<0>() = logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<7,1>().val());
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2506_CMP1
	i_procmux_24_2506__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0xffu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2506_CMP2
	i_procmux_24_2506__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1525_CMP0
	i_procmux_24_1525__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1525_CMP1
	i_procmux_24_1525__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1525_CMP2
	i_procmux_24_1525__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1525_CMP3
	i_procmux_24_1525__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1525_CMP4
	i_procmux_24_1525__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1525_CMP5
	i_procmux_24_1525__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1525_CMP6
	i_procmux_24_1525__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1526_CMP0
	i_procmux_24_1526__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1526_CMP1
	i_procmux_24_1526__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1061_CMP0
	i_procmux_24_1061__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1061_CMP1
	i_procmux_24_1061__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1062_CMP0
	i_procmux_24_1062__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1062_CMP1
	i_procmux_24_1062__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP0
	i_procmux_24_2490__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP1
	i_procmux_24_2490__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP2
	i_procmux_24_2490__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,4>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP3
	i_procmux_24_2490__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP4
	i_procmux_24_2490__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP5
	i_procmux_24_2490__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP6
	i_procmux_24_2490__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP7
	i_procmux_24_2490__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP8
	i_procmux_24_2490__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP9
	i_procmux_24_2490__CMP.slice<9>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP10
	i_procmux_24_2490__CMP.slice<10>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2491_CMP0
	i_procmux_24_2491__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2491_CMP1
	i_procmux_24_2491__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0xbu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2492_CMP0
	i_procmux_24_2492__CMP.slice<0>() = logic_not<1>(p_DUT_2e_Brain_2e_instr.slice<7,1>().val());
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2492_CMP1
	i_procmux_24_2492__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0xffu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2492_CMP2
	i_procmux_24_2492__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1513_CMP0
	i_procmux_24_1513__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1513_CMP1
	i_procmux_24_1513__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1513_CMP2
	i_procmux_24_1513__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1513_CMP3
	i_procmux_24_1513__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1513_CMP4
	i_procmux_24_1513__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1513_CMP5
	i_procmux_24_1513__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1513_CMP6
	i_procmux_24_1513__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1514_CMP0
	i_procmux_24_1514__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,6>().concat(p_DUT_2e_Brain_2e_instr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1514_CMP1
	i_procmux_24_1514__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1073_CMP0
	i_procmux_24_1073__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1073_CMP1
	i_procmux_24_1073__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1074_CMP0
	i_procmux_24_1074__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1074_CMP1
	i_procmux_24_1074__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_instr.slice<7,5>().concat(p_DUT_2e_Brain_2e_instr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2508_CMP0
	i_procmux_24_2508__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2508_CMP1
	i_procmux_24_2508__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1528_CMP0
	i_procmux_24_1528__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1528_CMP1
	i_procmux_24_1528__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1065_CMP0
	i_procmux_24_1065__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1065_CMP1
	i_procmux_24_1065__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2494_CMP0
	i_procmux_24_2494__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2494_CMP1
	i_procmux_24_2494__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1516_CMP0
	i_procmux_24_1516__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1516_CMP1
	i_procmux_24_1516__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1077_CMP0
	i_procmux_24_1077__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1077_CMP1
	i_procmux_24_1077__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// cells $procmux$496 $flatten\DUT.\Stack.$ternary$i8008_core.v:745$287 $procmux$493 $procmux$490 $procmux$487 $procmux$484 $procmux$481
	p_DUT_2e_bus = (p_DUT_2e_ctrl__signals.slice<5>().val() ? (p_DUT_2e_Stack_2e_Stack__ctrl.slice<4>().val() ? p_DUT_2e_Stack_2e_rs.slice<7,0>().val() : p_DUT_2e_Stack_2e_upper) : (p_DUT_2e_ctrl__signals.slice<5>().val() ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<11>().val() ? i_flatten_5c_DUT_2e__5c_rf_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_719_24_393__DATA : (p_DUT_2e_ctrl__signals.slice<5>().val() ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<11>().val() ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<24>().val() ? p_DUT_2e_Unit_2e_d.curr : i_flatten_5c_DUT_2e__24_4_5c_bus_5b_7_3a_0_5d_))))));
	// connection
	p_DUT_2e_Ready = p_sw.slice<9>().val();
	// cells $procmux$575 $procmux$562 $procmux$525 $procmux$526_CMP0 $procmux$527_CMP0 $procmux$528_CMP0 $procmux$529_CMP0 $procmux$530_CMP0 $procmux$531_CMP0 $procmux$532_CMP0 $procmux$533_CMP0 $flatten\DUT.\Unit.$xor$i8008_core.v:279$39 $flatten\DUT.\Unit.$or$i8008_core.v:278$38 $flatten\DUT.\Unit.$and$i8008_core.v:277$37
	i_procmux_24_575__Y = (p_DUT_2e_Unit_2e_ALU__ctrl.slice<2>().val() ? (i_procmux_24_563__CMP ? p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr.slice<3>().concat(p_DUT_2e_regA_2e_Q.curr.slice<7,1>()).val() : (i_procmux_24_564__CMP ? p_DUT_2e_regA_2e_Q.curr.slice<6,0>().concat(p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr.slice<3>()).val() : (i_procmux_24_565__CMP ? p_DUT_2e_regA_2e_Q.curr.slice<0>().concat(p_DUT_2e_regA_2e_Q.curr.slice<7,1>()).val() : (i_procmux_24_566__CMP ? p_DUT_2e_regA_2e_Q.curr.slice<6,0>().concat(p_DUT_2e_regA_2e_Q.curr.slice<7>()).val() : (i_procmux_24_567__CMP ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_252_24_28__Y.slice<7,0>().val() : (i_procmux_24_568__CMP ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_251_24_27__Y.slice<7,0>().val() : p_DUT_2e_Unit_2e_d.curr)))))) : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x7u}) ? value<8>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x5u}) ? xor_uu<8>(p_DUT_2e_Unit_2e_a, p_DUT_2e_Unit_2e_b) : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x6u}) ? or_uu<8>(p_DUT_2e_Unit_2e_a, p_DUT_2e_Unit_2e_b) : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x4u}) ? and_uu<8>(p_DUT_2e_Unit_2e_a, p_DUT_2e_Unit_2e_b) : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x3u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_276_24_36__Y.slice<7,0>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x2u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_275_24_33__Y.slice<7,0>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x1u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_274_24_32__Y.slice<7,0>().val() : (logic_not<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val()) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_273_24_29__Y.slice<7,0>().val() : i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_273_24_29__Y.slice<7,0>().val())))))))));
	// connection
	p_DUT_2e_Stack_2e_bus = p_DUT_2e_bus;
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2723_CMP0
	i_procmux_24_2723__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2723_CMP1
	i_procmux_24_2723__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2726_CMP0
	i_procmux_24_2726__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2726_CMP1
	i_procmux_24_2726__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1813_CMP0
	i_procmux_24_1813__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1813_CMP1
	i_procmux_24_1813__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1816_CMP0
	i_procmux_24_1816__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1816_CMP1
	i_procmux_24_1816__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1308_CMP0
	i_procmux_24_1308__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1308_CMP1
	i_procmux_24_1308__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1311_CMP0
	i_procmux_24_1311__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1311_CMP1
	i_procmux_24_1311__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// connection
	p_DUT_2e_Brain_2e_Ready = p_DUT_2e_Ready;
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2711_CMP0
	i_procmux_24_2711__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2711_CMP1
	i_procmux_24_2711__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2714_CMP0
	i_procmux_24_2714__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2714_CMP1
	i_procmux_24_2714__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1802_CMP0
	i_procmux_24_1802__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1802_CMP1
	i_procmux_24_1802__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1805_CMP0
	i_procmux_24_1805__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1805_CMP1
	i_procmux_24_1805__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1298_CMP0
	i_procmux_24_1298__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1298_CMP1
	i_procmux_24_1298__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1301_CMP0
	i_procmux_24_1301__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1301_CMP1
	i_procmux_24_1301__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// cells $procmux$578 $procmux$547 $procmux$537 $procmux$538_CMP0 $procmux$539_CMP0 $procmux$540_CMP0 $procmux$541_CMP0 $procmux$542_CMP0 $procmux$543_CMP0 $procmux$544_CMP0 $procmux$545_CMP0
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_NA_5b_7_3a_0_5d_ = (p_DUT_2e_Unit_2e_ALU__ctrl.slice<2>().val() ? value<8>{0u} : (p_DUT_2e_Unit_2e_ALU__ctrl.slice<2>().val() ? value<8>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x7u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_280_24_40__Y.slice<7,0>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x5u}) ? value<8>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x6u}) ? value<8>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x4u}) ? value<8>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x3u}) ? value<8>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x2u}) ? value<8>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x1u}) ? value<8>{0u} : (logic_not<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val()) ? value<8>{0u} : value<8>{0u}))))))))));
	// connection
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_d_5b_7_3a_0_5d_ = i_procmux_24_575__Y;
	// connection
	p_DUT_2e_SP__SEL_2e_up = p_DUT_2e_ctrl__signals.slice<7>().val();
	// connection
	p_DUT_2e_Stack_2e_RST__AAA.slice<7,6>() = value<2>{0u};
	// connection
	p_DUT_2e_Stack_2e_RST__AAA.slice<2,0>() = value<3>{0u};
	// connection
	p_DUT_2e_Stack_2e_RST__AAA.slice<5,3>() = p_DUT_2e_Stack_2e_bus.slice<5,3>().val();
	// cells $flatten\DUT.$and$i8008_core.v:183$273 $flatten\DUT.$not$i8008_core.v:183$272 $flatten\DUT.$and$i8008_core.v:183$271 $flatten\DUT.$eq$i8008_core.v:183$270 $flatten\DUT.$and$i8008_core.v:183$269 $flatten\DUT.$not$i8008_core.v:183$268 $flatten\DUT.$and$i8008_core.v:183$267 $flatten\DUT.$not$i8008_core.v:183$266 $flatten\DUT.$eq$i8008_core.v:183$265
	p_DUT_2e_SP__SEL_2e_en = and_uu<1>(and_uu<1>(p_DUT_2e_ctrl__signals.slice<9>().val(), not_u<1>(and_uu<1>(logic_not<1>(p_DUT_2e_sel__Stack), not_u<1>(p_DUT_2e_ctrl__signals.slice<7>().val())))), not_u<1>(and_uu<1>(eq_uu<1>(p_DUT_2e_sel__Stack, value<3>{0x7u}), p_DUT_2e_ctrl__signals.slice<7>().val())));
	// connection
	p_DUT_2e_clk = p_clk100;
	// cells $procmux$862 $procmux$766 $procmux$763
	i_procmux_24_862__Y = (p_reset__n ? (p_reset__n ? (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y ? p_DUT_2e_SP__SEL_2e_Q.curr : value<3>{0u}) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$859 $procmux$760 $procmux$757 $flatten\DUT.\Stack.$ternary$i8008_core.v:761$336
	i_procmux_24_859__Y = (p_reset__n ? (p_reset__n ? (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y ? value<6>{0u}.concat((p_DUT_2e_Stack_2e_Stack__ctrl.slice<2>().val() ? p_DUT_2e_Stack_2e_RST__AAA : p_DUT_2e_Stack_2e_bus)).val() : value<14>{0u}) : value<14>{0u}) : value<14>{0u});
	// cells $procmux$856 $procmux$754 $procmux$751
	i_procmux_24_856__Y = (p_reset__n ? (p_reset__n ? (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y ? value<14>{0x3fffu} : value<14>{0u}) : value<14>{0u}) : value<14>{0u});
	// cells $procmux$853 $procmux$808 $procmux$805 $procmux$712 $procmux$709 $procmux$706
	i_procmux_24_853__Y = (p_reset__n ? (p_reset__n ? (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y ? value<3>{0u} : (p_reset__n ? (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y ? value<3>{0u} : (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_762_24_338__Y ? p_DUT_2e_SP__SEL_2e_Q.curr : value<3>{0u})) : value<3>{0u})) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$850 $procmux$802 $procmux$799 $procmux$703 $procmux$700 $procmux$697
	i_procmux_24_850__Y = (p_reset__n ? (p_reset__n ? (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y ? value<14>{0u} : (p_reset__n ? (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y ? value<14>{0u} : (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_762_24_338__Y ? p_DUT_2e_bus.slice<5,0>().concat(value<8>{0u}).val() : value<14>{0u})) : value<14>{0u})) : value<14>{0u}) : value<14>{0u});
	// cells $procmux$847 $procmux$796 $procmux$793 $procmux$694 $procmux$691 $procmux$688
	i_procmux_24_847__Y = (p_reset__n ? (p_reset__n ? (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y ? value<14>{0u} : (p_reset__n ? (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y ? value<14>{0u} : (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_762_24_338__Y ? value<14>{0x3f00u} : value<14>{0u})) : value<14>{0u})) : value<14>{0u}) : value<14>{0u});
	// cells $procmux$841 $procmux$784 $procmux$781 $procmux$739 $procmux$736 $procmux$733 $procmux$673 $procmux$670 $procmux$667 $procmux$664
	i_procmux_24_841__Y = (p_reset__n ? (p_reset__n ? (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y ? value<3>{0u} : (p_reset__n ? (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y ? value<3>{0u} : (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_762_24_338__Y ? value<3>{0u} : (p_reset__n ? (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y ? value<3>{0u} : (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_762_24_338__Y ? value<3>{0u} : (p_DUT_2e_Stack_2e_Stack__ctrl.slice<3>().val() ? p_DUT_2e_SP__SEL_2e_Q.curr : value<3>{0u}))) : value<3>{0u}))) : value<3>{0u})) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$838 $procmux$778 $procmux$775 $procmux$730 $procmux$727 $procmux$724 $procmux$661 $procmux$658 $procmux$655 $procmux$652 $flatten\DUT.\Stack.$add$i8008_core.v:765$351
	i_procmux_24_838__Y = (p_reset__n ? (p_reset__n ? (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y ? value<14>{0u} : (p_reset__n ? (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y ? value<14>{0u} : (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_762_24_338__Y ? value<14>{0u} : (p_reset__n ? (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y ? value<14>{0u} : (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_762_24_338__Y ? value<14>{0u} : (p_DUT_2e_Stack_2e_Stack__ctrl.slice<3>().val() ? add_uu<32>(i_flatten_5c_DUT_2e__5c_Stack_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_765_24_350__DATA, value<32>{0x1u}).slice<13,0>().val() : value<14>{0u}))) : value<14>{0u}))) : value<14>{0u})) : value<14>{0u}) : value<14>{0u});
	// cells $procmux$835 $procmux$772 $procmux$769 $procmux$721 $procmux$718 $procmux$715 $procmux$649 $procmux$646 $procmux$643 $procmux$640
	i_procmux_24_835__Y = (p_reset__n ? (p_reset__n ? (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y ? value<14>{0u} : (p_reset__n ? (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y ? value<14>{0u} : (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_762_24_338__Y ? value<14>{0u} : (p_reset__n ? (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_760_24_325__Y ? value<14>{0u} : (i_flatten_5c_DUT_2e__5c_Stack_2e__24_logic__and_24_i8008__core_2e_v_3a_762_24_338__Y ? value<14>{0u} : (p_DUT_2e_Stack_2e_Stack__ctrl.slice<3>().val() ? value<14>{0x3fffu} : value<14>{0u}))) : value<14>{0u}))) : value<14>{0u})) : value<14>{0u}) : value<14>{0u});
	// \full_case: 1
	// \src: i8008_core.v:750.3-765.39
	// cell $procmux$832
	i_procmux_24_832__Y = (p_reset__n ? value<14>{0u} : value<14>{0x3fffu});
	// \full_case: 1
	// \src: i8008_core.v:750.3-765.39
	// cell $procmux$829
	i_procmux_24_829__Y = (p_reset__n ? value<14>{0u} : value<14>{0x3fffu});
	// \full_case: 1
	// \src: i8008_core.v:750.3-765.39
	// cell $procmux$826
	i_procmux_24_826__Y = (p_reset__n ? value<14>{0u} : value<14>{0x3fffu});
	// \full_case: 1
	// \src: i8008_core.v:750.3-765.39
	// cell $procmux$823
	i_procmux_24_823__Y = (p_reset__n ? value<14>{0u} : value<14>{0x3fffu});
	// \full_case: 1
	// \src: i8008_core.v:750.3-765.39
	// cell $procmux$820
	i_procmux_24_820__Y = (p_reset__n ? value<14>{0u} : value<14>{0x3fffu});
	// \full_case: 1
	// \src: i8008_core.v:750.3-765.39
	// cell $procmux$817
	i_procmux_24_817__Y = (p_reset__n ? value<14>{0u} : value<14>{0x3fffu});
	// \full_case: 1
	// \src: i8008_core.v:750.3-765.39
	// cell $procmux$814
	i_procmux_24_814__Y = (p_reset__n ? value<14>{0u} : value<14>{0x3fffu});
	// \full_case: 1
	// \src: i8008_core.v:750.3-765.39
	// cell $procmux$811
	i_procmux_24_811__Y = (p_reset__n ? value<14>{0u} : value<14>{0x3fffu});
	// cells $procmux$626 $procmux$596 $procmux$593
	i_procmux_24_626__Y = (p_reset__n ? (p_reset__n ? (p_DUT_2e_rf_2e_rf__ctrl.slice<0>().val() ? p_DUT_2e_Brain_2e_ctrl__signals.slice<14,12>().val() : value<3>{0u}) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$623 $procmux$590 $procmux$587
	i_procmux_24_623__Y = (p_reset__n ? (p_reset__n ? (p_DUT_2e_rf_2e_rf__ctrl.slice<0>().val() ? p_DUT_2e_bus : value<8>{0u}) : value<8>{0u}) : value<8>{0u});
	// cells $procmux$620 $procmux$584 $procmux$581
	i_procmux_24_620__Y = (p_reset__n ? (p_reset__n ? (p_DUT_2e_rf_2e_rf__ctrl.slice<0>().val() ? value<8>{0xffu} : value<8>{0u}) : value<8>{0u}) : value<8>{0u});
	// \full_case: 1
	// \src: i8008_core.v:708.3-718.29
	// cell $procmux$617
	i_procmux_24_617__Y = (p_reset__n ? value<8>{0u} : value<8>{0xffu});
	// \full_case: 1
	// \src: i8008_core.v:708.3-718.29
	// cell $procmux$614
	i_procmux_24_614__Y = (p_reset__n ? value<8>{0u} : value<8>{0xffu});
	// \full_case: 1
	// \src: i8008_core.v:708.3-718.29
	// cell $procmux$611
	i_procmux_24_611__Y = (p_reset__n ? value<8>{0u} : value<8>{0xffu});
	// \full_case: 1
	// \src: i8008_core.v:708.3-718.29
	// cell $procmux$608
	i_procmux_24_608__Y = (p_reset__n ? value<8>{0u} : value<8>{0xffu});
	// \full_case: 1
	// \src: i8008_core.v:708.3-718.29
	// cell $procmux$605
	i_procmux_24_605__Y = (p_reset__n ? value<8>{0u} : value<8>{0xffu});
	// \full_case: 1
	// \src: i8008_core.v:708.3-718.29
	// cell $procmux$602
	i_procmux_24_602__Y = (p_reset__n ? value<8>{0u} : value<8>{0xffu});
	// \full_case: 1
	// \src: i8008_core.v:708.3-718.29
	// cell $procmux$599
	i_procmux_24_599__Y = (p_reset__n ? value<8>{0u} : value<8>{0xffu});
	// connection
	p_DUT_2e_Stack_2e_clk = p_DUT_2e_clk;
	// connection
	p_DUT_2e_rf_2e_clk = p_DUT_2e_clk;
	// connection
	p_DUT_2e_Brain_2e_clk = p_DUT_2e_clk;
	// \src: i8008_core.v:751.4-751.21
	// memory \DUT.Stack.rf write port 0
	if (posedge_p_clk100) {
		auto tmp_6 = memory_index(value<3>{0u}, 0, 8);
		CXXRTL_ASSERT(tmp_6.valid && "out of bounds write");
		if (tmp_6.valid) {
			memory_p_DUT_2e_Stack_2e_rf.update(tmp_6.index, value<14>{0u}, i_procmux_24_832__Y, 0);
		}
	}
	// \src: i8008_core.v:752.4-752.21
	// memory \DUT.Stack.rf write port 1
	if (posedge_p_clk100) {
		auto tmp_7 = memory_index(value<3>{0x1u}, 0, 8);
		CXXRTL_ASSERT(tmp_7.valid && "out of bounds write");
		if (tmp_7.valid) {
			memory_p_DUT_2e_Stack_2e_rf.update(tmp_7.index, value<14>{0u}, i_procmux_24_829__Y, 1);
		}
	}
	// \src: i8008_core.v:753.4-753.21
	// memory \DUT.Stack.rf write port 2
	if (posedge_p_clk100) {
		auto tmp_8 = memory_index(value<3>{0x2u}, 0, 8);
		CXXRTL_ASSERT(tmp_8.valid && "out of bounds write");
		if (tmp_8.valid) {
			memory_p_DUT_2e_Stack_2e_rf.update(tmp_8.index, value<14>{0u}, i_procmux_24_826__Y, 2);
		}
	}
	// \src: i8008_core.v:754.4-754.21
	// memory \DUT.Stack.rf write port 3
	if (posedge_p_clk100) {
		auto tmp_9 = memory_index(value<3>{0x3u}, 0, 8);
		CXXRTL_ASSERT(tmp_9.valid && "out of bounds write");
		if (tmp_9.valid) {
			memory_p_DUT_2e_Stack_2e_rf.update(tmp_9.index, value<14>{0u}, i_procmux_24_823__Y, 3);
		}
	}
	// \src: i8008_core.v:755.4-755.21
	// memory \DUT.Stack.rf write port 4
	if (posedge_p_clk100) {
		auto tmp_10 = memory_index(value<3>{0x4u}, 0, 8);
		CXXRTL_ASSERT(tmp_10.valid && "out of bounds write");
		if (tmp_10.valid) {
			memory_p_DUT_2e_Stack_2e_rf.update(tmp_10.index, value<14>{0u}, i_procmux_24_820__Y, 4);
		}
	}
	// \src: i8008_core.v:756.4-756.21
	// memory \DUT.Stack.rf write port 5
	if (posedge_p_clk100) {
		auto tmp_11 = memory_index(value<3>{0x5u}, 0, 8);
		CXXRTL_ASSERT(tmp_11.valid && "out of bounds write");
		if (tmp_11.valid) {
			memory_p_DUT_2e_Stack_2e_rf.update(tmp_11.index, value<14>{0u}, i_procmux_24_817__Y, 5);
		}
	}
	// \src: i8008_core.v:757.4-757.21
	// memory \DUT.Stack.rf write port 6
	if (posedge_p_clk100) {
		auto tmp_12 = memory_index(value<3>{0x6u}, 0, 8);
		CXXRTL_ASSERT(tmp_12.valid && "out of bounds write");
		if (tmp_12.valid) {
			memory_p_DUT_2e_Stack_2e_rf.update(tmp_12.index, value<14>{0u}, i_procmux_24_814__Y, 6);
		}
	}
	// \src: i8008_core.v:758.4-758.21
	// memory \DUT.Stack.rf write port 7
	if (posedge_p_clk100) {
		auto tmp_13 = memory_index(value<3>{0x7u}, 0, 8);
		CXXRTL_ASSERT(tmp_13.valid && "out of bounds write");
		if (tmp_13.valid) {
			memory_p_DUT_2e_Stack_2e_rf.update(tmp_13.index, value<14>{0u}, i_procmux_24_811__Y, 7);
		}
	}
	// \src: i8008_core.v:761.4-761.52
	// memory \DUT.Stack.rf write port 8
	if (posedge_p_clk100) {
		auto tmp_14 = memory_index(i_procmux_24_862__Y, 0, 8);
		CXXRTL_ASSERT(tmp_14.valid && "out of bounds write");
		if (tmp_14.valid) {
			memory_p_DUT_2e_Stack_2e_rf.update(tmp_14.index, i_procmux_24_859__Y, i_procmux_24_856__Y, 8);
		}
	}
	// \src: i8008_core.v:763.4-763.29
	// memory \DUT.Stack.rf write port 9
	if (posedge_p_clk100) {
		auto tmp_15 = memory_index(i_procmux_24_853__Y, 0, 8);
		CXXRTL_ASSERT(tmp_15.valid && "out of bounds write");
		if (tmp_15.valid) {
			memory_p_DUT_2e_Stack_2e_rf.update(tmp_15.index, i_procmux_24_850__Y, i_procmux_24_847__Y, 9);
		}
	}
	// \src: i8008_core.v:765.4-765.38
	// memory \DUT.Stack.rf write port 10
	if (posedge_p_clk100) {
		auto tmp_16 = memory_index(i_procmux_24_841__Y, 0, 8);
		CXXRTL_ASSERT(tmp_16.valid && "out of bounds write");
		if (tmp_16.valid) {
			memory_p_DUT_2e_Stack_2e_rf.update(tmp_16.index, i_procmux_24_838__Y, i_procmux_24_835__Y, 10);
		}
	}
	// \src: i8008_core.v:709.4-709.20
	// memory \DUT.rf.rf write port 0
	if (posedge_p_clk100) {
		auto tmp_17 = memory_index(value<3>{0u}, 0, 7);
		CXXRTL_ASSERT(tmp_17.valid && "out of bounds write");
		if (tmp_17.valid) {
			memory_p_DUT_2e_rf_2e_rf.update(tmp_17.index, value<8>{0u}, i_procmux_24_617__Y, 0);
		}
	}
	// \src: i8008_core.v:710.4-710.20
	// memory \DUT.rf.rf write port 1
	if (posedge_p_clk100) {
		auto tmp_18 = memory_index(value<3>{0x1u}, 0, 7);
		CXXRTL_ASSERT(tmp_18.valid && "out of bounds write");
		if (tmp_18.valid) {
			memory_p_DUT_2e_rf_2e_rf.update(tmp_18.index, value<8>{0u}, i_procmux_24_614__Y, 1);
		}
	}
	// \src: i8008_core.v:711.4-711.20
	// memory \DUT.rf.rf write port 2
	if (posedge_p_clk100) {
		auto tmp_19 = memory_index(value<3>{0x2u}, 0, 7);
		CXXRTL_ASSERT(tmp_19.valid && "out of bounds write");
		if (tmp_19.valid) {
			memory_p_DUT_2e_rf_2e_rf.update(tmp_19.index, value<8>{0u}, i_procmux_24_611__Y, 2);
		}
	}
	// \src: i8008_core.v:712.4-712.20
	// memory \DUT.rf.rf write port 3
	if (posedge_p_clk100) {
		auto tmp_20 = memory_index(value<3>{0x3u}, 0, 7);
		CXXRTL_ASSERT(tmp_20.valid && "out of bounds write");
		if (tmp_20.valid) {
			memory_p_DUT_2e_rf_2e_rf.update(tmp_20.index, value<8>{0u}, i_procmux_24_608__Y, 3);
		}
	}
	// \src: i8008_core.v:713.4-713.20
	// memory \DUT.rf.rf write port 4
	if (posedge_p_clk100) {
		auto tmp_21 = memory_index(value<3>{0x4u}, 0, 7);
		CXXRTL_ASSERT(tmp_21.valid && "out of bounds write");
		if (tmp_21.valid) {
			memory_p_DUT_2e_rf_2e_rf.update(tmp_21.index, value<8>{0u}, i_procmux_24_605__Y, 4);
		}
	}
	// \src: i8008_core.v:714.4-714.20
	// memory \DUT.rf.rf write port 5
	if (posedge_p_clk100) {
		auto tmp_22 = memory_index(value<3>{0x5u}, 0, 7);
		CXXRTL_ASSERT(tmp_22.valid && "out of bounds write");
		if (tmp_22.valid) {
			memory_p_DUT_2e_rf_2e_rf.update(tmp_22.index, value<8>{0u}, i_procmux_24_602__Y, 5);
		}
	}
	// \src: i8008_core.v:715.4-715.20
	// memory \DUT.rf.rf write port 6
	if (posedge_p_clk100) {
		auto tmp_23 = memory_index(value<3>{0x6u}, 0, 7);
		CXXRTL_ASSERT(tmp_23.valid && "out of bounds write");
		if (tmp_23.valid) {
			memory_p_DUT_2e_rf_2e_rf.update(tmp_23.index, value<8>{0u}, i_procmux_24_599__Y, 6);
		}
	}
	// \src: i8008_core.v:718.4-718.28
	// memory \DUT.rf.rf write port 7
	if (posedge_p_clk100) {
		auto tmp_24 = memory_index(i_procmux_24_626__Y, 0, 7);
		CXXRTL_ASSERT(tmp_24.valid && "out of bounds write");
		if (tmp_24.valid) {
			memory_p_DUT_2e_rf_2e_rf.update(tmp_24.index, i_procmux_24_623__Y, i_procmux_24_620__Y, 7);
		}
	}
	// cells $procdff$2943 $procmux$868 $procmux$2806 $procmux$2807_CMP0 $procmux$2808_CMP0 $procmux$2809_CMP0 $procmux$1312 $procmux$1313_CMP0 $procmux$1305 $procmux$1306_CMP0 $procmux$1307_CMP0 $procmux$1308_ANY $procmux$1309_CMP0 $procmux$1310_CMP0 $procmux$1311_ANY $procmux$1066 $procmux$1067_CMP0 $procmux$1064 $procmux$1065_ANY $procmux$1060 $procmux$1061_ANY $procmux$1062_ANY $procmux$1063_CMP0 $procmux$1013 $procmux$1014_CMP0 $procmux$1011 $procmux$1012_ANY $procmux$1009 $procmux$1010_ANY $procmux$1007 $procmux$1040 $procmux$1041_CMP0 $procmux$1038 $procmux$1039_ANY $procmux$1036 $procmux$1037_ANY $procmux$1034 $procmux$1817 $procmux$1818_CMP0 $procmux$1810 $procmux$1811_CMP0 $procmux$1812_CMP0 $procmux$1813_ANY $procmux$1814_CMP0 $procmux$1815_CMP0 $procmux$1816_ANY $procmux$1529 $procmux$1530_CMP0 $procmux$1527 $procmux$1528_ANY $procmux$1524 $procmux$1525_ANY $procmux$1526_ANY $procmux$2727 $procmux$2728_CMP0 $procmux$2720 $procmux$2721_CMP0 $procmux$2722_CMP0 $procmux$2723_ANY $procmux$2724_CMP0 $procmux$2725_CMP0 $procmux$2726_ANY $procmux$2798 $procmux$2799_CMP0 $procmux$2796 $procmux$2797_CMP0 $procmux$2794 $procmux$2509 $procmux$2510_CMP0 $procmux$2507 $procmux$2508_ANY $procmux$2503 $procmux$2504_ANY $procmux$2505_ANY $procmux$2506_ANY $procmux$2407 $procmux$2408_CMP0 $procmux$2405 $procmux$2406_ANY $procmux$2403 $procmux$2404_ANY $procmux$2401 $procmux$2481 $procmux$2482_CMP0 $procmux$2479 $procmux$2480_ANY $procmux$2477 $procmux$2478_ANY $procmux$2475 $procmux$2427 $procmux$2428_CMP0 $procmux$2425 $procmux$2426_ANY $procmux$2423 $procmux$2424_ANY $procmux$2421 $procmux$2418
	if (posedge_p_clk100) {
		p_DUT_2e_Brain_2e_cycle.next = (p_reset__n ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? p_DUT_2e_Brain_2e_cycle.curr : (reduce_or<1>(i_procmux_24_1308__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1065__CMP) ? (reduce_or<1>(i_procmux_24_1061__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1012__CMP) ? (reduce_or<1>(i_procmux_24_1010__CMP) ? (p_DUT_2e_Brain_2e_CF ? value<2>{0u} : p_DUT_2e_Brain_2e_cycle.curr) : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : (reduce_or<1>(i_procmux_24_1062__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1039__CMP) ? (reduce_or<1>(i_procmux_24_1037__CMP) ? (i_procmux_24_2850__Y ? p_DUT_2e_Brain_2e_cycle.curr : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu}) ? value<2>{0u} : p_DUT_2e_Brain_2e_cycle.curr))) : value<2>{0u}) : value<2>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? p_DUT_2e_Brain_2e_cycle.curr : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? p_DUT_2e_Brain_2e_cycle.curr : (reduce_or<1>(i_procmux_24_1311__CMP) ? p_DUT_2e_Brain_2e_cycle.curr : value<2>{0u})))))) : value<2>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? p_DUT_2e_Brain_2e_cycle.curr : (reduce_or<1>(i_procmux_24_1813__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1528__CMP) ? (reduce_or<1>(i_procmux_24_1525__CMP) ? value<2>{0x2u} : (reduce_or<1>(i_procmux_24_1526__CMP) ? value<2>{0u} : p_DUT_2e_Brain_2e_cycle.curr)) : value<2>{0u}) : value<2>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? p_DUT_2e_Brain_2e_cycle.curr : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? p_DUT_2e_Brain_2e_cycle.curr : (reduce_or<1>(i_procmux_24_1816__CMP) ? p_DUT_2e_Brain_2e_cycle.curr : value<2>{0u})))))) : value<2>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_eq_24_i8008__core_2e_v_3a_419_24_74__Y ? value<2>{0x1u} : p_DUT_2e_Brain_2e_cycle.curr) : value<2>{0u}) : value<2>{0u}) : (reduce_or<1>(i_procmux_24_2723__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2508__CMP) ? (reduce_or<1>(i_procmux_24_2504__CMP) ? value<2>{0x1u} : (reduce_or<1>(i_procmux_24_2505__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2406__CMP) ? (reduce_or<1>(i_procmux_24_2404__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_or_24_i8008__core_2e_v_3a_371_24_67__Y ? p_DUT_2e_Brain_2e_cycle.curr : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : (reduce_or<1>(i_procmux_24_2506__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2480__CMP) ? (reduce_or<1>(i_procmux_24_2478__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_360_24_62__Y ? value<2>{0x1u} : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2426__CMP) ? (reduce_or<1>(i_procmux_24_2424__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_360_24_62__Y ? value<2>{0u} : (p_DUT_2e_Brain_2e_Intr ? value<2>{0u} : p_DUT_2e_Brain_2e_cycle.curr)) : value<2>{0u}) : value<2>{0u}) : value<2>{0u})) : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : p_DUT_2e_Brain_2e_cycle.curr))) : value<2>{0u}) : value<2>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? p_DUT_2e_Brain_2e_cycle.curr : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? p_DUT_2e_Brain_2e_cycle.curr : (reduce_or<1>(i_procmux_24_2726__CMP) ? p_DUT_2e_Brain_2e_cycle.curr : value<2>{0u})))))) : value<2>{0u}) : value<2>{0u}))) : value<2>{0u});
	}
	// cells $procdff$2942 $procmux$865 $procmux$2801 $procmux$2802_CMP0 $procmux$2803_CMP0 $procmux$2804_CMP0 $procmux$1302 $procmux$1303_CMP0 $procmux$1295 $procmux$1296_CMP0 $procmux$1297_CMP0 $procmux$1298_ANY $procmux$1299_CMP0 $procmux$1300_CMP0 $procmux$1301_ANY $procmux$1078 $procmux$1079_CMP0 $procmux$1076 $procmux$1077_ANY $procmux$1072 $procmux$1073_ANY $procmux$1074_ANY $procmux$1075_CMP0 $procmux$1026 $procmux$1027_CMP0 $procmux$1024 $procmux$1025_ANY $procmux$1022 $procmux$1023_ANY $procmux$1020 $procmux$1054 $procmux$1055_CMP0 $procmux$1052 $procmux$1053_ANY $procmux$1050 $procmux$1051_ANY $procmux$1048 $flatten\DUT.\Brain.$ternary$i8008_core.v:605$89 $flatten\DUT.\Brain.$ternary$i8008_core.v:588$88 $procmux$1806 $procmux$1807_CMP0 $procmux$1799 $procmux$1800_CMP0 $procmux$1801_CMP0 $procmux$1802_ANY $procmux$1803_CMP0 $procmux$1804_CMP0 $procmux$1805_ANY $procmux$1517 $procmux$1518_CMP0 $procmux$1515 $procmux$1516_ANY $procmux$1512 $procmux$1513_ANY $procmux$1514_ANY $flatten\DUT.\Brain.$ternary$i8008_core.v:514$82 $flatten\DUT.\Brain.$ternary$i8008_core.v:492$79 $procmux$2715 $procmux$2716_CMP0 $procmux$2708 $procmux$2709_CMP0 $procmux$2710_CMP0 $procmux$2711_ANY $procmux$2712_CMP0 $procmux$2713_CMP0 $procmux$2714_ANY $procmux$2147 $procmux$2148_CMP0 $procmux$2145 $procmux$2146_CMP0 $procmux$2143 $procmux$2495 $procmux$2496_CMP0 $procmux$2493 $procmux$2494_ANY $procmux$2489 $procmux$2490_ANY $procmux$2491_ANY $procmux$2492_ANY $procmux$2655 $procmux$2656_CMP0 $procmux$2653 $procmux$2654_ANY $procmux$2651 $procmux$2652_ANY $procmux$2649 $procmux$2464 $procmux$2465_CMP0 $procmux$2462 $procmux$2463_ANY $procmux$2460 $procmux$2461_ANY $procmux$2458 $procmux$2447 $procmux$2448_CMP0 $procmux$2445 $procmux$2446_ANY $procmux$2443 $procmux$2444_ANY $procmux$2441 $procmux$2438 $flatten\DUT.\Brain.$ternary$i8008_core.v:345$60 $flatten\DUT.\Brain.$ternary$i8008_core.v:338$59
	if (posedge_p_clk100) {
		p_DUT_2e_Brain_2e_state.next = (p_reset__n ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<3>{0x2u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<3>{0x5u} : (reduce_or<1>(i_procmux_24_1298__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1077__CMP) ? (reduce_or<1>(i_procmux_24_1073__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1025__CMP) ? (reduce_or<1>(i_procmux_24_1023__CMP) ? (p_DUT_2e_Brain_2e_CF ? value<3>{0x2u} : value<3>{0x7u}) : value<3>{0u}) : value<3>{0u}) : value<3>{0u}) : (reduce_or<1>(i_procmux_24_1074__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1053__CMP) ? (reduce_or<1>(i_procmux_24_1051__CMP) ? (i_procmux_24_2850__Y ? value<3>{0x7u} : value<3>{0x2u}) : value<3>{0u}) : value<3>{0u}) : value<3>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_instr, value<8>{0x3eu}) ? value<3>{0x2u} : value<3>{0x7u}))) : value<3>{0u}) : value<3>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? (p_DUT_2e_Brain_2e_Ready ? value<3>{0x1u} : value<3>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (p_DUT_2e_Brain_2e_Ready ? value<3>{0x1u} : value<3>{0u}) : (reduce_or<1>(i_procmux_24_1301__CMP) ? value<3>{0x4u} : value<3>{0u})))))) : value<3>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<3>{0x2u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<3>{0x5u} : (reduce_or<1>(i_procmux_24_1802__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1516__CMP) ? (reduce_or<1>(i_procmux_24_1513__CMP) ? value<3>{0x2u} : (reduce_or<1>(i_procmux_24_1514__CMP) ? value<3>{0x2u} : value<3>{0x7u})) : value<3>{0u}) : value<3>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? (p_DUT_2e_Brain_2e_Ready ? value<3>{0x1u} : value<3>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (p_DUT_2e_Brain_2e_Ready ? value<3>{0x1u} : value<3>{0u}) : (reduce_or<1>(i_procmux_24_1805__CMP) ? value<3>{0x4u} : value<3>{0u})))))) : value<3>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<3>{0x2u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_eq_24_i8008__core_2e_v_3a_419_24_74__Y ? value<3>{0x2u} : value<3>{0x5u}) : value<3>{0u}) : value<3>{0u}) : (reduce_or<1>(i_procmux_24_2711__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2494__CMP) ? (reduce_or<1>(i_procmux_24_2490__CMP) ? value<3>{0x2u} : (reduce_or<1>(i_procmux_24_2491__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2654__CMP) ? (reduce_or<1>(i_procmux_24_2652__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_or_24_i8008__core_2e_v_3a_371_24_67__Y ? value<3>{0x7u} : value<3>{0x2u}) : value<3>{0u}) : value<3>{0u}) : value<3>{0u}) : (reduce_or<1>(i_procmux_24_2492__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2463__CMP) ? (reduce_or<1>(i_procmux_24_2461__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_360_24_62__Y ? value<3>{0x2u} : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2446__CMP) ? (reduce_or<1>(i_procmux_24_2444__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_360_24_62__Y ? value<3>{0u} : (p_DUT_2e_Brain_2e_Intr ? value<3>{0x6u} : value<3>{0x3u})) : value<3>{0u}) : value<3>{0u}) : value<3>{0u})) : value<3>{0u}) : value<3>{0u}) : value<3>{0u}) : value<3>{0x7u}))) : value<3>{0u}) : value<3>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? (p_DUT_2e_Brain_2e_Ready ? value<3>{0x1u} : value<3>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (p_DUT_2e_Brain_2e_Ready ? value<3>{0x1u} : value<3>{0u}) : (reduce_or<1>(i_procmux_24_2714__CMP) ? value<3>{0x4u} : value<3>{0u})))))) : value<3>{0u}) : value<3>{0x2u}))) : value<3>{0x2u});
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:749.2-765.39|i8008_core.v:197.4-204.3
	// cell $procdff$2941
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_765_24_286__EN.next = i_procmux_24_835__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:749.2-765.39|i8008_core.v:197.4-204.3
	// cell $procdff$2940
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_765_24_286__DATA.next = i_procmux_24_838__Y;
	}
	// cells $auto$proc_dlatch.cc:427:proc_dlatch$2855 $auto$proc_dlatch.cc:257:make_hold$2903 $auto$proc_dlatch.cc:257:make_hold$2897 $auto$proc_dlatch.cc:257:make_hold$2891 $auto$proc_dlatch.cc:257:make_hold$2887 $auto$proc_dlatch.cc:257:make_hold$2883 $auto$proc_dlatch.cc:257:make_hold$2879 $auto$proc_dlatch.cc:257:make_hold$2875 $auto$proc_dlatch.cc:244:make_hold$2867 $auto$proc_dlatch.cc:244:make_hold$2865 $auto$proc_dlatch.cc:244:make_hold$2863 $auto$proc_dlatch.cc:244:make_hold$2861 $auto$proc_dlatch.cc:244:make_hold$2859 $auto$proc_dlatch.cc:244:make_hold$2857
	if (and_uu<1>(p_DUT_2e_Brain_2e_ctrl__signals.slice<17>().val(), and_uu<1>(p_DUT_2e_Brain_2e_ctrl__signals.slice<17>().val(), and_uu<1>(not_u<1>(i_procmux_24_568__CMP), and_uu<1>(not_u<1>(i_procmux_24_567__CMP), and_uu<1>(not_u<1>(i_procmux_24_566__CMP), and_uu<1>(not_u<1>(i_procmux_24_565__CMP), and_uu<1>(not_u<1>(i_procmux_24_564__CMP), not_u<1>(i_procmux_24_563__CMP)))))))) == value<1> {0u}) {
		p_DUT_2e_Unit_2e_d.next = i_procmux_24_575__Y;
	}
	// cells $procdff$2908 $procmux$400 $procmux$397 $flatten\DUT.$ne$i8008_core.v:113$256 $flatten\DUT.$or$i8008_core.v:114$257
	if (posedge_p_clk100) {
		p_DUT_2e_Intr.next = (p_reset__n ? (ne_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u}) ? or_uu<1>(p_DUT_2e_Intr.curr, p_sw.slice<8>().val()) : value<1>{0u}) : value<1>{0u});
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:143.2-147.17
	// cell $procdff$2909
	if (posedge_p_sw_9) {
		p_DUT_2e_instr.next = p_sw.slice<7,0>().val();
	}
	// cells $procdff$2910 $procmux$501 $flatten\DUT.$or$i8008_core.v:148$263 $not$i8008_core.v:49$2 $procmux$498
	if (posedge_p_clk100) {
		p_DUT_2e_regA_2e_Q.next = (or_uu<1>(p_DUT_2e_ctrl__signals.slice<31>().val(), not_u<1>(p_reset__n)) ? value<8>{0u} : (p_DUT_2e_ctrl__signals.slice<32>().val() ? p_DUT_2e_bus : p_DUT_2e_regA_2e_Q.curr));
	}
	// cells $procdff$2911 $procmux$506 $procmux$503
	if (posedge_p_clk100) {
		p_DUT_2e_regB_2e_Q.next = (p_reset__n ? (p_DUT_2e_ctrl__signals.slice<29>().val() ? p_DUT_2e_bus : p_DUT_2e_regB_2e_Q.curr) : value<8>{0u});
	}
	// cells $procdff$2912 $procmux$511 $procmux$508 $flatten\DUT.\Unit.$ternary$i8008_core.v:285$46 $flatten\DUT.\Unit.$or$i8008_core.v:285$45 $flatten\DUT.\Unit.$reduce_xor$i8008_core.v:285$44 $flatten\DUT.\Unit.$reduce_xor$i8008_core.v:285$43 $flatten\DUT.\Unit.$ternary$i8008_core.v:284$42 $flatten\DUT.\Unit.$or$i8008_core.v:284$41 $flatten\DUT.\Unit.$ternary$i8008_core.v:286$53 $flatten\DUT.\Unit.$ternary$i8008_core.v:286$52 $flatten\DUT.\Unit.$eq$i8008_core.v:286$47 $flatten\DUT.\Unit.$not$i8008_core.v:286$49 $flatten\DUT.\Unit.$reduce_or$i8008_core.v:286$48 $flatten\DUT.\Unit.$not$i8008_core.v:286$51 $flatten\DUT.\Unit.$reduce_or$i8008_core.v:286$50 $procmux$572 $procmux$558 $procmux$551 $procmux$552_CMP0 $procmux$553_CMP0 $procmux$554_CMP0 $procmux$555_CMP0 $procmux$556_CMP0 $procmux$557_CMP0 $procmux$523 $procmux$513 $procmux$514_CMP0 $procmux$515_CMP0 $procmux$516_CMP0 $procmux$517_CMP0 $procmux$518_CMP0 $procmux$519_CMP0 $procmux$520_CMP0 $procmux$521_CMP0
	if (posedge_p_clk100) {
		p_DUT_2e_Unit_2e_flag__reg_2e_Q.next = (p_reset__n ? (p_DUT_2e_Unit_2e_ALU__ctrl.slice<1>().val() ? (p_DUT_2e_Unit_2e_ALU__ctrl.slice<2>().val() ? (p_DUT_2e_Unit_2e_ALU__ctrl.slice<2>().val() ? (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x3u}) ? p_DUT_2e_regA_2e_Q.curr.slice<0>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x2u}) ? p_DUT_2e_regA_2e_Q.curr.slice<7>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x1u}) ? p_DUT_2e_regA_2e_Q.curr.slice<0>().val() : (logic_not<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val()) ? p_DUT_2e_regA_2e_Q.curr.slice<7>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x5u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_252_24_28__Y.slice<8>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x4u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_251_24_27__Y.slice<8>().val() : value<1>{0u})))))) : value<1>{0u}) : (p_DUT_2e_Unit_2e_ALU__ctrl.slice<2>().val() ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x7u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_280_24_40__Y.slice<8>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x6u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x4u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x3u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_276_24_36__Y.slice<8>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x2u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_275_24_33__Y.slice<8>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x1u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_274_24_32__Y.slice<8>().val() : (logic_not<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val()) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_273_24_29__Y.slice<8>().val() : value<1>{0u})))))))))).concat((p_DUT_2e_Unit_2e_ALU__ctrl.slice<2>().val() ? p_DUT_2e_Unit_2e_flags.slice<2>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x7u}) ? not_u<1>(reduce_or<1>(i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_NA_5b_7_3a_0_5d_)) : not_u<1>(reduce_or<1>(i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_d_5b_7_3a_0_5d_))))).concat((p_DUT_2e_Unit_2e_ALU__ctrl.slice<2>().val() ? p_DUT_2e_Unit_2e_flags.slice<1>().val() : or_uu<1>(i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_d_5b_7_3a_0_5d_.slice<7>().val(), i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_NA_5b_7_3a_0_5d_.slice<7>().val()))).concat((p_DUT_2e_Unit_2e_ALU__ctrl.slice<2>().val() ? p_DUT_2e_Unit_2e_flags.slice<0>().val() : or_uu<1>(reduce_xor<1>(i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_d_5b_7_3a_0_5d_), reduce_xor<1>(i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_NA_5b_7_3a_0_5d_)))).val() : p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr) : value<4>{0u});
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:707.2-718.29|i8008_core.v:176.4-182.3
	// cell $procdff$2913
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_709_24_360__EN.next = i_procmux_24_617__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:707.2-718.29|i8008_core.v:176.4-182.3
	// cell $procdff$2914
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_710_24_361__EN.next = i_procmux_24_614__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:707.2-718.29|i8008_core.v:176.4-182.3
	// cell $procdff$2915
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_711_24_362__EN.next = i_procmux_24_611__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:707.2-718.29|i8008_core.v:176.4-182.3
	// cell $procdff$2916
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_712_24_363__EN.next = i_procmux_24_608__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:707.2-718.29|i8008_core.v:176.4-182.3
	// cell $procdff$2917
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_713_24_364__EN.next = i_procmux_24_605__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:707.2-718.29|i8008_core.v:176.4-182.3
	// cell $procdff$2918
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_714_24_365__EN.next = i_procmux_24_602__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:707.2-718.29|i8008_core.v:176.4-182.3
	// cell $procdff$2919
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_715_24_366__EN.next = i_procmux_24_599__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:707.2-718.29|i8008_core.v:176.4-182.3
	// cell $procdff$2920
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_718_24_367__ADDR.next = i_procmux_24_626__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:707.2-718.29|i8008_core.v:176.4-182.3
	// cell $procdff$2921
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_718_24_367__DATA.next = i_procmux_24_623__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:707.2-718.29|i8008_core.v:176.4-182.3
	// cell $procdff$2922
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_718_24_367__EN.next = i_procmux_24_620__Y;
	}
	// cells $procdff$2923 $procmux$637 $procmux$631 $flatten\DUT.\SP_SEL.$logic_and$i8008_core.v:828$355 $flatten\DUT.\SP_SEL.$add$i8008_core.v:829$356 $procmux$628 $flatten\DUT.\SP_SEL.$logic_and$i8008_core.v:830$358 $flatten\DUT.\SP_SEL.$not$i8008_core.v:830$357 $flatten\DUT.\SP_SEL.$sub$i8008_core.v:831$359
	if (posedge_p_clk100) {
		p_DUT_2e_SP__SEL_2e_Q.next = (p_reset__n ? (logic_and<1>(p_DUT_2e_SP__SEL_2e_en, p_DUT_2e_SP__SEL_2e_up) ? add_uu<32>(p_DUT_2e_SP__SEL_2e_Q.curr, value<32>{0x1u}).slice<2,0>().val() : (logic_and<1>(p_DUT_2e_SP__SEL_2e_en, not_u<1>(p_DUT_2e_SP__SEL_2e_up)) ? sub_uu<32>(p_DUT_2e_SP__SEL_2e_Q.curr, value<32>{0x1u}).slice<2,0>().val() : p_DUT_2e_SP__SEL_2e_Q.curr)) : value<3>{0u});
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:749.2-765.39|i8008_core.v:197.4-204.3
	// cell $procdff$2924
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_751_24_275__EN.next = i_procmux_24_832__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:749.2-765.39|i8008_core.v:197.4-204.3
	// cell $procdff$2925
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_752_24_276__EN.next = i_procmux_24_829__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:749.2-765.39|i8008_core.v:197.4-204.3
	// cell $procdff$2926
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_753_24_277__EN.next = i_procmux_24_826__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:749.2-765.39|i8008_core.v:197.4-204.3
	// cell $procdff$2927
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_754_24_278__EN.next = i_procmux_24_823__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:749.2-765.39|i8008_core.v:197.4-204.3
	// cell $procdff$2928
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_755_24_279__EN.next = i_procmux_24_820__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:749.2-765.39|i8008_core.v:197.4-204.3
	// cell $procdff$2929
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_756_24_280__EN.next = i_procmux_24_817__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:749.2-765.39|i8008_core.v:197.4-204.3
	// cell $procdff$2930
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_757_24_281__EN.next = i_procmux_24_814__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:749.2-765.39|i8008_core.v:197.4-204.3
	// cell $procdff$2931
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_758_24_282__EN.next = i_procmux_24_811__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:749.2-765.39|i8008_core.v:197.4-204.3
	// cell $procdff$2932
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_761_24_283__ADDR.next = i_procmux_24_862__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:749.2-765.39|i8008_core.v:197.4-204.3
	// cell $procdff$2933
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_761_24_283__DATA.next = i_procmux_24_859__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:749.2-765.39|i8008_core.v:197.4-204.3
	// cell $procdff$2934
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_761_24_283__EN.next = i_procmux_24_856__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:749.2-765.39|i8008_core.v:197.4-204.3
	// cell $procdff$2935
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_763_24_284__ADDR.next = i_procmux_24_853__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:749.2-765.39|i8008_core.v:197.4-204.3
	// cell $procdff$2936
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_763_24_284__DATA.next = i_procmux_24_850__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:749.2-765.39|i8008_core.v:197.4-204.3
	// cell $procdff$2937
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_763_24_284__EN.next = i_procmux_24_847__Y;
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:749.2-765.39|i8008_core.v:197.4-204.3
	// cell $procdff$2938
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_mem2bits_24__5c_rf_24_i8008__core_2e_v_3a_765_24_285.next = value<14>{0u};
	}
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:749.2-765.39|i8008_core.v:197.4-204.3
	// cell $procdff$2939
	if (posedge_p_clk100) {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_765_24_286__ADDR.next = i_procmux_24_841__Y;
	}
	// \src: i8008_core.v:59.13-59.21
	// cell $not$i8008_core.v:59$4
	p_led = p_clk100.concat(not_u<1>(p_reset__n)).concat(p_sw.slice<9,0>()).concat(p_DUT_2e_Brain_2e_state.curr).concat(p_DUT_2e_Brain_2e_ctrl__signals.slice<38>()).concat(p_DUT_2e_bus).val();
	return converged;
}

bool p_top::commit() {
	bool changed = false;
	if (p_DUT_2e_instr.commit()) changed = true;
	if (p_DUT_2e_Intr.commit()) changed = true;
	if (p_DUT_2e_regA_2e_Q.commit()) changed = true;
	if (p_DUT_2e_regB_2e_Q.commit()) changed = true;
	if (p_DUT_2e_Unit_2e_flag__reg_2e_Q.commit()) changed = true;
	if (p_DUT_2e_Unit_2e_d.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_718_24_367__EN.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_718_24_367__DATA.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_718_24_367__ADDR.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_715_24_366__EN.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_714_24_365__EN.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_713_24_364__EN.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_712_24_363__EN.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_711_24_362__EN.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_710_24_361__EN.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_rf_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_709_24_360__EN.commit()) changed = true;
	if (p_DUT_2e_SP__SEL_2e_Q.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_765_24_286__EN.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_765_24_286__DATA.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_765_24_286__ADDR.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_Stack_2e__24_mem2bits_24__5c_rf_24_i8008__core_2e_v_3a_765_24_285.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_763_24_284__EN.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_763_24_284__DATA.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_763_24_284__ADDR.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_761_24_283__EN.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_761_24_283__DATA.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_761_24_283__ADDR.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_758_24_282__EN.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_757_24_281__EN.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_756_24_280__EN.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_755_24_279__EN.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_754_24_278__EN.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_753_24_277__EN.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_752_24_276__EN.commit()) changed = true;
	if (i_flatten_5c_DUT_2e__5c_Stack_2e__24_memwr_24__5c_rf_24_i8008__core_2e_v_3a_751_24_275__EN.commit()) changed = true;
	if (p_DUT_2e_Brain_2e_cycle.commit()) changed = true;
	if (p_DUT_2e_Brain_2e_state.commit()) changed = true;
	prev_p_sw = p_sw;
	prev_p_clk100 = p_clk100;
	if (memory_p_DUT_2e_rf_2e_rf.commit()) changed = true;
	if (memory_p_DUT_2e_Stack_2e_rf.commit()) changed = true;
	return changed;
}

void p_top::debug_eval() {
	value<1> i_procmux_24_2850__Y;
	value<2> i_procmux_24_2840__CMP;
	value<4> i_procmux_24_2838__CMP;
	value<2> i_procmux_24_2786__CMP;
	value<2> i_procmux_24_2783__CMP;
	value<2> i_procmux_24_2774__CMP;
	value<2> i_procmux_24_2771__CMP;
	value<2> i_procmux_24_2762__CMP;
	value<2> i_procmux_24_2759__CMP;
	value<2> i_procmux_24_2750__CMP;
	value<2> i_procmux_24_2747__CMP;
	value<2> i_procmux_24_2738__CMP;
	value<2> i_procmux_24_2735__CMP;
	value<2> i_procmux_24_2726__CMP;
	value<2> i_procmux_24_2723__CMP;
	value<2> i_procmux_24_2714__CMP;
	value<2> i_procmux_24_2711__CMP;
	value<2> i_procmux_24_2702__CMP;
	value<2> i_procmux_24_2699__CMP;
	value<2> i_procmux_24_2690__CMP;
	value<2> i_procmux_24_2687__CMP;
	value<2> i_procmux_24_2678__CMP;
	value<2> i_procmux_24_2675__CMP;
	value<2> i_procmux_24_2666__CMP;
	value<2> i_procmux_24_2663__CMP;
	value<2> i_procmux_24_2654__CMP;
	value<2> i_procmux_24_2652__CMP;
	value<2> i_procmux_24_2638__CMP;
	value<2> i_procmux_24_2635__CMP;
	value<2> i_procmux_24_2626__CMP;
	value<2> i_procmux_24_2623__CMP;
	value<2> i_procmux_24_2614__CMP;
	value<2> i_procmux_24_2611__CMP;
	value<2> i_procmux_24_2602__CMP;
	value<2> i_procmux_24_2599__CMP;
	value<2> i_procmux_24_2590__CMP;
	value<2> i_procmux_24_2587__CMP;
	value<2> i_procmux_24_2578__CMP;
	value<2> i_procmux_24_2575__CMP;
	value<2> i_procmux_24_2566__CMP;
	value<2> i_procmux_24_2555__CMP;
	value<2> i_procmux_24_2543__CMP;
	value<2> i_procmux_24_2531__CMP;
	value<2> i_procmux_24_2519__CMP;
	value<2> i_procmux_24_2508__CMP;
	value<3> i_procmux_24_2506__CMP;
	value<2> i_procmux_24_2505__CMP;
	value<11> i_procmux_24_2504__CMP;
	value<2> i_procmux_24_2494__CMP;
	value<3> i_procmux_24_2492__CMP;
	value<2> i_procmux_24_2491__CMP;
	value<11> i_procmux_24_2490__CMP;
	value<2> i_procmux_24_2480__CMP;
	value<3> i_procmux_24_2478__CMP;
	value<2> i_procmux_24_2463__CMP;
	value<3> i_procmux_24_2461__CMP;
	value<2> i_procmux_24_2446__CMP;
	value<3> i_procmux_24_2444__CMP;
	value<2> i_procmux_24_2426__CMP;
	value<3> i_procmux_24_2424__CMP;
	value<2> i_procmux_24_2406__CMP;
	value<2> i_procmux_24_2404__CMP;
	value<2> i_procmux_24_2390__CMP;
	value<2> i_procmux_24_2387__CMP;
	value<2> i_procmux_24_2378__CMP;
	value<2> i_procmux_24_2375__CMP;
	value<2> i_procmux_24_2349__CMP;
	value<2> i_procmux_24_2348__CMP;
	value<2> i_procmux_24_2332__CMP;
	value<2> i_procmux_24_2320__CMP;
	value<2> i_procmux_24_2286__CMP;
	value<2> i_procmux_24_2270__CMP;
	value<2> i_procmux_24_2254__CMP;
	value<2> i_procmux_24_2235__CMP;
	value<2> i_procmux_24_2216__CMP;
	value<2> i_procmux_24_2197__CMP;
	value<4> i_procmux_24_2196__CMP;
	value<2> i_procmux_24_2171__CMP;
	value<2> i_procmux_24_2170__CMP;
	value<4> i_procmux_24_2169__CMP;
	value<2> i_procmux_24_2135__CMP;
	value<2> i_procmux_24_2132__CMP;
	value<2> i_procmux_24_2123__CMP;
	value<2> i_procmux_24_2120__CMP;
	value<2> i_procmux_24_2109__CMP;
	value<4> i_procmux_24_2107__CMP;
	value<2> i_procmux_24_2097__CMP;
	value<4> i_procmux_24_2071__CMP;
	value<4> i_procmux_24_2021__CMP;
	value<2> i_procmux_24_2011__CMP;
	value<2> i_procmux_24_1999__CMP;
	value<4> i_procmux_24_1998__CMP;
	value<2> i_procmux_24_1988__CMP;
	value<6> i_procmux_24_1976__CMP;
	value<2> i_procmux_24_1968__CMP;
	value<3> i_procmux_24_1898__CMP;
	value<2> i_procmux_24_1886__CMP;
	value<12> i_procmux_24_1884__CMP;
	value<2> i_procmux_24_1875__CMP;
	value<2> i_procmux_24_1872__CMP;
	value<2> i_procmux_24_1864__CMP;
	value<2> i_procmux_24_1861__CMP;
	value<2> i_procmux_24_1853__CMP;
	value<2> i_procmux_24_1850__CMP;
	value<2> i_procmux_24_1842__CMP;
	value<3> i_procmux_24_1840__CMP;
	value<2> i_procmux_24_1827__CMP;
	value<2> i_procmux_24_1824__CMP;
	value<2> i_procmux_24_1816__CMP;
	value<2> i_procmux_24_1813__CMP;
	value<2> i_procmux_24_1805__CMP;
	value<2> i_procmux_24_1802__CMP;
	value<2> i_procmux_24_1794__CMP;
	value<2> i_procmux_24_1791__CMP;
	value<2> i_procmux_24_1783__CMP;
	value<2> i_procmux_24_1780__CMP;
	value<2> i_procmux_24_1762__CMP;
	value<2> i_procmux_24_1759__CMP;
	value<2> i_procmux_24_1751__CMP;
	value<2> i_procmux_24_1748__CMP;
	value<2> i_procmux_24_1740__CMP;
	value<3> i_procmux_24_1738__CMP;
	value<2> i_procmux_24_1725__CMP;
	value<2> i_procmux_24_1723__CMP;
	value<2> i_procmux_24_1711__CMP;
	value<9> i_procmux_24_1709__CMP;
	value<2> i_procmux_24_1695__CMP;
	value<9> i_procmux_24_1693__CMP;
	value<3> i_procmux_24_1692__CMP;
	value<2> i_procmux_24_1691__CMP;
	value<2> i_procmux_24_1679__CMP;
	value<9> i_procmux_24_1677__CMP;
	value<3> i_procmux_24_1676__CMP;
	value<2> i_procmux_24_1675__CMP;
	value<2> i_procmux_24_1663__CMP;
	value<9> i_procmux_24_1661__CMP;
	value<2> i_procmux_24_1647__CMP;
	value<2> i_procmux_24_1644__CMP;
	value<2> i_procmux_24_1636__CMP;
	value<2> i_procmux_24_1633__CMP;
	value<3> i_procmux_24_1623__CMP;
	value<2> i_procmux_24_1609__CMP;
	value<9> i_procmux_24_1596__CMP;
	value<9> i_procmux_24_1581__CMP;
	value<3> i_procmux_24_1580__CMP;
	value<2> i_procmux_24_1579__CMP;
	value<9> i_procmux_24_1566__CMP;
	value<3> i_procmux_24_1565__CMP;
	value<2> i_procmux_24_1564__CMP;
	value<2> i_procmux_24_1539__CMP;
	value<2> i_procmux_24_1536__CMP;
	value<2> i_procmux_24_1528__CMP;
	value<2> i_procmux_24_1526__CMP;
	value<7> i_procmux_24_1525__CMP;
	value<2> i_procmux_24_1516__CMP;
	value<2> i_procmux_24_1514__CMP;
	value<7> i_procmux_24_1513__CMP;
	value<2> i_procmux_24_1504__CMP;
	value<12> i_procmux_24_1502__CMP;
	value<2> i_procmux_24_1493__CMP;
	value<2> i_procmux_24_1483__CMP;
	value<2> i_procmux_24_1473__CMP;
	value<2> i_procmux_24_1470__CMP;
	value<2> i_procmux_24_1452__CMP;
	value<2> i_procmux_24_1449__CMP;
	value<2> i_procmux_24_1441__CMP;
	value<2> i_procmux_24_1438__CMP;
	value<3> i_procmux_24_1419__CMP;
	value<2> i_procmux_24_1418__CMP;
	value<3> i_procmux_24_1409__CMP;
	value<3> i_procmux_24_1399__CMP;
	value<2> i_procmux_24_1389__CMP;
	value<2> i_procmux_24_1365__CMP;
	value<2> i_procmux_24_1351__CMP;
	value<2> i_procmux_24_1348__CMP;
	value<2> i_procmux_24_1341__CMP;
	value<2> i_procmux_24_1338__CMP;
	value<2> i_procmux_24_1331__CMP;
	value<2> i_procmux_24_1328__CMP;
	value<2> i_procmux_24_1321__CMP;
	value<2> i_procmux_24_1318__CMP;
	value<2> i_procmux_24_1311__CMP;
	value<2> i_procmux_24_1308__CMP;
	value<2> i_procmux_24_1301__CMP;
	value<2> i_procmux_24_1298__CMP;
	value<2> i_procmux_24_1291__CMP;
	value<2> i_procmux_24_1288__CMP;
	value<2> i_procmux_24_1281__CMP;
	value<2> i_procmux_24_1278__CMP;
	value<2> i_procmux_24_1271__CMP;
	value<2> i_procmux_24_1268__CMP;
	value<3> i_procmux_24_1259__CMP;
	value<2> i_procmux_24_1251__CMP;
	value<2> i_procmux_24_1237__CMP;
	value<6> i_procmux_24_1235__CMP;
	value<2> i_procmux_24_1224__CMP;
	value<6> i_procmux_24_1221__CMP;
	value<2> i_procmux_24_1210__CMP;
	value<6> i_procmux_24_1207__CMP;
	value<2> i_procmux_24_1196__CMP;
	value<6> i_procmux_24_1194__CMP;
	value<2> i_procmux_24_1170__CMP;
	value<6> i_procmux_24_1168__CMP;
	value<6> i_procmux_24_1145__CMP;
	value<6> i_procmux_24_1132__CMP;
	value<6> i_procmux_24_1119__CMP;
	value<2> i_procmux_24_1097__CMP;
	value<2> i_procmux_24_1094__CMP;
	value<2> i_procmux_24_1087__CMP;
	value<2> i_procmux_24_1084__CMP;
	value<2> i_procmux_24_1077__CMP;
	value<2> i_procmux_24_1074__CMP;
	value<2> i_procmux_24_1073__CMP;
	value<2> i_procmux_24_1065__CMP;
	value<2> i_procmux_24_1062__CMP;
	value<2> i_procmux_24_1061__CMP;
	value<2> i_procmux_24_1053__CMP;
	value<2> i_procmux_24_1051__CMP;
	value<2> i_procmux_24_1039__CMP;
	value<2> i_procmux_24_1037__CMP;
	value<2> i_procmux_24_1025__CMP;
	value<2> i_procmux_24_1023__CMP;
	value<2> i_procmux_24_1012__CMP;
	value<2> i_procmux_24_1010__CMP;
	value<2> i_procmux_24_999__CMP;
	value<6> i_procmux_24_997__CMP;
	value<2> i_procmux_24_989__CMP;
	value<2> i_procmux_24_978__CMP;
	value<2> i_procmux_24_967__CMP;
	value<2> i_procmux_24_964__CMP;
	value<2> i_procmux_24_957__CMP;
	value<2> i_procmux_24_954__CMP;
	value<3> i_procmux_24_945__CMP;
	value<3> i_procmux_24_944__CMP;
	value<3> i_procmux_24_935__CMP;
	value<3> i_procmux_24_916__CMP;
	value<3> i_procmux_24_915__CMP;
	value<2> i_procmux_24_908__CMP;
	value<2> i_procmux_24_905__CMP;
	value<2> i_procmux_24_898__CMP;
	value<2> i_procmux_24_895__CMP;
	value<6> i_procmux_24_886__CMP;
	value<6> i_procmux_24_878__CMP;
	value<8> i_procmux_24_578__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:119.2-137.15
	value<8> i_flatten_5c_DUT_2e__24_4_5c_bus_5b_7_3a_0_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:119.2-137.15
	value<8> i_flatten_5c_DUT_2e__24_5_5c_bus_5b_7_3a_0_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:280.32-280.37|i8008_core.v:164.6-172.3
	value<9> i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_280_24_40__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:276.31-276.58|i8008_core.v:164.6-172.3
	value<9> i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_276_24_36__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:276.42-276.57|i8008_core.v:164.6-172.3
	value<9> i_flatten_5c_DUT_2e__5c_Unit_2e__24_and_24_i8008__core_2e_v_3a_276_24_35__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:275.31-275.36|i8008_core.v:164.6-172.3
	value<9> i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_275_24_33__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:274.31-274.58|i8008_core.v:164.6-172.3
	value<9> i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_274_24_32__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:274.42-274.57|i8008_core.v:164.6-172.3
	value<9> i_flatten_5c_DUT_2e__5c_Unit_2e__24_and_24_i8008__core_2e_v_3a_274_24_31__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:273.31-273.36|i8008_core.v:164.6-172.3
	value<9> i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_273_24_29__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:252.31-252.36|i8008_core.v:164.6-172.3
	value<32> i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_252_24_28__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:251.31-251.36|i8008_core.v:164.6-172.3
	value<32> i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_251_24_27__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:246.2-287.5|i8008_core.v:164.6-172.3
	value<8> i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_NA_5b_7_3a_0_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:246.2-287.5|i8008_core.v:164.6-172.3
	value<8> i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_d_5b_7_3a_0_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:719.19-719.21|i8008_core.v:176.4-182.3
	value<8> i_flatten_5c_DUT_2e__5c_rf_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_719_24_393__DATA;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:766.19-766.21|i8008_core.v:197.4-204.3
	value<14> i_flatten_5c_DUT_2e__5c_Stack_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_766_24_353__DATA;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:745.19-745.50|i8008_core.v:197.4-204.3
	value<8> i_flatten_5c_DUT_2e__5c_Stack_2e__24_ternary_24_i8008__core_2e_v_3a_745_24_287__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_78_5c_ctrl__signals_5b_7_3a_6_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_76_5c_ctrl__signals_5b_39_3a_38_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<4> i_flatten_5c_DUT_2e__5c_Brain_2e__24_72_5c_ctrl__signals_5b_14_3a_11_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_71_5c_ctrl__signals_5b_5_3a_4_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<4> i_flatten_5c_DUT_2e__5c_Brain_2e__24_68_5c_ctrl__signals_5b_14_3a_11_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_67_5c_ctrl__signals_5b_5_3a_4_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_65_5c_ctrl__signals_5b_39_3a_38_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_64_5c_ctrl__signals_5b_33_3a_32_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<5> i_flatten_5c_DUT_2e__5c_Brain_2e__24_60_5c_ctrl__signals_5b_7_3a_3_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<4> i_flatten_5c_DUT_2e__5c_Brain_2e__24_57_5c_ctrl__signals_5b_24_3a_21_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:540.11-540.46|i8008_core.v:205.14-214.3
	value<1> i_flatten_5c_DUT_2e__5c_Brain_2e__24_logic__and_24_i8008__core_2e_v_3a_540_24_84__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_51_5c_ctrl__signals_5b_39_3a_38_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_50_5c_ctrl__signals_5b_30_3a_29_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<4> i_flatten_5c_DUT_2e__5c_Brain_2e__24_47_5c_ctrl__signals_5b_14_3a_11_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_46_5c_ctrl__signals_5b_5_3a_4_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<4> i_flatten_5c_DUT_2e__5c_Brain_2e__24_42_5c_ctrl__signals_5b_14_3a_11_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_41_5c_ctrl__signals_5b_5_3a_4_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_39_5c_ctrl__signals_5b_39_3a_38_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_37_5c_ctrl__signals_5b_30_3a_29_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<5> i_flatten_5c_DUT_2e__5c_Brain_2e__24_33_5c_ctrl__signals_5b_14_3a_10_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<3> i_flatten_5c_DUT_2e__5c_Brain_2e__24_32_5c_ctrl__signals_5b_5_3a_3_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<9> i_flatten_5c_DUT_2e__5c_Brain_2e__24_28_5c_ctrl__signals_5b_24_3a_16_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:419.11-419.33|i8008_core.v:205.14-214.3
	value<1> i_flatten_5c_DUT_2e__5c_Brain_2e__24_eq_24_i8008__core_2e_v_3a_419_24_74__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<4> i_flatten_5c_DUT_2e__5c_Brain_2e__24_20_5c_ctrl__signals_5b_14_3a_11_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:387.13-387.26|i8008_core.v:205.14-214.3
	value<1> i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_387_24_68__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_18_5c_ctrl__signals_5b_33_3a_32_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<4> i_flatten_5c_DUT_2e__5c_Brain_2e__24_16_5c_ctrl__signals_5b_14_3a_11_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_14_5c_ctrl__signals_5b_7_3a_6_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:371.13-371.48|i8008_core.v:205.14-214.3
	value<1> i_flatten_5c_DUT_2e__5c_Brain_2e__24_or_24_i8008__core_2e_v_3a_371_24_67__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:360.13-360.27|i8008_core.v:205.14-214.3
	value<1> i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_360_24_62__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:347.11-347.31|i8008_core.v:205.14-214.3
	value<1> i_flatten_5c_DUT_2e__5c_Brain_2e__24_eq_24_i8008__core_2e_v_3a_347_24_61__Y;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<2> i_flatten_5c_DUT_2e__5c_Brain_2e__24_7_5c_ctrl__signals_5b_39_3a_38_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<5> i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<9> i_flatten_5c_DUT_2e__5c_Brain_2e__24_4_5c_ctrl__signals_5b_24_3a_16_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<6> i_flatten_5c_DUT_2e__5c_Brain_2e__24_3_5c_ctrl__signals_5b_14_3a_9_5d_;
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:325.2-678.5|i8008_core.v:205.14-214.3
	value<8> i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_;
	// \src: i8008_core.v:49.8-49.16
	value<1> i_not_24_i8008__core_2e_v_3a_49_24_2__Y;
	// connection
	p_DUT_2e_Brain_2e_SSS = p_DUT_2e_instr.curr.slice<2,0>().val();
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:387.13-387.26|i8008_core.v:205.14-214.3
	// cell $flatten\DUT.\Brain.$ne$i8008_core.v:387$68
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_387_24_68__Y = ne_uu<1>(p_DUT_2e_Brain_2e_SSS, value<3>{0x7u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2235_CMP0
	i_procmux_24_2235__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2235_CMP1
	i_procmux_24_2235__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2254_CMP0
	i_procmux_24_2254__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2254_CMP1
	i_procmux_24_2254__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2320_CMP0
	i_procmux_24_2320__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2320_CMP1
	i_procmux_24_2320__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2216_CMP0
	i_procmux_24_2216__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2216_CMP1
	i_procmux_24_2216__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x2u});
	// cells $procmux$2850 $procmux$2851_CMP0 $procmux$2852_CMP0 $procmux$2853_CMP0 $procmux$2854_CMP0 $flatten\DUT.\Brain.$not$i8008_core.v:321$57 $flatten\DUT.\Brain.$not$i8008_core.v:320$56 $flatten\DUT.\Brain.$not$i8008_core.v:319$55
	i_procmux_24_2850__Y = (eq_uu<1>(p_DUT_2e_instr.curr.slice<4,3>().val(), value<2>{0x3u}) ? p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr.slice<0>().val() : (eq_uu<1>(p_DUT_2e_instr.curr.slice<4,3>().val(), value<2>{0x2u}) ? not_u<1>(p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr.slice<1>().val()) : (eq_uu<1>(p_DUT_2e_instr.curr.slice<4,3>().val(), value<2>{0x1u}) ? not_u<1>(p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr.slice<2>().val()) : (logic_not<1>(p_DUT_2e_instr.curr.slice<4,3>().val()) ? not_u<1>(p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr.slice<3>().val()) : value<1>{0u}))));
	// connection
	p_DUT_2e_Brain_2e_CF = i_procmux_24_2850__Y;
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2270_CMP0
	i_procmux_24_2270__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2270_CMP1
	i_procmux_24_2270__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP0
	i_procmux_24_1884__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,4>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP1
	i_procmux_24_1884__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP2
	i_procmux_24_1884__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP3
	i_procmux_24_1884__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP4
	i_procmux_24_1884__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP5
	i_procmux_24_1884__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP6
	i_procmux_24_1884__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP7
	i_procmux_24_1884__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP8
	i_procmux_24_1884__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP9
	i_procmux_24_1884__CMP.slice<9>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP10
	i_procmux_24_1884__CMP.slice<10>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1884_CMP11
	i_procmux_24_1884__CMP.slice<11>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1675_CMP0
	i_procmux_24_1675__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,4>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1675_CMP1
	i_procmux_24_1675__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1676_CMP0
	i_procmux_24_1676__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1676_CMP1
	i_procmux_24_1676__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1676_CMP2
	i_procmux_24_1676__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1677_CMP0
	i_procmux_24_1677__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1677_CMP1
	i_procmux_24_1677__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1677_CMP2
	i_procmux_24_1677__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1677_CMP3
	i_procmux_24_1677__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1677_CMP4
	i_procmux_24_1677__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1677_CMP5
	i_procmux_24_1677__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1677_CMP6
	i_procmux_24_1677__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1677_CMP7
	i_procmux_24_1677__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1677_CMP8
	i_procmux_24_1677__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1564_CMP0
	i_procmux_24_1564__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,4>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1564_CMP1
	i_procmux_24_1564__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1565_CMP0
	i_procmux_24_1565__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1565_CMP1
	i_procmux_24_1565__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1565_CMP2
	i_procmux_24_1565__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1566_CMP0
	i_procmux_24_1566__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1566_CMP1
	i_procmux_24_1566__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1566_CMP2
	i_procmux_24_1566__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1566_CMP3
	i_procmux_24_1566__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1566_CMP4
	i_procmux_24_1566__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1566_CMP5
	i_procmux_24_1566__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1566_CMP6
	i_procmux_24_1566__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1566_CMP7
	i_procmux_24_1566__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1566_CMP8
	i_procmux_24_1566__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// cells $flatten\DUT.\Brain.$logic_and$i8008_core.v:540$84 $flatten\DUT.\Brain.$eq$i8008_core.v:540$83
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_logic__and_24_i8008__core_2e_v_3a_540_24_84__Y = logic_and<1>(eq_uu<1>(p_DUT_2e_instr.curr.slice<7,4>().val(), value<4>{0x4u}), p_DUT_2e_instr.curr.slice<0>().val());
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1207_CMP0
	i_procmux_24_1207__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1207_CMP1
	i_procmux_24_1207__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1207_CMP2
	i_procmux_24_1207__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1207_CMP3
	i_procmux_24_1207__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1207_CMP4
	i_procmux_24_1207__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1207_CMP5
	i_procmux_24_1207__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$1168_CMP0
	i_procmux_24_1168__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$1168_CMP1
	i_procmux_24_1168__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$1168_CMP2
	i_procmux_24_1168__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$1168_CMP3
	i_procmux_24_1168__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$1168_CMP4
	i_procmux_24_1168__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$1168_CMP5
	i_procmux_24_1168__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1119_CMP0
	i_procmux_24_1119__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1119_CMP1
	i_procmux_24_1119__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1119_CMP2
	i_procmux_24_1119__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1119_CMP3
	i_procmux_24_1119__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1119_CMP4
	i_procmux_24_1119__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1119_CMP5
	i_procmux_24_1119__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2196_CMP0
	i_procmux_24_2196__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2196_CMP1
	i_procmux_24_2196__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0xau});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2196_CMP2
	i_procmux_24_2196__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2196_CMP3
	i_procmux_24_2196__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2197_CMP0
	i_procmux_24_2197__CMP.slice<0>() = logic_not<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val());
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2197_CMP1
	i_procmux_24_2197__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2286_CMP0
	i_procmux_24_2286__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2286_CMP1
	i_procmux_24_2286__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x2u});
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:347.11-347.31|i8008_core.v:205.14-214.3
	// cell $flatten\DUT.\Brain.$eq$i8008_core.v:347$61
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_eq_24_i8008__core_2e_v_3a_347_24_61__Y = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x5u});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$997_CMP0
	i_procmux_24_997__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$997_CMP1
	i_procmux_24_997__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$997_CMP2
	i_procmux_24_997__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$997_CMP3
	i_procmux_24_997__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$997_CMP4
	i_procmux_24_997__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:628.7-637.14
	// cell $procmux$997_CMP5
	i_procmux_24_997__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$944_CMP0
	i_procmux_24_944__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$944_CMP1
	i_procmux_24_944__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$944_CMP2
	i_procmux_24_944__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$945_CMP0
	i_procmux_24_945__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$945_CMP1
	i_procmux_24_945__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$945_CMP2
	i_procmux_24_945__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP0
	i_procmux_24_1502__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,4>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP1
	i_procmux_24_1502__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP2
	i_procmux_24_1502__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP3
	i_procmux_24_1502__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP4
	i_procmux_24_1502__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP5
	i_procmux_24_1502__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP6
	i_procmux_24_1502__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP7
	i_procmux_24_1502__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP8
	i_procmux_24_1502__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP9
	i_procmux_24_1502__CMP.slice<9>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP10
	i_procmux_24_1502__CMP.slice<10>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:527.7-536.14
	// cell $procmux$1502_CMP11
	i_procmux_24_1502__CMP.slice<11>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1609_CMP0
	i_procmux_24_1609__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,4>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1609_CMP1
	i_procmux_24_1609__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1409_CMP0
	i_procmux_24_1409__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1409_CMP1
	i_procmux_24_1409__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1409_CMP2
	i_procmux_24_1409__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,4>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$886_CMP0
	i_procmux_24_886__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$886_CMP1
	i_procmux_24_886__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$886_CMP2
	i_procmux_24_886__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$886_CMP3
	i_procmux_24_886__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$886_CMP4
	i_procmux_24_886__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$886_CMP5
	i_procmux_24_886__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2348_CMP0
	i_procmux_24_2348__CMP.slice<0>() = logic_not<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val());
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2348_CMP1
	i_procmux_24_2348__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2349_CMP0
	i_procmux_24_2349__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2349_CMP1
	i_procmux_24_2349__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2169_CMP0
	i_procmux_24_2169__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2169_CMP1
	i_procmux_24_2169__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0xau});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2169_CMP2
	i_procmux_24_2169__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2169_CMP3
	i_procmux_24_2169__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2170_CMP0
	i_procmux_24_2170__CMP.slice<0>() = logic_not<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val());
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2170_CMP1
	i_procmux_24_2170__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2171_CMP0
	i_procmux_24_2171__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2171_CMP1
	i_procmux_24_2171__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2097_CMP0
	i_procmux_24_2097__CMP.slice<0>() = logic_not<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val());
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2097_CMP1
	i_procmux_24_2097__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2332_CMP0
	i_procmux_24_2332__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:385.7-418.14
	// cell $procmux$2332_CMP1
	i_procmux_24_2332__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0xbu});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2107_CMP0
	i_procmux_24_2107__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2107_CMP1
	i_procmux_24_2107__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0xau});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2107_CMP2
	i_procmux_24_2107__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2107_CMP3
	i_procmux_24_2107__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2109_CMP0
	i_procmux_24_2109__CMP.slice<0>() = logic_not<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val());
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2109_CMP1
	i_procmux_24_2109__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$935_CMP0
	i_procmux_24_935__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$935_CMP1
	i_procmux_24_935__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$935_CMP2
	i_procmux_24_935__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1709_CMP0
	i_procmux_24_1709__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1709_CMP1
	i_procmux_24_1709__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1709_CMP2
	i_procmux_24_1709__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1709_CMP3
	i_procmux_24_1709__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1709_CMP4
	i_procmux_24_1709__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1709_CMP5
	i_procmux_24_1709__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1709_CMP6
	i_procmux_24_1709__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1709_CMP7
	i_procmux_24_1709__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1709_CMP8
	i_procmux_24_1709__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1661_CMP0
	i_procmux_24_1661__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1661_CMP1
	i_procmux_24_1661__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1661_CMP2
	i_procmux_24_1661__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1661_CMP3
	i_procmux_24_1661__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1661_CMP4
	i_procmux_24_1661__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1661_CMP5
	i_procmux_24_1661__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1661_CMP6
	i_procmux_24_1661__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1661_CMP7
	i_procmux_24_1661__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1661_CMP8
	i_procmux_24_1661__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1596_CMP0
	i_procmux_24_1596__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1596_CMP1
	i_procmux_24_1596__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1596_CMP2
	i_procmux_24_1596__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1596_CMP3
	i_procmux_24_1596__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1596_CMP4
	i_procmux_24_1596__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1596_CMP5
	i_procmux_24_1596__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1596_CMP6
	i_procmux_24_1596__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1596_CMP7
	i_procmux_24_1596__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1596_CMP8
	i_procmux_24_1596__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1235_CMP0
	i_procmux_24_1235__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1235_CMP1
	i_procmux_24_1235__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1235_CMP2
	i_procmux_24_1235__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1235_CMP3
	i_procmux_24_1235__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1235_CMP4
	i_procmux_24_1235__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1235_CMP5
	i_procmux_24_1235__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1194_CMP0
	i_procmux_24_1194__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1194_CMP1
	i_procmux_24_1194__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1194_CMP2
	i_procmux_24_1194__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1194_CMP3
	i_procmux_24_1194__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1194_CMP4
	i_procmux_24_1194__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1194_CMP5
	i_procmux_24_1194__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1145_CMP0
	i_procmux_24_1145__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1145_CMP1
	i_procmux_24_1145__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1145_CMP2
	i_procmux_24_1145__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1145_CMP3
	i_procmux_24_1145__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1145_CMP4
	i_procmux_24_1145__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1145_CMP5
	i_procmux_24_1145__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$1259_CMP0
	i_procmux_24_1259__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$1259_CMP1
	i_procmux_24_1259__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$1259_CMP2
	i_procmux_24_1259__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$915_CMP0
	i_procmux_24_915__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$915_CMP1
	i_procmux_24_915__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$915_CMP2
	i_procmux_24_915__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$916_CMP0
	i_procmux_24_916__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$916_CMP1
	i_procmux_24_916__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:641.7-654.14
	// cell $procmux$916_CMP2
	i_procmux_24_916__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$1976_CMP0
	i_procmux_24_1976__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$1976_CMP1
	i_procmux_24_1976__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$1976_CMP2
	i_procmux_24_1976__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$1976_CMP3
	i_procmux_24_1976__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$1976_CMP4
	i_procmux_24_1976__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$1976_CMP5
	i_procmux_24_1976__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$878_CMP0
	i_procmux_24_878__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$878_CMP1
	i_procmux_24_878__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$878_CMP2
	i_procmux_24_878__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$878_CMP3
	i_procmux_24_878__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$878_CMP4
	i_procmux_24_878__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:659.7-665.14
	// cell $procmux$878_CMP5
	i_procmux_24_878__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2071_CMP0
	i_procmux_24_2071__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2071_CMP1
	i_procmux_24_2071__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0xau});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2071_CMP2
	i_procmux_24_2071__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2071_CMP3
	i_procmux_24_2071__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2838_CMP0
	i_procmux_24_2838__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2838_CMP1
	i_procmux_24_2838__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0xau});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2838_CMP2
	i_procmux_24_2838__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2838_CMP3
	i_procmux_24_2838__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2840_CMP0
	i_procmux_24_2840__CMP.slice<0>() = logic_not<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val());
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2840_CMP1
	i_procmux_24_2840__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2021_CMP0
	i_procmux_24_2021__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2021_CMP1
	i_procmux_24_2021__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0xau});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2021_CMP2
	i_procmux_24_2021__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2021_CMP3
	i_procmux_24_2021__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2011_CMP0
	i_procmux_24_2011__CMP.slice<0>() = logic_not<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val());
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$2011_CMP1
	i_procmux_24_2011__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$1998_CMP0
	i_procmux_24_1998__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$1998_CMP1
	i_procmux_24_1998__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0xau});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$1998_CMP2
	i_procmux_24_1998__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$1998_CMP3
	i_procmux_24_1998__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$1999_CMP0
	i_procmux_24_1999__CMP.slice<0>() = logic_not<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val());
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$1999_CMP1
	i_procmux_24_1999__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$1988_CMP0
	i_procmux_24_1988__CMP.slice<0>() = logic_not<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val());
	// \full_case: 1
	// \src: i8008_core.v:427.7-458.14
	// cell $procmux$1988_CMP1
	i_procmux_24_1988__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1898_CMP0
	i_procmux_24_1898__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1898_CMP1
	i_procmux_24_1898__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1898_CMP2
	i_procmux_24_1898__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1840_CMP0
	i_procmux_24_1840__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1840_CMP1
	i_procmux_24_1840__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1840_CMP2
	i_procmux_24_1840__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1738_CMP0
	i_procmux_24_1738__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1738_CMP1
	i_procmux_24_1738__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1738_CMP2
	i_procmux_24_1738__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1623_CMP0
	i_procmux_24_1623__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1623_CMP1
	i_procmux_24_1623__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1623_CMP2
	i_procmux_24_1623__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x17u});
	// connection
	p_DUT_2e_Brain_2e_DDD = p_DUT_2e_instr.curr.slice<5,3>().val();
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1399_CMP0
	i_procmux_24_1399__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1399_CMP1
	i_procmux_24_1399__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1399_CMP2
	i_procmux_24_1399__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,4>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1418_CMP0
	i_procmux_24_1418__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1418_CMP1
	i_procmux_24_1418__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1419_CMP0
	i_procmux_24_1419__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1419_CMP1
	i_procmux_24_1419__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1419_CMP2
	i_procmux_24_1419__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,4>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1691_CMP0
	i_procmux_24_1691__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,4>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1691_CMP1
	i_procmux_24_1691__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1692_CMP0
	i_procmux_24_1692__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1692_CMP1
	i_procmux_24_1692__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1692_CMP2
	i_procmux_24_1692__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1693_CMP0
	i_procmux_24_1693__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1693_CMP1
	i_procmux_24_1693__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1693_CMP2
	i_procmux_24_1693__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1693_CMP3
	i_procmux_24_1693__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1693_CMP4
	i_procmux_24_1693__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1693_CMP5
	i_procmux_24_1693__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1693_CMP6
	i_procmux_24_1693__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1693_CMP7
	i_procmux_24_1693__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1693_CMP8
	i_procmux_24_1693__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1579_CMP0
	i_procmux_24_1579__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,4>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1579_CMP1
	i_procmux_24_1579__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1580_CMP0
	i_procmux_24_1580__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1580_CMP1
	i_procmux_24_1580__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1580_CMP2
	i_procmux_24_1580__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1581_CMP0
	i_procmux_24_1581__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1581_CMP1
	i_procmux_24_1581__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1581_CMP2
	i_procmux_24_1581__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1581_CMP3
	i_procmux_24_1581__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1581_CMP4
	i_procmux_24_1581__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1581_CMP5
	i_procmux_24_1581__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1581_CMP6
	i_procmux_24_1581__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1581_CMP7
	i_procmux_24_1581__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:494.7-512.14
	// cell $procmux$1581_CMP8
	i_procmux_24_1581__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1221_CMP0
	i_procmux_24_1221__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1221_CMP1
	i_procmux_24_1221__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1221_CMP2
	i_procmux_24_1221__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1221_CMP3
	i_procmux_24_1221__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1221_CMP4
	i_procmux_24_1221__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:572.7-585.14
	// cell $procmux$1221_CMP5
	i_procmux_24_1221__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1132_CMP0
	i_procmux_24_1132__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1132_CMP1
	i_procmux_24_1132__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1132_CMP2
	i_procmux_24_1132__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1132_CMP3
	i_procmux_24_1132__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1132_CMP4
	i_procmux_24_1132__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:590.7-603.14
	// cell $procmux$1132_CMP5
	i_procmux_24_1132__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1723_CMP0
	i_procmux_24_1723__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,4>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:471.7-489.14
	// cell $procmux$1723_CMP1
	i_procmux_24_1723__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1968_CMP0
	i_procmux_24_1968__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1968_CMP1
	i_procmux_24_1968__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1389_CMP0
	i_procmux_24_1389__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:548.7-561.14
	// cell $procmux$1389_CMP1
	i_procmux_24_1389__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2519_CMP0
	i_procmux_24_2519__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2519_CMP1
	i_procmux_24_2519__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1886_CMP0
	i_procmux_24_1886__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1886_CMP1
	i_procmux_24_1886__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1679_CMP0
	i_procmux_24_1679__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1679_CMP1
	i_procmux_24_1679__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1483_CMP0
	i_procmux_24_1483__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1483_CMP1
	i_procmux_24_1483__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1210_CMP0
	i_procmux_24_1210__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1210_CMP1
	i_procmux_24_1210__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1170_CMP0
	i_procmux_24_1170__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1170_CMP1
	i_procmux_24_1170__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$989_CMP0
	i_procmux_24_989__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$989_CMP1
	i_procmux_24_989__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2566_CMP0
	i_procmux_24_2566__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2566_CMP1
	i_procmux_24_2566__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2555_CMP0
	i_procmux_24_2555__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2555_CMP1
	i_procmux_24_2555__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$999_CMP0
	i_procmux_24_999__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$999_CMP1
	i_procmux_24_999__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1504_CMP0
	i_procmux_24_1504__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1504_CMP1
	i_procmux_24_1504__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1493_CMP0
	i_procmux_24_1493__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1493_CMP1
	i_procmux_24_1493__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$978_CMP0
	i_procmux_24_978__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$978_CMP1
	i_procmux_24_978__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// cells $procmux$2323 $procmux$2324_CMP0 $procmux$2321 $procmux$2322_CMP0 $procmux$2319 $procmux$2320_ANY $procmux$2317
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_20_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2320__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_387_24_68__Y ? p_DUT_2e_instr.curr.slice<2,0>().val() : value<3>{0u}) : value<3>{0u}) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$2219 $procmux$2220_CMP0 $procmux$2217 $procmux$2218_CMP0 $procmux$2215 $procmux$2216_ANY $procmux$2213
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_20_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2216__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_387_24_68__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2531_CMP0
	i_procmux_24_2531__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2531_CMP1
	i_procmux_24_2531__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2543_CMP0
	i_procmux_24_2543__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2543_CMP1
	i_procmux_24_2543__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1711_CMP0
	i_procmux_24_1711__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1711_CMP1
	i_procmux_24_1711__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1663_CMP0
	i_procmux_24_1663__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1663_CMP1
	i_procmux_24_1663__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1237_CMP0
	i_procmux_24_1237__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1237_CMP1
	i_procmux_24_1237__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1196_CMP0
	i_procmux_24_1196__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1196_CMP1
	i_procmux_24_1196__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1842_CMP0
	i_procmux_24_1842__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1842_CMP1
	i_procmux_24_1842__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1740_CMP0
	i_procmux_24_1740__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1740_CMP1
	i_procmux_24_1740__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1365_CMP0
	i_procmux_24_1365__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1365_CMP1
	i_procmux_24_1365__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1251_CMP0
	i_procmux_24_1251__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1251_CMP1
	i_procmux_24_1251__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1695_CMP0
	i_procmux_24_1695__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1695_CMP1
	i_procmux_24_1695__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1224_CMP0
	i_procmux_24_1224__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1224_CMP1
	i_procmux_24_1224__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1725_CMP0
	i_procmux_24_1725__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1725_CMP1
	i_procmux_24_1725__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2663_CMP0
	i_procmux_24_2663__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2663_CMP1
	i_procmux_24_2663__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2666_CMP0
	i_procmux_24_2666__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2666_CMP1
	i_procmux_24_2666__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2120_CMP0
	i_procmux_24_2120__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2120_CMP1
	i_procmux_24_2120__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2123_CMP0
	i_procmux_24_2123__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2123_CMP1
	i_procmux_24_2123__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1536_CMP0
	i_procmux_24_1536__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1536_CMP1
	i_procmux_24_1536__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1539_CMP0
	i_procmux_24_1539__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1539_CMP1
	i_procmux_24_1539__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1438_CMP0
	i_procmux_24_1438__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1438_CMP1
	i_procmux_24_1438__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1441_CMP0
	i_procmux_24_1441__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1441_CMP1
	i_procmux_24_1441__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$954_CMP0
	i_procmux_24_954__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$954_CMP1
	i_procmux_24_954__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$957_CMP0
	i_procmux_24_957__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$957_CMP1
	i_procmux_24_957__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$895_CMP0
	i_procmux_24_895__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$895_CMP1
	i_procmux_24_895__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$898_CMP0
	i_procmux_24_898__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$898_CMP1
	i_procmux_24_898__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2735_CMP0
	i_procmux_24_2735__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2735_CMP1
	i_procmux_24_2735__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2738_CMP0
	i_procmux_24_2738__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2738_CMP1
	i_procmux_24_2738__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2635_CMP0
	i_procmux_24_2635__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2635_CMP1
	i_procmux_24_2635__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2638_CMP0
	i_procmux_24_2638__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2638_CMP1
	i_procmux_24_2638__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2587_CMP0
	i_procmux_24_2587__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2587_CMP1
	i_procmux_24_2587__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2590_CMP0
	i_procmux_24_2590__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2590_CMP1
	i_procmux_24_2590__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2575_CMP0
	i_procmux_24_2575__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2575_CMP1
	i_procmux_24_2575__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2578_CMP0
	i_procmux_24_2578__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2578_CMP1
	i_procmux_24_2578__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1318_CMP0
	i_procmux_24_1318__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1318_CMP1
	i_procmux_24_1318__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1321_CMP0
	i_procmux_24_1321__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1321_CMP1
	i_procmux_24_1321__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1084_CMP0
	i_procmux_24_1084__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1084_CMP1
	i_procmux_24_1084__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1087_CMP0
	i_procmux_24_1087__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1087_CMP1
	i_procmux_24_1087__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1824_CMP0
	i_procmux_24_1824__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1824_CMP1
	i_procmux_24_1824__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1827_CMP0
	i_procmux_24_1827__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1827_CMP1
	i_procmux_24_1827__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1470_CMP0
	i_procmux_24_1470__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1470_CMP1
	i_procmux_24_1470__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1473_CMP0
	i_procmux_24_1473__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1473_CMP1
	i_procmux_24_1473__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1338_CMP0
	i_procmux_24_1338__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1338_CMP1
	i_procmux_24_1338__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1341_CMP0
	i_procmux_24_1341__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1341_CMP1
	i_procmux_24_1341__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2611_CMP0
	i_procmux_24_2611__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2611_CMP1
	i_procmux_24_2611__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2614_CMP0
	i_procmux_24_2614__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2614_CMP1
	i_procmux_24_2614__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2599_CMP0
	i_procmux_24_2599__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2599_CMP1
	i_procmux_24_2599__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2602_CMP0
	i_procmux_24_2602__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2602_CMP1
	i_procmux_24_2602__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2387_CMP0
	i_procmux_24_2387__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2387_CMP1
	i_procmux_24_2387__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2390_CMP0
	i_procmux_24_2390__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2390_CMP1
	i_procmux_24_2390__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2132_CMP0
	i_procmux_24_2132__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2132_CMP1
	i_procmux_24_2132__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2135_CMP0
	i_procmux_24_2135__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2135_CMP1
	i_procmux_24_2135__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1348_CMP0
	i_procmux_24_1348__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1348_CMP1
	i_procmux_24_1348__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1351_CMP0
	i_procmux_24_1351__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1351_CMP1
	i_procmux_24_1351__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2783_CMP0
	i_procmux_24_2783__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2783_CMP1
	i_procmux_24_2783__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2786_CMP0
	i_procmux_24_2786__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2786_CMP1
	i_procmux_24_2786__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2747_CMP0
	i_procmux_24_2747__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2747_CMP1
	i_procmux_24_2747__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2750_CMP0
	i_procmux_24_2750__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2750_CMP1
	i_procmux_24_2750__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2699_CMP0
	i_procmux_24_2699__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2699_CMP1
	i_procmux_24_2699__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2702_CMP0
	i_procmux_24_2702__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2702_CMP1
	i_procmux_24_2702__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2687_CMP0
	i_procmux_24_2687__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2687_CMP1
	i_procmux_24_2687__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2690_CMP0
	i_procmux_24_2690__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2690_CMP1
	i_procmux_24_2690__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2675_CMP0
	i_procmux_24_2675__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2675_CMP1
	i_procmux_24_2675__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2678_CMP0
	i_procmux_24_2678__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2678_CMP1
	i_procmux_24_2678__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2623_CMP0
	i_procmux_24_2623__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2623_CMP1
	i_procmux_24_2623__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2626_CMP0
	i_procmux_24_2626__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2626_CMP1
	i_procmux_24_2626__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2375_CMP0
	i_procmux_24_2375__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2375_CMP1
	i_procmux_24_2375__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2378_CMP0
	i_procmux_24_2378__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2378_CMP1
	i_procmux_24_2378__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1748_CMP0
	i_procmux_24_1748__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1748_CMP1
	i_procmux_24_1748__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1751_CMP0
	i_procmux_24_1751__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1751_CMP1
	i_procmux_24_1751__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1644_CMP0
	i_procmux_24_1644__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1644_CMP1
	i_procmux_24_1644__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1647_CMP0
	i_procmux_24_1647__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1647_CMP1
	i_procmux_24_1647__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1328_CMP0
	i_procmux_24_1328__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1328_CMP1
	i_procmux_24_1328__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1331_CMP0
	i_procmux_24_1331__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1331_CMP1
	i_procmux_24_1331__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1278_CMP0
	i_procmux_24_1278__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1278_CMP1
	i_procmux_24_1278__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1281_CMP0
	i_procmux_24_1281__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1281_CMP1
	i_procmux_24_1281__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1094_CMP0
	i_procmux_24_1094__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1094_CMP1
	i_procmux_24_1094__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1097_CMP0
	i_procmux_24_1097__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1097_CMP1
	i_procmux_24_1097__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$964_CMP0
	i_procmux_24_964__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$964_CMP1
	i_procmux_24_964__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$967_CMP0
	i_procmux_24_967__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$967_CMP1
	i_procmux_24_967__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$905_CMP0
	i_procmux_24_905__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$905_CMP1
	i_procmux_24_905__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$908_CMP0
	i_procmux_24_908__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$908_CMP1
	i_procmux_24_908__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1850_CMP0
	i_procmux_24_1850__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1850_CMP1
	i_procmux_24_1850__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1853_CMP0
	i_procmux_24_1853__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1853_CMP1
	i_procmux_24_1853__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2759_CMP0
	i_procmux_24_2759__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2759_CMP1
	i_procmux_24_2759__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2762_CMP0
	i_procmux_24_2762__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2762_CMP1
	i_procmux_24_2762__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2771_CMP0
	i_procmux_24_2771__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2771_CMP1
	i_procmux_24_2771__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2774_CMP0
	i_procmux_24_2774__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2774_CMP1
	i_procmux_24_2774__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1780_CMP0
	i_procmux_24_1780__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1780_CMP1
	i_procmux_24_1780__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1783_CMP0
	i_procmux_24_1783__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1783_CMP1
	i_procmux_24_1783__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1633_CMP0
	i_procmux_24_1633__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1633_CMP1
	i_procmux_24_1633__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1636_CMP0
	i_procmux_24_1636__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1636_CMP1
	i_procmux_24_1636__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1449_CMP0
	i_procmux_24_1449__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1449_CMP1
	i_procmux_24_1449__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1452_CMP0
	i_procmux_24_1452__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1452_CMP1
	i_procmux_24_1452__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1268_CMP0
	i_procmux_24_1268__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1268_CMP1
	i_procmux_24_1268__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1271_CMP0
	i_procmux_24_1271__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1271_CMP1
	i_procmux_24_1271__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1791_CMP0
	i_procmux_24_1791__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1791_CMP1
	i_procmux_24_1791__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1794_CMP0
	i_procmux_24_1794__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1794_CMP1
	i_procmux_24_1794__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1288_CMP0
	i_procmux_24_1288__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1288_CMP1
	i_procmux_24_1288__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1291_CMP0
	i_procmux_24_1291__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1291_CMP1
	i_procmux_24_1291__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1759_CMP0
	i_procmux_24_1759__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1759_CMP1
	i_procmux_24_1759__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1762_CMP0
	i_procmux_24_1762__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1762_CMP1
	i_procmux_24_1762__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1861_CMP0
	i_procmux_24_1861__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1861_CMP1
	i_procmux_24_1861__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1864_CMP0
	i_procmux_24_1864__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1864_CMP1
	i_procmux_24_1864__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1872_CMP0
	i_procmux_24_1872__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1872_CMP1
	i_procmux_24_1872__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1875_CMP0
	i_procmux_24_1875__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1875_CMP1
	i_procmux_24_1875__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// cells $procmux$1887 $procmux$1888_CMP0 $procmux$1885 $procmux$1886_ANY $procmux$1883 $procmux$1884_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_51_5c_ctrl__signals_5b_39_3a_38_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1886__CMP) ? (reduce_or<1>(i_procmux_24_1884__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1484 $procmux$1485_CMP0 $procmux$1482 $procmux$1483_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_51_5c_ctrl__signals_5b_39_3a_38_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1483__CMP) ? value<1>{0u} : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1171 $procmux$1172_CMP0 $procmux$1169 $procmux$1170_ANY $procmux$1167 $procmux$1168_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_76_5c_ctrl__signals_5b_39_3a_38_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1170__CMP) ? (reduce_or<1>(i_procmux_24_1168__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$990 $procmux$991_CMP0 $procmux$988 $procmux$989_ANY $procmux$986 $procmux$987_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_76_5c_ctrl__signals_5b_39_3a_38_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_989__CMP) ? (eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$2200 $procmux$2201_CMP0 $procmux$2198 $procmux$2199_CMP0 $procmux$2195 $procmux$2196_ANY $procmux$2197_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_18_5c_ctrl__signals_5b_33_3a_32_5d_.slice<0>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2196__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_2197__CMP) ? value<1>{0x1u} : value<1>{0u})) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$2158 $procmux$2159_CMP0 $procmux$2156 $procmux$2157_CMP0 $procmux$2154 $procmux$2155_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_18_5c_ctrl__signals_5b_33_3a_32_5d_.slice<1>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x5u}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1505 $procmux$1506_CMP0 $procmux$1503 $procmux$1504_ANY $procmux$1501 $procmux$1502_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_50_5c_ctrl__signals_5b_30_3a_29_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1504__CMP) ? (reduce_or<1>(i_procmux_24_1502__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1494 $procmux$1495_CMP0 $procmux$1492 $procmux$1493_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_50_5c_ctrl__signals_5b_30_3a_29_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1493__CMP) ? value<1>{0u} : value<1>{0u}) : value<1>{0u});
	// cells $procmux$2352 $procmux$2353_CMP0 $procmux$2350 $procmux$2351_CMP0 $procmux$2347 $procmux$2348_ANY $procmux$2349_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_16_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2348__CMP) ? p_DUT_2e_instr.curr.slice<5,3>().val() : (reduce_or<1>(i_procmux_24_2349__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_20_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>().val() : value<3>{0u})) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$2174 $procmux$2175_CMP0 $procmux$2172 $procmux$2173_CMP0 $procmux$2168 $procmux$2169_ANY $procmux$2170_ANY $procmux$2171_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_16_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2169__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_2170__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_2171__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_20_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>().val() : value<1>{0u}))) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$2304 $procmux$2305_CMP0 $procmux$2302 $procmux$2303_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_14_5c_ctrl__signals_5b_7_3a_6_5d_.slice<1>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : value<1>{0u}) : value<1>{0u});
	// cells $procmux$2185 $procmux$2186_CMP0 $procmux$2183 $procmux$2184_CMP0 $procmux$2181 $procmux$2182_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_14_5c_ctrl__signals_5b_7_3a_6_5d_.slice<0>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x5u}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1712 $procmux$1713_CMP0 $procmux$1710 $procmux$1711_ANY $procmux$1708 $procmux$1709_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_41_5c_ctrl__signals_5b_5_3a_4_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1711__CMP) ? (reduce_or<1>(i_procmux_24_1709__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1664 $procmux$1665_CMP0 $procmux$1662 $procmux$1663_ANY $procmux$1660 $procmux$1661_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_41_5c_ctrl__signals_5b_5_3a_4_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1663__CMP) ? (reduce_or<1>(i_procmux_24_1661__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1599 $procmux$1600_CMP0 $procmux$1597 $procmux$1598_CMP0 $procmux$1595 $procmux$1596_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_46_5c_ctrl__signals_5b_5_3a_4_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (reduce_or<1>(i_procmux_24_1596__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1554 $procmux$1555_CMP0 $procmux$1552 $procmux$1553_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_46_5c_ctrl__signals_5b_5_3a_4_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1238 $procmux$1239_CMP0 $procmux$1236 $procmux$1237_ANY $procmux$1234 $procmux$1235_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_67_5c_ctrl__signals_5b_5_3a_4_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1237__CMP) ? (reduce_or<1>(i_procmux_24_1235__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1197 $procmux$1198_CMP0 $procmux$1195 $procmux$1196_ANY $procmux$1193 $procmux$1194_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_67_5c_ctrl__signals_5b_5_3a_4_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1196__CMP) ? (reduce_or<1>(i_procmux_24_1194__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1148 $procmux$1149_CMP0 $procmux$1146 $procmux$1147_CMP0 $procmux$1144 $procmux$1145_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_71_5c_ctrl__signals_5b_5_3a_4_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (reduce_or<1>(i_procmux_24_1145__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1110 $procmux$1111_CMP0 $procmux$1108 $procmux$1109_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_71_5c_ctrl__signals_5b_5_3a_4_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1262 $procmux$1263_CMP0 $procmux$1260 $procmux$1261_CMP0 $procmux$1258 $procmux$1259_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_78_5c_ctrl__signals_5b_7_3a_6_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_1259__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$919 $procmux$920_CMP0 $procmux$917 $procmux$918_CMP0 $procmux$914 $procmux$915_ANY $procmux$916_ANY $flatten\DUT.\Brain.$or$i8008_core.v:651$132 $flatten\DUT.\Brain.$and$i8008_core.v:651$131 $flatten\DUT.\Brain.$logic_and$i8008_core.v:651$130 $flatten\DUT.\Brain.$eq$i8008_core.v:651$129 $flatten\DUT.\Brain.$eq$i8008_core.v:651$128 $flatten\DUT.\Brain.$or$i8008_core.v:651$127 $flatten\DUT.\Brain.$and$i8008_core.v:651$126 $flatten\DUT.\Brain.$not$i8008_core.v:651$125 $flatten\DUT.\Brain.$logic_and$i8008_core.v:651$124 $flatten\DUT.\Brain.$eq$i8008_core.v:651$123 $flatten\DUT.\Brain.$eq$i8008_core.v:651$122 $flatten\DUT.\Brain.$logic_and$i8008_core.v:651$121 $flatten\DUT.\Brain.$eq$i8008_core.v:651$120 $flatten\DUT.\Brain.$eq$i8008_core.v:651$119 $flatten\DUT.\Brain.$or$i8008_core.v:644$104 $flatten\DUT.\Brain.$and$i8008_core.v:644$103 $flatten\DUT.\Brain.$logic_and$i8008_core.v:644$102 $flatten\DUT.\Brain.$eq$i8008_core.v:644$101 $flatten\DUT.\Brain.$eq$i8008_core.v:644$100 $flatten\DUT.\Brain.$or$i8008_core.v:644$99 $flatten\DUT.\Brain.$and$i8008_core.v:644$98 $flatten\DUT.\Brain.$not$i8008_core.v:644$97 $flatten\DUT.\Brain.$logic_and$i8008_core.v:644$96 $flatten\DUT.\Brain.$eq$i8008_core.v:644$95 $flatten\DUT.\Brain.$eq$i8008_core.v:644$94 $flatten\DUT.\Brain.$logic_and$i8008_core.v:644$93 $flatten\DUT.\Brain.$eq$i8008_core.v:644$92 $flatten\DUT.\Brain.$eq$i8008_core.v:644$91
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_78_5c_ctrl__signals_5b_7_3a_6_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_915__CMP) ? or_uu<1>(or_uu<1>(logic_and<1>(eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x1u}), eq_uu<1>(p_DUT_2e_instr.curr.slice<2,0>().val(), value<3>{0x4u})), and_uu<1>(logic_and<1>(eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().val(), value<3>{0x3u}), logic_not<1>(p_DUT_2e_instr.curr.slice<2,0>().val())), not_u<1>(p_DUT_2e_Brain_2e_CF))), and_uu<1>(logic_and<1>(eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().val(), value<3>{0x2u}), logic_not<1>(p_DUT_2e_instr.curr.slice<2,0>().val())), p_DUT_2e_Brain_2e_CF)) : (reduce_or<1>(i_procmux_24_916__CMP) ? or_uu<1>(or_uu<1>(logic_and<1>(eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x1u}), eq_uu<1>(p_DUT_2e_instr.curr.slice<2,0>().val(), value<3>{0x6u})), and_uu<1>(logic_and<1>(eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().val(), value<3>{0x3u}), eq_uu<1>(p_DUT_2e_instr.curr.slice<2,0>().val(), value<3>{0x2u})), not_u<1>(p_DUT_2e_Brain_2e_CF))), and_uu<1>(logic_and<1>(eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().val(), value<3>{0x2u}), eq_uu<1>(p_DUT_2e_instr.curr.slice<2,0>().val(), value<3>{0x2u})), p_DUT_2e_Brain_2e_CF)) : value<1>{0u})) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$2843 $procmux$2844_CMP0 $procmux$2841 $procmux$2842_CMP0 $procmux$2837 $procmux$2838_ANY $procmux$2839_CMP0 $procmux$2840_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_28_5c_ctrl__signals_5b_24_3a_16_5d_.slice<8>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_2838__CMP) ? value<1>{0x1u} : (eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x2u}) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_2840__CMP) ? value<1>{0x1u} : value<1>{0u}))) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$2025 $procmux$2026_CMP0 $procmux$2023 $procmux$2024_CMP0 $procmux$2020 $procmux$2021_ANY $procmux$2022_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_28_5c_ctrl__signals_5b_24_3a_16_5d_.slice<7,5>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_2021__CMP) ? p_DUT_2e_instr.curr.slice<5,3>().val() : (eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x2u}) ? p_DUT_2e_instr.curr.slice<5,3>().val() : value<3>{0u})) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$2014 $procmux$2015_CMP0 $procmux$2012 $procmux$2013_CMP0 $procmux$2010 $procmux$2011_ANY $flatten\DUT.\Brain.$ternary$i8008_core.v:437$76 $flatten\DUT.\Brain.$eq$i8008_core.v:437$75
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_28_5c_ctrl__signals_5b_24_3a_16_5d_.slice<4,2>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_2011__CMP) ? (logic_not<1>(p_DUT_2e_instr.curr.slice<2,0>().val()) ? value<3>{0x4u} : value<3>{0x5u}) : value<3>{0u}) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$2002 $procmux$2003_CMP0 $procmux$2000 $procmux$2001_CMP0 $procmux$1997 $procmux$1998_ANY $procmux$1999_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_28_5c_ctrl__signals_5b_24_3a_16_5d_.slice<1>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_1998__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_1999__CMP) ? value<1>{0x1u} : value<1>{0u})) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1991 $procmux$1992_CMP0 $procmux$1989 $procmux$1990_CMP0 $procmux$1987 $procmux$1988_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_28_5c_ctrl__signals_5b_24_3a_16_5d_.slice<0>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_1988__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1901 $procmux$1902_CMP0 $procmux$1899 $procmux$1900_CMP0 $procmux$1897 $procmux$1898_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_47_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (reduce_or<1>(i_procmux_24_1898__CMP) ? value<3>{0x5u} : value<3>{0u}) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$1843 $procmux$1844_CMP0 $procmux$1841 $procmux$1842_ANY $procmux$1839 $procmux$1840_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_42_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1842__CMP) ? (reduce_or<1>(i_procmux_24_1840__CMP) ? value<3>{0x6u} : value<3>{0u}) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$1741 $procmux$1742_CMP0 $procmux$1739 $procmux$1740_ANY $procmux$1737 $procmux$1738_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_42_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1740__CMP) ? (reduce_or<1>(i_procmux_24_1738__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1626 $procmux$1627_CMP0 $procmux$1624 $procmux$1625_CMP0 $procmux$1622 $procmux$1623_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_47_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (reduce_or<1>(i_procmux_24_1623__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1366 $procmux$1367_CMP0 $procmux$1364 $procmux$1365_ANY $procmux$1362 $procmux$1363_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_68_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1365__CMP) ? (eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu}) ? value<3>{0x6u} : value<3>{0u}) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$1252 $procmux$1253_CMP0 $procmux$1250 $procmux$1251_ANY $procmux$1248 $procmux$1249_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_68_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1251__CMP) ? (eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1184 $procmux$1185_CMP0 $procmux$1182 $procmux$1183_CMP0 $procmux$1180 $procmux$1181_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_72_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu}) ? value<3>{0x5u} : value<3>{0u}) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$1161 $procmux$1162_CMP0 $procmux$1159 $procmux$1160_CMP0 $procmux$1157 $procmux$1158_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_72_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1971 $procmux$1972_CMP0 $procmux$1969 $procmux$1970_CMP0 $procmux$1967 $procmux$1968_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_57_5c_ctrl__signals_5b_24_3a_21_5d_.slice<3>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_1968__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1392 $procmux$1393_CMP0 $procmux$1390 $procmux$1391_CMP0 $procmux$1388 $procmux$1389_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_57_5c_ctrl__signals_5b_24_3a_21_5d_.slice<2,0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_1389__CMP) ? p_DUT_2e_instr.curr.slice<5,3>().val() : value<3>{0u}) : value<3>{0u}) : value<3>{0u});
	// cells $procmux$2667 $procmux$2668_CMP0 $procmux$2660 $procmux$2661_CMP0 $procmux$2662_CMP0 $procmux$2663_ANY $procmux$2664_CMP0 $procmux$2665_CMP0 $procmux$2666_ANY $procmux$2273 $procmux$2274_CMP0 $procmux$2271 $procmux$2272_CMP0 $procmux$2269 $procmux$2270_ANY $procmux$2238 $procmux$2239_CMP0 $procmux$2236 $procmux$2237_CMP0 $procmux$2234 $procmux$2235_ANY $procmux$2232
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_7_5c_ctrl__signals_5b_39_3a_38_5d_.slice<0>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2270__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2235__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_387_24_68__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_2663__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_2666__CMP) ? value<1>{0x1u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2124 $procmux$2125_CMP0 $procmux$2117 $procmux$2118_CMP0 $procmux$2119_CMP0 $procmux$2120_ANY $procmux$2121_CMP0 $procmux$2122_CMP0 $procmux$2123_ANY $procmux$2520 $procmux$2521_CMP0 $procmux$2518 $procmux$2519_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_7_5c_ctrl__signals_5b_39_3a_38_5d_.slice<1>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2120__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2519__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2123__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1540 $procmux$1541_CMP0 $procmux$1533 $procmux$1534_CMP0 $procmux$1535_CMP0 $procmux$1536_ANY $procmux$1537_CMP0 $procmux$1538_CMP0 $procmux$1539_ANY $procmux$1463 $procmux$1464_CMP0 $procmux$1461 $procmux$1462_CMP0 $procmux$1459 $procmux$1569 $procmux$1570_CMP0 $procmux$1567 $procmux$1568_CMP0 $procmux$1563 $procmux$1564_ANY $procmux$1565_ANY $procmux$1566_ANY $procmux$1680 $procmux$1681_CMP0 $procmux$1678 $procmux$1679_ANY $procmux$1674 $procmux$1675_ANY $procmux$1676_ANY $procmux$1677_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_39_5c_ctrl__signals_5b_39_3a_38_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_logic__and_24_i8008__core_2e_v_3a_540_24_84__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_1536__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_51_5c_ctrl__signals_5b_39_3a_38_5d_.slice<0>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (reduce_or<1>(i_procmux_24_1564__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_1565__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_1566__CMP) ? value<1>{0x1u} : value<1>{0u}))) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_1539__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1679__CMP) ? (reduce_or<1>(i_procmux_24_1675__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_1676__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_1677__CMP) ? value<1>{0x1u} : value<1>{0u}))) : value<1>{0u}) : value<1>{0u}) : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1442 $procmux$1443_CMP0 $procmux$1435 $procmux$1436_CMP0 $procmux$1437_CMP0 $procmux$1438_ANY $procmux$1439_CMP0 $procmux$1440_CMP0 $procmux$1441_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_39_5c_ctrl__signals_5b_39_3a_38_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1438__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_51_5c_ctrl__signals_5b_39_3a_38_5d_.slice<1>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1441__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$958 $procmux$959_CMP0 $procmux$951 $procmux$952_CMP0 $procmux$953_CMP0 $procmux$954_ANY $procmux$955_CMP0 $procmux$956_CMP0 $procmux$957_ANY $procmux$1123 $procmux$1124_CMP0 $procmux$1121 $procmux$1122_CMP0 $procmux$1118 $procmux$1119_ANY $procmux$1120_CMP0 $procmux$1211 $procmux$1212_CMP0 $procmux$1209 $procmux$1210_ANY $procmux$1206 $procmux$1207_ANY $procmux$1208_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_65_5c_ctrl__signals_5b_39_3a_38_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_954__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_76_5c_ctrl__signals_5b_39_3a_38_5d_.slice<0>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (reduce_or<1>(i_procmux_24_1119__CMP) ? value<1>{0x1u} : (eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu}) ? value<1>{0x1u} : value<1>{0u})) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_957__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1210__CMP) ? (reduce_or<1>(i_procmux_24_1207__CMP) ? value<1>{0x1u} : (eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu}) ? value<1>{0x1u} : value<1>{0u})) : value<1>{0u}) : value<1>{0u}) : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$899 $procmux$900_CMP0 $procmux$892 $procmux$893_CMP0 $procmux$894_CMP0 $procmux$895_ANY $procmux$896_CMP0 $procmux$897_CMP0 $procmux$898_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_65_5c_ctrl__signals_5b_39_3a_38_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_895__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_76_5c_ctrl__signals_5b_39_3a_38_5d_.slice<1>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_898__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2739 $procmux$2740_CMP0 $procmux$2732 $procmux$2733_CMP0 $procmux$2734_CMP0 $procmux$2735_ANY $procmux$2736_CMP0 $procmux$2737_CMP0 $procmux$2738_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_.slice<4,3>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_18_5c_ctrl__signals_5b_33_3a_32_5d_ : (reduce_or<1>(i_procmux_24_2735__CMP) ? value<2>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<2>{0u} : (reduce_or<1>(i_procmux_24_2738__CMP) ? value<2>{0u} : value<2>{0u})))))) : value<2>{0u});
	// cells $procmux$2639 $procmux$2640_CMP0 $procmux$2632 $procmux$2633_CMP0 $procmux$2634_CMP0 $procmux$2635_ANY $procmux$2636_CMP0 $procmux$2637_CMP0 $procmux$2638_ANY $procmux$2289 $procmux$2290_CMP0 $procmux$2287 $procmux$2288_CMP0 $procmux$2285 $procmux$2286_ANY $procmux$2257 $procmux$2258_CMP0 $procmux$2255 $procmux$2256_CMP0 $procmux$2253 $procmux$2254_ANY $procmux$2251 $procmux$2567 $procmux$2568_CMP0 $procmux$2565 $procmux$2566_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_.slice<0>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2286__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2254__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_387_24_68__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_2635__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2566__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2638__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2591 $procmux$2592_CMP0 $procmux$2584 $procmux$2585_CMP0 $procmux$2586_CMP0 $procmux$2587_ANY $procmux$2588_CMP0 $procmux$2589_CMP0 $procmux$2590_ANY $procmux$2064 $procmux$2065_CMP0 $procmux$2062 $procmux$2063_CMP0 $procmux$2060 $procmux$2061_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_.slice<1>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x5u}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2587__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2590__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2579 $procmux$2580_CMP0 $procmux$2572 $procmux$2573_CMP0 $procmux$2574_CMP0 $procmux$2575_ANY $procmux$2576_CMP0 $procmux$2577_CMP0 $procmux$2578_ANY $procmux$2556 $procmux$2557_CMP0 $procmux$2554 $procmux$2555_ANY $procmux$2552
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_.slice<2>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2575__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2555__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_eq_24_i8008__core_2e_v_3a_347_24_61__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2578__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1322 $procmux$1323_CMP0 $procmux$1315 $procmux$1316_CMP0 $procmux$1317_CMP0 $procmux$1318_ANY $procmux$1319_CMP0 $procmux$1320_CMP0 $procmux$1321_ANY $procmux$1000 $procmux$1001_CMP0 $procmux$998 $procmux$999_ANY $procmux$996 $procmux$997_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_64_5c_ctrl__signals_5b_33_3a_32_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1318__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_999__CMP) ? (reduce_or<1>(i_procmux_24_997__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1321__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1088 $procmux$1089_CMP0 $procmux$1081 $procmux$1082_CMP0 $procmux$1083_CMP0 $procmux$1084_ANY $procmux$1085_CMP0 $procmux$1086_CMP0 $procmux$1087_ANY $procmux$948 $procmux$949_CMP0 $procmux$946 $procmux$947_CMP0 $procmux$943 $procmux$944_ANY $procmux$945_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_64_5c_ctrl__signals_5b_33_3a_32_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_944__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_945__CMP) ? value<1>{0x1u} : value<1>{0u})) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_1084__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1087__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1828 $procmux$1829_CMP0 $procmux$1821 $procmux$1822_CMP0 $procmux$1823_CMP0 $procmux$1824_ANY $procmux$1825_CMP0 $procmux$1826_CMP0 $procmux$1827_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_37_5c_ctrl__signals_5b_30_3a_29_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1824__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_50_5c_ctrl__signals_5b_30_3a_29_5d_.slice<0>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1827__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1474 $procmux$1475_CMP0 $procmux$1467 $procmux$1468_CMP0 $procmux$1469_CMP0 $procmux$1470_ANY $procmux$1471_CMP0 $procmux$1472_CMP0 $procmux$1473_ANY $procmux$1412 $procmux$1413_CMP0 $procmux$1410 $procmux$1411_CMP0 $procmux$1408 $procmux$1409_ANY $procmux$1612 $procmux$1613_CMP0 $procmux$1610 $procmux$1611_CMP0 $procmux$1608 $procmux$1609_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_37_5c_ctrl__signals_5b_30_3a_29_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_1409__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1470__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_50_5c_ctrl__signals_5b_30_3a_29_5d_.slice<1>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (reduce_or<1>(i_procmux_24_1609__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_1473__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2615 $procmux$2616_CMP0 $procmux$2608 $procmux$2609_CMP0 $procmux$2610_CMP0 $procmux$2611_ANY $procmux$2612_CMP0 $procmux$2613_CMP0 $procmux$2614_ANY $procmux$2100 $procmux$2101_CMP0 $procmux$2098 $procmux$2099_CMP0 $procmux$2096 $procmux$2097_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_3_5c_ctrl__signals_5b_14_3a_9_5d_.slice<5,3>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_2097__CMP) ? p_DUT_2e_instr.curr.slice<5,3>().val() : value<3>{0u}) : value<3>{0u}) : value<3>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_16_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>().val() : (reduce_or<1>(i_procmux_24_2611__CMP) ? value<3>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<3>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<3>{0u} : (reduce_or<1>(i_procmux_24_2614__CMP) ? value<3>{0u} : value<3>{0u})))))) : value<3>{0u});
	// cells $procmux$2603 $procmux$2604_CMP0 $procmux$2596 $procmux$2597_CMP0 $procmux$2598_CMP0 $procmux$2599_ANY $procmux$2600_CMP0 $procmux$2601_CMP0 $procmux$2602_ANY $procmux$2336 $procmux$2337_CMP0 $procmux$2334 $procmux$2335_CMP0 $procmux$2331 $procmux$2332_ANY $procmux$2333_CMP0 $flatten\DUT.\Brain.$or$i8008_core.v:409$73 $flatten\DUT.\Brain.$and$i8008_core.v:409$72 $flatten\DUT.\Brain.$not$i8008_core.v:409$71 $flatten\DUT.\Brain.$and$i8008_core.v:409$70 $flatten\DUT.\Brain.$not$i8008_core.v:409$69 $procmux$2532 $procmux$2533_CMP0 $procmux$2530 $procmux$2531_ANY $procmux$2528
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_3_5c_ctrl__signals_5b_14_3a_9_5d_.slice<0>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_2332__CMP) ? or_uu<1>(and_uu<1>(not_u<1>(p_DUT_2e_instr.curr.slice<5>().val()), p_DUT_2e_Brain_2e_CF), and_uu<1>(p_DUT_2e_instr.curr.slice<5>().val(), not_u<1>(p_DUT_2e_Brain_2e_CF))) : (eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x7u}) ? value<1>{0x1u} : value<1>{0u})) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_2599__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2531__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_eq_24_i8008__core_2e_v_3a_347_24_61__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2602__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2391 $procmux$2392_CMP0 $procmux$2384 $procmux$2385_CMP0 $procmux$2386_CMP0 $procmux$2387_ANY $procmux$2388_CMP0 $procmux$2389_CMP0 $procmux$2390_ANY $procmux$2112 $procmux$2113_CMP0 $procmux$2110 $procmux$2111_CMP0 $procmux$2106 $procmux$2107_ANY $procmux$2108_CMP0 $procmux$2109_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_3_5c_ctrl__signals_5b_14_3a_9_5d_.slice<1>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_2107__CMP) ? value<1>{0x1u} : (eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x2u}) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_2109__CMP) ? value<1>{0x1u} : value<1>{0u}))) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2387__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2390__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2136 $procmux$2137_CMP0 $procmux$2129 $procmux$2130_CMP0 $procmux$2131_CMP0 $procmux$2132_ANY $procmux$2133_CMP0 $procmux$2134_CMP0 $procmux$2135_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_3_5c_ctrl__signals_5b_14_3a_9_5d_.slice<2>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_16_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>().val() : (reduce_or<1>(i_procmux_24_2132__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2135__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2787 $procmux$2788_CMP0 $procmux$2780 $procmux$2781_CMP0 $procmux$2782_CMP0 $procmux$2783_ANY $procmux$2784_CMP0 $procmux$2785_CMP0 $procmux$2786_ANY $procmux$2051 $procmux$2052_CMP0 $procmux$2049 $procmux$2050_CMP0 $procmux$2047 $procmux$2048_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<6>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x5u}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_14_5c_ctrl__signals_5b_7_3a_6_5d_.slice<0>().val() : (reduce_or<1>(i_procmux_24_2783__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2786__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2751 $procmux$2752_CMP0 $procmux$2744 $procmux$2745_CMP0 $procmux$2746_CMP0 $procmux$2747_ANY $procmux$2748_CMP0 $procmux$2749_CMP0 $procmux$2750_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<3>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2747__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_2750__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2703 $procmux$2704_CMP0 $procmux$2696 $procmux$2697_CMP0 $procmux$2698_CMP0 $procmux$2699_ANY $procmux$2700_CMP0 $procmux$2701_CMP0 $procmux$2702_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<1,0>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<2>{0u} : (reduce_or<1>(i_procmux_24_2699__CMP) ? value<2>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<2>{0u} : (reduce_or<1>(i_procmux_24_2702__CMP) ? value<2>{0u} : value<2>{0u})))))) : value<2>{0u});
	// cells $procmux$2691 $procmux$2692_CMP0 $procmux$2684 $procmux$2685_CMP0 $procmux$2686_CMP0 $procmux$2687_ANY $procmux$2688_CMP0 $procmux$2689_CMP0 $procmux$2690_ANY $procmux$2088 $procmux$2089_CMP0 $procmux$2086 $procmux$2087_CMP0 $procmux$2084 $procmux$2085_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<2>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x5u}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2687__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2690__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2679 $procmux$2680_CMP0 $procmux$2672 $procmux$2673_CMP0 $procmux$2674_CMP0 $procmux$2675_ANY $procmux$2676_CMP0 $procmux$2677_CMP0 $procmux$2678_ANY $procmux$2038 $procmux$2039_CMP0 $procmux$2036 $procmux$2037_CMP0 $procmux$2034 $procmux$2035_CMP0 $procmux$2367 $procmux$2368_CMP0 $procmux$2365 $procmux$2366_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<4>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x5u}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_2675__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2678__CMP) ? value<1>{0x1u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2627 $procmux$2628_CMP0 $procmux$2620 $procmux$2621_CMP0 $procmux$2622_CMP0 $procmux$2623_ANY $procmux$2624_CMP0 $procmux$2625_CMP0 $procmux$2626_ANY $procmux$2544 $procmux$2545_CMP0 $procmux$2542 $procmux$2543_ANY $procmux$2540
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<7>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_14_5c_ctrl__signals_5b_7_3a_6_5d_.slice<1>().val() : (reduce_or<1>(i_procmux_24_2623__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2543__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_eq_24_i8008__core_2e_v_3a_347_24_61__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2626__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2379 $procmux$2380_CMP0 $procmux$2372 $procmux$2373_CMP0 $procmux$2374_CMP0 $procmux$2375_ANY $procmux$2376_CMP0 $procmux$2377_CMP0 $procmux$2378_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<5>() = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2375__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_2378__CMP) ? value<1>{0x1u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1752 $procmux$1753_CMP0 $procmux$1745 $procmux$1746_CMP0 $procmux$1747_CMP0 $procmux$1748_ANY $procmux$1749_CMP0 $procmux$1750_CMP0 $procmux$1751_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_32_5c_ctrl__signals_5b_5_3a_3_5d_.slice<2,1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<2>{0u} : (reduce_or<1>(i_procmux_24_1748__CMP) ? value<2>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_46_5c_ctrl__signals_5b_5_3a_4_5d_ : (reduce_or<1>(i_procmux_24_1751__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_41_5c_ctrl__signals_5b_5_3a_4_5d_ : value<2>{0u})))))) : value<2>{0u});
	// cells $procmux$1648 $procmux$1649_CMP0 $procmux$1641 $procmux$1642_CMP0 $procmux$1643_CMP0 $procmux$1644_ANY $procmux$1645_CMP0 $procmux$1646_CMP0 $procmux$1647_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_32_5c_ctrl__signals_5b_5_3a_3_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1644__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_1647__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1332 $procmux$1333_CMP0 $procmux$1325 $procmux$1326_CMP0 $procmux$1327_CMP0 $procmux$1328_ANY $procmux$1329_CMP0 $procmux$1330_CMP0 $procmux$1331_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_60_5c_ctrl__signals_5b_7_3a_3_5d_.slice<2>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1328__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_71_5c_ctrl__signals_5b_5_3a_4_5d_.slice<1>().val() : (reduce_or<1>(i_procmux_24_1331__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_67_5c_ctrl__signals_5b_5_3a_4_5d_.slice<1>().val() : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1282 $procmux$1283_CMP0 $procmux$1275 $procmux$1276_CMP0 $procmux$1277_CMP0 $procmux$1278_ANY $procmux$1279_CMP0 $procmux$1280_CMP0 $procmux$1281_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_60_5c_ctrl__signals_5b_7_3a_3_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1278__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_1281__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1098 $procmux$1099_CMP0 $procmux$1091 $procmux$1092_CMP0 $procmux$1093_CMP0 $procmux$1094_ANY $procmux$1095_CMP0 $procmux$1096_CMP0 $procmux$1097_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_60_5c_ctrl__signals_5b_7_3a_3_5d_.slice<4>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_78_5c_ctrl__signals_5b_7_3a_6_5d_.slice<1>().val() : (reduce_or<1>(i_procmux_24_1094__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1097__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$968 $procmux$969_CMP0 $procmux$961 $procmux$962_CMP0 $procmux$963_CMP0 $procmux$964_ANY $procmux$965_CMP0 $procmux$966_CMP0 $procmux$967_ANY $procmux$1979 $procmux$1980_CMP0 $procmux$1977 $procmux$1978_CMP0 $procmux$1975 $procmux$1976_ANY $procmux$928 $procmux$929_CMP0 $procmux$926 $procmux$927_CMP0
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_60_5c_ctrl__signals_5b_7_3a_3_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_1976__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_964__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_71_5c_ctrl__signals_5b_5_3a_4_5d_.slice<0>().val() : (reduce_or<1>(i_procmux_24_967__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_67_5c_ctrl__signals_5b_5_3a_4_5d_.slice<0>().val() : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$909 $procmux$910_CMP0 $procmux$902 $procmux$903_CMP0 $procmux$904_CMP0 $procmux$905_ANY $procmux$906_CMP0 $procmux$907_CMP0 $procmux$908_ANY $procmux$881 $procmux$882_CMP0 $procmux$879 $procmux$880_CMP0 $procmux$877 $procmux$878_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_60_5c_ctrl__signals_5b_7_3a_3_5d_.slice<3>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_878__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_78_5c_ctrl__signals_5b_7_3a_6_5d_.slice<0>().val() : (reduce_or<1>(i_procmux_24_905__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_908__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$2775 $procmux$2776_CMP0 $procmux$2768 $procmux$2769_CMP0 $procmux$2770_CMP0 $procmux$2771_ANY $procmux$2772_CMP0 $procmux$2773_CMP0 $procmux$2774_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_4_5c_ctrl__signals_5b_24_3a_16_5d_ = (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_28_5c_ctrl__signals_5b_24_3a_16_5d_ : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<9>{0u} : (reduce_or<1>(i_procmux_24_2771__CMP) ? value<9>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<9>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<9>{0u} : (reduce_or<1>(i_procmux_24_2774__CMP) ? value<9>{0u} : value<9>{0u})))))) : value<9>{0u});
	// cells $procmux$1784 $procmux$1785_CMP0 $procmux$1777 $procmux$1778_CMP0 $procmux$1779_CMP0 $procmux$1780_ANY $procmux$1781_CMP0 $procmux$1782_CMP0 $procmux$1783_ANY $procmux$1402 $procmux$1403_CMP0 $procmux$1400 $procmux$1401_CMP0 $procmux$1398 $procmux$1399_ANY $flatten\DUT.\Brain.$ternary$i8008_core.v:551$87 $flatten\DUT.\Brain.$logic_and$i8008_core.v:551$86 $flatten\DUT.\Brain.$eq$i8008_core.v:551$85
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_33_5c_ctrl__signals_5b_14_3a_10_5d_.slice<4,2>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_1399__CMP) ? (logic_and<1>(eq_uu<1>(p_DUT_2e_instr.curr.slice<7,4>().val(), value<4>{0x4u}), p_DUT_2e_instr.curr.slice<0>().val()) ? value<3>{0u} : p_DUT_2e_Brain_2e_DDD) : value<3>{0u}) : value<3>{0u}) : value<3>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<3>{0u} : (reduce_or<1>(i_procmux_24_1780__CMP) ? value<3>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<3>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_47_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>().val() : (reduce_or<1>(i_procmux_24_1783__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_42_5c_ctrl__signals_5b_14_3a_11_5d_.slice<3,1>().val() : value<3>{0u})))))) : value<3>{0u});
	// cells $procmux$1637 $procmux$1638_CMP0 $procmux$1630 $procmux$1631_CMP0 $procmux$1632_CMP0 $procmux$1633_ANY $procmux$1634_CMP0 $procmux$1635_CMP0 $procmux$1636_ANY $procmux$1422 $procmux$1423_CMP0 $procmux$1420 $procmux$1421_CMP0 $procmux$1417 $procmux$1418_ANY $procmux$1419_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_33_5c_ctrl__signals_5b_14_3a_10_5d_.slice<0>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_1418__CMP) ? value<1>{0x1u} : (reduce_or<1>(i_procmux_24_1419__CMP) ? value<1>{0x1u} : value<1>{0u})) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1633__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1636__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1453 $procmux$1454_CMP0 $procmux$1446 $procmux$1447_CMP0 $procmux$1448_CMP0 $procmux$1449_ANY $procmux$1450_CMP0 $procmux$1451_CMP0 $procmux$1452_ANY
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_33_5c_ctrl__signals_5b_14_3a_10_5d_.slice<1>() = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1449__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_47_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>().val() : (reduce_or<1>(i_procmux_24_1452__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_42_5c_ctrl__signals_5b_14_3a_11_5d_.slice<0>().val() : value<1>{0u})))))) : value<1>{0u});
	// cells $procmux$1955 $procmux$1956_CMP0 $procmux$1957_CMP0 $procmux$1958_CMP0 $procmux$1292 $procmux$1293_CMP0 $procmux$1285 $procmux$1286_CMP0 $procmux$1287_CMP0 $procmux$1288_ANY $procmux$1289_CMP0 $procmux$1290_CMP0 $procmux$1291_ANY $procmux$1136 $procmux$1137_CMP0 $procmux$1134 $procmux$1135_CMP0 $procmux$1131 $procmux$1132_ANY $procmux$1133_CMP0 $procmux$1225 $procmux$1226_CMP0 $procmux$1223 $procmux$1224_ANY $procmux$1220 $procmux$1221_ANY $procmux$1222_CMP0 $procmux$1795 $procmux$1796_CMP0 $procmux$1788 $procmux$1789_CMP0 $procmux$1790_CMP0 $procmux$1791_ANY $procmux$1792_CMP0 $procmux$1793_CMP0 $procmux$1794_ANY $procmux$1584 $procmux$1585_CMP0 $procmux$1582 $procmux$1583_CMP0 $procmux$1578 $procmux$1579_ANY $procmux$1580_ANY $procmux$1581_ANY $flatten\DUT.\Brain.$ternary$i8008_core.v:504$81 $flatten\DUT.\Brain.$eq$i8008_core.v:504$80 $procmux$1696 $procmux$1697_CMP0 $procmux$1694 $procmux$1695_ANY $procmux$1690 $procmux$1691_ANY $procmux$1692_ANY $procmux$1693_ANY $flatten\DUT.\Brain.$ternary$i8008_core.v:481$78 $flatten\DUT.\Brain.$eq$i8008_core.v:481$77 $procmux$2848 $procmux$2849_CMP0 $procmux$1904 $procmux$1905_CMP0 $procmux$1906_CMP0 $procmux$1907_CMP0 $procmux$2830 $procmux$2831_CMP0 $procmux$2832_CMP0 $procmux$1382 $procmux$1383_CMP0 $procmux$1384_CMP0 $procmux$1352 $procmux$1353_CMP0 $procmux$1345 $procmux$1346_CMP0 $procmux$1347_CMP0 $procmux$1348_ANY $procmux$1349_CMP0 $procmux$1350_CMP0 $procmux$1351_ANY $procmux$938 $procmux$939_CMP0 $procmux$936 $procmux$937_CMP0 $procmux$934 $procmux$935_ANY $flatten\DUT.\Brain.$or$i8008_core.v:647$118 $flatten\DUT.\Brain.$and$i8008_core.v:647$117 $flatten\DUT.\Brain.$logic_and$i8008_core.v:647$116 $flatten\DUT.\Brain.$eq$i8008_core.v:647$115 $flatten\DUT.\Brain.$eq$i8008_core.v:647$114 $flatten\DUT.\Brain.$or$i8008_core.v:647$113 $flatten\DUT.\Brain.$and$i8008_core.v:647$112 $flatten\DUT.\Brain.$not$i8008_core.v:647$111 $flatten\DUT.\Brain.$logic_and$i8008_core.v:647$110 $flatten\DUT.\Brain.$eq$i8008_core.v:647$109 $flatten\DUT.\Brain.$eq$i8008_core.v:647$108 $flatten\DUT.\Brain.$logic_and$i8008_core.v:647$107 $flatten\DUT.\Brain.$eq$i8008_core.v:647$106 $flatten\DUT.\Brain.$eq$i8008_core.v:647$105 $procmux$1947 $procmux$1948_CMP0 $procmux$1949_CMP0 $procmux$1941 $procmux$1942_CMP0 $procmux$1943_CMP0 $procmux$1944_CMP0 $procmux$1272 $procmux$1273_CMP0 $procmux$1265 $procmux$1266_CMP0 $procmux$1267_CMP0 $procmux$1268_ANY $procmux$1269_CMP0 $procmux$1270_CMP0 $procmux$1271_ANY $procmux$1934 $procmux$1935_CMP0 $procmux$2826 $procmux$2827_CMP0 $procmux$2828_CMP0 $procmux$1876 $procmux$1877_CMP0 $procmux$1869 $procmux$1870_CMP0 $procmux$1871_CMP0 $procmux$1872_ANY $procmux$1873_CMP0 $procmux$1874_CMP0 $procmux$1875_ANY $procmux$1431 $procmux$1432_CMP0 $procmux$1429 $procmux$1430_CMP0 $procmux$1929 $procmux$1930_CMP0 $procmux$2821 $procmux$2822_CMP0 $procmux$2823_CMP0 $procmux$1865 $procmux$1866_CMP0 $procmux$1858 $procmux$1859_CMP0 $procmux$1860_CMP0 $procmux$1861_ANY $procmux$1862_CMP0 $procmux$1863_CMP0 $procmux$1864_ANY $procmux$1920 $procmux$1921_CMP0 $procmux$2763 $procmux$2764_CMP0 $procmux$2756 $procmux$2757_CMP0 $procmux$2758_CMP0 $procmux$2759_ANY $procmux$2760_CMP0 $procmux$2761_CMP0 $procmux$2762_ANY $procmux$2075 $procmux$2076_CMP0 $procmux$2073 $procmux$2074_CMP0 $procmux$2070 $procmux$2071_ANY $procmux$2072_CMP0 $procmux$1915 $procmux$1916_CMP0 $procmux$1854 $procmux$1855_CMP0 $procmux$1847 $procmux$1848_CMP0 $procmux$1849_CMP0 $procmux$1850_ANY $procmux$1851_CMP0 $procmux$1852_CMP0 $procmux$1853_ANY $procmux$1773 $procmux$1774_CMP0 $procmux$1771 $procmux$1772_CMP0 $procmux$1769 $procmux$1910 $procmux$1911_CMP0 $procmux$1912_CMP0 $procmux$1373 $procmux$1374_CMP0 $procmux$1375_CMP0 $procmux$1376_CMP0 $procmux$1342 $procmux$1343_CMP0 $procmux$1335 $procmux$1336_CMP0 $procmux$1337_CMP0 $procmux$1338_ANY $procmux$1339_CMP0 $procmux$1340_CMP0 $procmux$1341_ANY $procmux$889 $procmux$890_CMP0 $procmux$887 $procmux$888_CMP0 $procmux$885 $procmux$886_ANY $procmux$979 $procmux$980_CMP0 $procmux$977 $procmux$978_ANY $procmux$975 $procmux$976_CMP0 $procmux$2817 $procmux$2818_CMP0 $procmux$1369 $procmux$1370_CMP0 $procmux$1371_CMP0 $procmux$1960 $procmux$1961_CMP0 $procmux$1962_CMP0 $procmux$1963_CMP0 $procmux$1763 $procmux$1764_CMP0 $procmux$1756 $procmux$1757_CMP0 $procmux$1758_CMP0 $procmux$1759_ANY $procmux$1760_CMP0 $procmux$1761_CMP0 $procmux$1762_ANY $procmux$1726 $procmux$1727_CMP0 $procmux$1724 $procmux$1725_ANY $procmux$1722 $procmux$1723_ANY $procmux$871 $procmux$872_CMP0 $procmux$873_CMP0 $procmux$874_CMP0
	p_DUT_2e_Brain_2e_ctrl__signals = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_65_5c_ctrl__signals_5b_39_3a_38_5d_ : (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_39_5c_ctrl__signals_5b_39_3a_38_5d_ : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_7_5c_ctrl__signals_5b_39_3a_38_5d_ : value<2>{0u}))).concat(value<4>{0u}).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_64_5c_ctrl__signals_5b_33_3a_32_5d_.slice<1>().val() : (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1759__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1762__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1725__CMP) ? (reduce_or<1>(i_procmux_24_1723__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u})))))) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_.slice<4>().val() : value<1>{0u})))).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_64_5c_ctrl__signals_5b_33_3a_32_5d_.slice<0>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_.slice<3>().val() : value<1>{0u}))).concat((logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_.slice<2>().val() : value<1>{0u})).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_886__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1338__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_978__CMP) ? (eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu}) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1341__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_37_5c_ctrl__signals_5b_30_3a_29_5d_.slice<1>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_.slice<1>().val() : value<1>{0u})))).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_37_5c_ctrl__signals_5b_30_3a_29_5d_.slice<0>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_6_5c_ctrl__signals_5b_33_3a_29_5d_.slice<0>().val() : value<1>{0u}))).concat(value<1>{0u}).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_logic__and_24_i8008__core_2e_v_3a_540_24_84__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_1850__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1853__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u}) : value<1>{0u})).concat((logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (reduce_or<1>(i_procmux_24_2071__CMP) ? value<1>{0x1u} : (eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x2u}) ? value<1>{0x1u} : value<1>{0u})) : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2759__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_2762__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u}) : value<1>{0u})).concat(value<1>{0u}).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_57_5c_ctrl__signals_5b_24_3a_21_5d_ : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<4>{0u} : (reduce_or<1>(i_procmux_24_1861__CMP) ? value<4>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<4>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<4>{0u} : (reduce_or<1>(i_procmux_24_1864__CMP) ? value<4>{0u} : value<4>{0u})))))) : value<4>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_4_5c_ctrl__signals_5b_24_3a_16_5d_.slice<8,5>().val() : value<4>{0u}))).concat((logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_4_5c_ctrl__signals_5b_24_3a_16_5d_.slice<4,2>().val() : value<3>{0u})).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1872__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1875__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_4_5c_ctrl__signals_5b_24_3a_16_5d_.slice<1>().val() : value<1>{0u}))).concat((logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_4_5c_ctrl__signals_5b_24_3a_16_5d_.slice<0>().val() : value<1>{0u})).concat(value<1>{0u}).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<4>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<4>{0u} : (reduce_or<1>(i_procmux_24_1268__CMP) ? value<4>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<4>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_72_5c_ctrl__signals_5b_14_3a_11_5d_ : (reduce_or<1>(i_procmux_24_1271__CMP) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_68_5c_ctrl__signals_5b_14_3a_11_5d_ : value<4>{0u})))))) : value<4>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_33_5c_ctrl__signals_5b_14_3a_10_5d_.slice<4,1>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_3_5c_ctrl__signals_5b_14_3a_9_5d_.slice<5,2>().val() : value<4>{0u})))).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_33_5c_ctrl__signals_5b_14_3a_10_5d_.slice<0>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_3_5c_ctrl__signals_5b_14_3a_9_5d_.slice<1>().val() : value<1>{0u}))).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (reduce_or<1>(i_procmux_24_935__CMP) ? or_uu<1>(or_uu<1>(logic_and<1>(eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().val(), value<2>{0x1u}), eq_uu<1>(p_DUT_2e_instr.curr.slice<2,0>().val(), value<3>{0x6u})), and_uu<1>(logic_and<1>(eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().val(), value<3>{0x3u}), eq_uu<1>(p_DUT_2e_instr.curr.slice<2,0>().val(), value<3>{0x2u})), not_u<1>(p_DUT_2e_Brain_2e_CF))), and_uu<1>(logic_and<1>(eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().val(), value<3>{0x2u}), eq_uu<1>(p_DUT_2e_instr.curr.slice<2,0>().val(), value<3>{0x2u})), p_DUT_2e_Brain_2e_CF)) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : (reduce_or<1>(i_procmux_24_1348__CMP) ? value<1>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? value<1>{0u} : (reduce_or<1>(i_procmux_24_1351__CMP) ? value<1>{0u} : value<1>{0u})))))) : value<1>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_3_5c_ctrl__signals_5b_14_3a_9_5d_.slice<0>().val() : value<1>{0u}))).concat(value<1>{0u}).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_60_5c_ctrl__signals_5b_7_3a_3_5d_.slice<4,3>().val() : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<7,6>().val() : value<2>{0u}))).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_60_5c_ctrl__signals_5b_7_3a_3_5d_.slice<2,0>().val() : (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_32_5c_ctrl__signals_5b_5_3a_3_5d_ : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<5,3>().val() : value<3>{0u})))).concat((logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<2>().val() : value<1>{0u})).concat((eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<2>{0u} : (reduce_or<1>(i_procmux_24_1288__CMP) ? value<2>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (reduce_or<1>(i_procmux_24_1132__CMP) ? value<2>{0x1u} : (eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu}) ? value<2>{0x3u} : value<2>{0u})) : value<2>{0u}) : value<2>{0u}) : (reduce_or<1>(i_procmux_24_1291__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1224__CMP) ? (reduce_or<1>(i_procmux_24_1221__CMP) ? value<2>{0x1u} : (eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu}) ? value<2>{0x3u} : value<2>{0u})) : value<2>{0u}) : value<2>{0u}) : value<2>{0u})))))) : value<2>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<2>{0u} : (reduce_or<1>(i_procmux_24_1791__CMP) ? value<2>{0u} : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (reduce_or<1>(i_procmux_24_1579__CMP) ? value<2>{0x2u} : (reduce_or<1>(i_procmux_24_1580__CMP) ? (eq_uu<1>(p_DUT_2e_instr.curr.slice<7,3>().val(), value<5>{0x1fu}) ? value<2>{0x3u} : value<2>{0x1u}) : (reduce_or<1>(i_procmux_24_1581__CMP) ? value<2>{0x1u} : value<2>{0u}))) : value<2>{0u}) : value<2>{0u}) : (reduce_or<1>(i_procmux_24_1794__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1695__CMP) ? (reduce_or<1>(i_procmux_24_1691__CMP) ? value<2>{0x2u} : (reduce_or<1>(i_procmux_24_1692__CMP) ? (eq_uu<1>(p_DUT_2e_instr.curr.slice<7,3>().val(), value<5>{0x1fu}) ? value<2>{0x3u} : value<2>{0x1u}) : (reduce_or<1>(i_procmux_24_1693__CMP) ? value<2>{0x1u} : value<2>{0u}))) : value<2>{0u}) : value<2>{0u}) : value<2>{0u})))))) : value<2>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? i_flatten_5c_DUT_2e__5c_Brain_2e__24_2_5c_ctrl__signals_5b_7_3a_0_5d_.slice<1,0>().val() : value<2>{0u})))).val();
	// cells $procmux$454 $procmux$451 $procmux$448 $procmux$445 $procmux$442 $procmux$439 $procmux$436 $procmux$433 $procmux$430 $procmux$427 $procmux$424 $procmux$421 $procmux$418 $procmux$415 $procmux$412 $procmux$409 $procmux$406 $procmux$403
	i_flatten_5c_DUT_2e__24_5_5c_bus_5b_7_3a_0_5d_ = (p_DUT_2e_Brain_2e_ctrl__signals.slice<5>().val() ? value<8>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<11>().val() ? value<8>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<24>().val() ? value<8>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<27>().val() ? value<8>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<33>().val() ? p_DUT_2e_regA_2e_Q.curr : (p_DUT_2e_Brain_2e_ctrl__signals.slice<5>().val() ? value<8>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<11>().val() ? value<8>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<24>().val() ? value<8>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<27>().val() ? value<8>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<33>().val() ? value<8>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<30>().val() ? p_DUT_2e_regB_2e_Q.curr : (p_DUT_2e_Brain_2e_ctrl__signals.slice<5>().val() ? value<8>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<11>().val() ? value<8>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<24>().val() ? value<8>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<27>().val() ? value<8>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<33>().val() ? value<8>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<30>().val() ? value<8>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<39>().val() ? p_sw.slice<7,0>().val() : value<8>{0u}))))))))))))))))));
	// connection
	p_DUT_2e_Brain_2e_D5__3 = p_DUT_2e_instr.curr.slice<5,3>().val();
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:360.13-360.27|i8008_core.v:205.14-214.3
	// cell $flatten\DUT.\Brain.$ne$i8008_core.v:360$62
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_360_24_62__Y = ne_uu<1>(p_DUT_2e_Brain_2e_D5__3, value<3>{0x7u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2424_CMP0
	i_procmux_24_2424__CMP.slice<0>() = logic_not<1>(p_DUT_2e_instr.curr.slice<7,1>().val());
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2424_CMP1
	i_procmux_24_2424__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0xffu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2424_CMP2
	i_procmux_24_2424__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2444_CMP0
	i_procmux_24_2444__CMP.slice<0>() = logic_not<1>(p_DUT_2e_instr.curr.slice<7,1>().val());
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2444_CMP1
	i_procmux_24_2444__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0xffu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2444_CMP2
	i_procmux_24_2444__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2426_CMP0
	i_procmux_24_2426__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2426_CMP1
	i_procmux_24_2426__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2446_CMP0
	i_procmux_24_2446__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2446_CMP1
	i_procmux_24_2446__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// cells $procmux$478 $procmux$475 $procmux$472 $procmux$469
	i_flatten_5c_DUT_2e__24_4_5c_bus_5b_7_3a_0_5d_.slice<3,0>() = (p_DUT_2e_Brain_2e_ctrl__signals.slice<5>().val() ? value<4>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<11>().val() ? value<4>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<24>().val() ? value<4>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<27>().val() ? p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr : i_flatten_5c_DUT_2e__24_5_5c_bus_5b_7_3a_0_5d_.slice<3,0>().val()))));
	// cells $procmux$466 $procmux$463 $procmux$460 $procmux$457
	i_flatten_5c_DUT_2e__24_4_5c_bus_5b_7_3a_0_5d_.slice<7,4>() = (p_DUT_2e_Brain_2e_ctrl__signals.slice<5>().val() ? value<4>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<11>().val() ? value<4>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<24>().val() ? value<4>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<27>().val() ? value<4>{0u} : i_flatten_5c_DUT_2e__24_5_5c_bus_5b_7_3a_0_5d_.slice<7,4>().val()))));
	// connection
	p_DUT_2e_Unit_2e_ALU__ctrl = p_DUT_2e_Brain_2e_ctrl__signals.slice<24,15>().val();
	// connection
	p_DUT_2e_rf_2e_rf__ctrl = p_DUT_2e_Brain_2e_ctrl__signals.slice<14,10>().val();
	// connection
	p_DUT_2e_Stack_2e_Stack__ctrl = p_DUT_2e_Brain_2e_ctrl__signals.slice<6,0>().val();
	// cells $flatten\DUT.\Brain.$or$i8008_core.v:371$67 $flatten\DUT.\Brain.$and$i8008_core.v:371$66 $flatten\DUT.\Brain.$not$i8008_core.v:371$65 $flatten\DUT.\Brain.$and$i8008_core.v:371$64 $flatten\DUT.\Brain.$not$i8008_core.v:371$63
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_or_24_i8008__core_2e_v_3a_371_24_67__Y = or_uu<1>(and_uu<1>(p_DUT_2e_instr.curr.slice<5>().val(), not_u<1>(p_DUT_2e_Brain_2e_CF)), and_uu<1>(not_u<1>(p_DUT_2e_instr.curr.slice<5>().val()), p_DUT_2e_Brain_2e_CF));
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:719.19-719.21|i8008_core.v:176.4-182.3
	// memory \DUT.rf.rf read port 0
	auto tmp_25 = memory_index(p_DUT_2e_rf_2e_rf__ctrl.slice<4,2>().val(), 0, 7);
	CXXRTL_ASSERT(tmp_25.valid && "out of bounds read");
	if(tmp_25.valid) {
		value<8> tmp_26 = memory_p_DUT_2e_rf_2e_rf[tmp_25.index];
		i_flatten_5c_DUT_2e__5c_rf_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_719_24_393__DATA = tmp_26;
	} else {
		i_flatten_5c_DUT_2e__5c_rf_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_719_24_393__DATA = value<8> {};
	}
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2478_CMP0
	i_procmux_24_2478__CMP.slice<0>() = logic_not<1>(p_DUT_2e_instr.curr.slice<7,1>().val());
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2478_CMP1
	i_procmux_24_2478__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0xffu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2478_CMP2
	i_procmux_24_2478__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2404_CMP0
	i_procmux_24_2404__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2404_CMP1
	i_procmux_24_2404__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0xbu});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1037_CMP0
	i_procmux_24_1037__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1037_CMP1
	i_procmux_24_1037__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1010_CMP0
	i_procmux_24_1010__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1010_CMP1
	i_procmux_24_1010__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2652_CMP0
	i_procmux_24_2652__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2652_CMP1
	i_procmux_24_2652__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0xbu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2461_CMP0
	i_procmux_24_2461__CMP.slice<0>() = logic_not<1>(p_DUT_2e_instr.curr.slice<7,1>().val());
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2461_CMP1
	i_procmux_24_2461__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0xffu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2461_CMP2
	i_procmux_24_2461__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1051_CMP0
	i_procmux_24_1051__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1051_CMP1
	i_procmux_24_1051__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1023_CMP0
	i_procmux_24_1023__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1023_CMP1
	i_procmux_24_1023__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:766.19-766.21|i8008_core.v:197.4-204.3
	// memory \DUT.Stack.rf read port 1
	auto tmp_27 = memory_index(p_DUT_2e_SP__SEL_2e_Q.curr, 0, 8);
	CXXRTL_ASSERT(tmp_27.valid && "out of bounds read");
	if(tmp_27.valid) {
		value<14> tmp_28 = memory_p_DUT_2e_Stack_2e_rf[tmp_27.index];
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_766_24_353__DATA = tmp_28;
	} else {
		i_flatten_5c_DUT_2e__5c_Stack_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_766_24_353__DATA = value<14> {};
	}
	// connection
	p_DUT_2e_rf_2e_rs = i_flatten_5c_DUT_2e__5c_rf_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_719_24_393__DATA;
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2480_CMP0
	i_procmux_24_2480__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2480_CMP1
	i_procmux_24_2480__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2406_CMP0
	i_procmux_24_2406__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2406_CMP1
	i_procmux_24_2406__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1039_CMP0
	i_procmux_24_1039__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1039_CMP1
	i_procmux_24_1039__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1012_CMP0
	i_procmux_24_1012__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1012_CMP1
	i_procmux_24_1012__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2654_CMP0
	i_procmux_24_2654__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2654_CMP1
	i_procmux_24_2654__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2463_CMP0
	i_procmux_24_2463__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2463_CMP1
	i_procmux_24_2463__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1053_CMP0
	i_procmux_24_1053__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1053_CMP1
	i_procmux_24_1053__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1025_CMP0
	i_procmux_24_1025__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1025_CMP1
	i_procmux_24_1025__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// connection
	p_DUT_2e_Stack_2e_rs = i_flatten_5c_DUT_2e__5c_Stack_2e__24_memrd_24__5c_rf_24_i8008__core_2e_v_3a_766_24_353__DATA;
	// connection
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_and_24_i8008__core_2e_v_3a_274_24_31__Y.slice<0>() = p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr.slice<0>().val();
	// connection
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_and_24_i8008__core_2e_v_3a_274_24_31__Y.slice<8,1>() = value<8>{0u};
	// connection
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_and_24_i8008__core_2e_v_3a_276_24_35__Y.slice<0>() = p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr.slice<0>().val();
	// connection
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_and_24_i8008__core_2e_v_3a_276_24_35__Y.slice<8,1>() = value<8>{0u};
	// connection
	p_DUT_2e_Stack_2e_upper.slice<5,0>() = p_DUT_2e_Stack_2e_rs.slice<13,8>().val();
	// connection
	p_DUT_2e_Stack_2e_upper.slice<7,6>() = p_DUT_2e_Stack_2e_Stack__ctrl.slice<1,0>().val();
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:280.32-280.37|i8008_core.v:164.6-172.3
	// cell $flatten\DUT.\Unit.$sub$i8008_core.v:280$40
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_280_24_40__Y = sub_uu<9>(p_DUT_2e_regA_2e_Q.curr, p_DUT_2e_regB_2e_Q.curr);
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:251.31-251.36|i8008_core.v:164.6-172.3
	// cell $flatten\DUT.\Unit.$add$i8008_core.v:251$27
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_251_24_27__Y = add_uu<32>(p_DUT_2e_regA_2e_Q.curr, value<32>{0x1u});
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:252.31-252.36|i8008_core.v:164.6-172.3
	// cell $flatten\DUT.\Unit.$sub$i8008_core.v:252$28
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_252_24_28__Y = sub_uu<32>(p_DUT_2e_regA_2e_Q.curr, value<32>{0x1u});
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:273.31-273.36|i8008_core.v:164.6-172.3
	// cell $flatten\DUT.\Unit.$add$i8008_core.v:273$29
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_273_24_29__Y = add_uu<9>(p_DUT_2e_regA_2e_Q.curr, p_DUT_2e_regB_2e_Q.curr);
	// cells $flatten\DUT.\Unit.$add$i8008_core.v:274$32 $flatten\DUT.\Unit.$add$i8008_core.v:274$30
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_274_24_32__Y = add_uu<9>(add_uu<9>(p_DUT_2e_regA_2e_Q.curr, p_DUT_2e_regB_2e_Q.curr), i_flatten_5c_DUT_2e__5c_Unit_2e__24_and_24_i8008__core_2e_v_3a_274_24_31__Y);
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:275.31-275.36|i8008_core.v:164.6-172.3
	// cell $flatten\DUT.\Unit.$sub$i8008_core.v:275$33
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_275_24_33__Y = sub_uu<9>(p_DUT_2e_regA_2e_Q.curr, p_DUT_2e_regB_2e_Q.curr);
	// cells $flatten\DUT.\Unit.$sub$i8008_core.v:276$36 $flatten\DUT.\Unit.$sub$i8008_core.v:276$34
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_276_24_36__Y = sub_uu<9>(sub_uu<9>(p_DUT_2e_regA_2e_Q.curr, p_DUT_2e_regB_2e_Q.curr), i_flatten_5c_DUT_2e__5c_Unit_2e__24_and_24_i8008__core_2e_v_3a_276_24_35__Y);
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:745.19-745.50|i8008_core.v:197.4-204.3
	// cell $flatten\DUT.\Stack.$ternary$i8008_core.v:745$287
	i_flatten_5c_DUT_2e__5c_Stack_2e__24_ternary_24_i8008__core_2e_v_3a_745_24_287__Y = (p_DUT_2e_Stack_2e_Stack__ctrl.slice<4>().val() ? p_DUT_2e_Stack_2e_rs.slice<7,0>().val() : p_DUT_2e_Stack_2e_upper);
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:419.11-419.33|i8008_core.v:205.14-214.3
	// cell $flatten\DUT.\Brain.$eq$i8008_core.v:419$74
	i_flatten_5c_DUT_2e__5c_Brain_2e__24_eq_24_i8008__core_2e_v_3a_419_24_74__Y = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP0
	i_procmux_24_2504__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP1
	i_procmux_24_2504__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP2
	i_procmux_24_2504__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,4>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP3
	i_procmux_24_2504__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP4
	i_procmux_24_2504__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP5
	i_procmux_24_2504__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP6
	i_procmux_24_2504__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP7
	i_procmux_24_2504__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP8
	i_procmux_24_2504__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP9
	i_procmux_24_2504__CMP.slice<9>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2504_CMP10
	i_procmux_24_2504__CMP.slice<10>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2505_CMP0
	i_procmux_24_2505__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2505_CMP1
	i_procmux_24_2505__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0xbu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2506_CMP0
	i_procmux_24_2506__CMP.slice<0>() = logic_not<1>(p_DUT_2e_instr.curr.slice<7,1>().val());
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2506_CMP1
	i_procmux_24_2506__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0xffu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2506_CMP2
	i_procmux_24_2506__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1525_CMP0
	i_procmux_24_1525__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1525_CMP1
	i_procmux_24_1525__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1525_CMP2
	i_procmux_24_1525__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1525_CMP3
	i_procmux_24_1525__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1525_CMP4
	i_procmux_24_1525__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1525_CMP5
	i_procmux_24_1525__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1525_CMP6
	i_procmux_24_1525__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1526_CMP0
	i_procmux_24_1526__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1526_CMP1
	i_procmux_24_1526__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1061_CMP0
	i_procmux_24_1061__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1061_CMP1
	i_procmux_24_1061__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1062_CMP0
	i_procmux_24_1062__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1062_CMP1
	i_procmux_24_1062__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP0
	i_procmux_24_2490__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x17u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP1
	i_procmux_24_2490__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x14u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP2
	i_procmux_24_2490__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,4>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<5>{0x9u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP3
	i_procmux_24_2490__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP4
	i_procmux_24_2490__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP5
	i_procmux_24_2490__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP6
	i_procmux_24_2490__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP7
	i_procmux_24_2490__CMP.slice<7>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP8
	i_procmux_24_2490__CMP.slice<8>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP9
	i_procmux_24_2490__CMP.slice<9>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2490_CMP10
	i_procmux_24_2490__CMP.slice<10>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2491_CMP0
	i_procmux_24_2491__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2491_CMP1
	i_procmux_24_2491__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0xbu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2492_CMP0
	i_procmux_24_2492__CMP.slice<0>() = logic_not<1>(p_DUT_2e_instr.curr.slice<7,1>().val());
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2492_CMP1
	i_procmux_24_2492__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0xffu});
	// \full_case: 1
	// \src: i8008_core.v:358.7-382.14
	// cell $procmux$2492_CMP2
	i_procmux_24_2492__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1513_CMP0
	i_procmux_24_1513__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1513_CMP1
	i_procmux_24_1513__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xcu});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1513_CMP2
	i_procmux_24_1513__CMP.slice<2>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1513_CMP3
	i_procmux_24_1513__CMP.slice<3>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1513_CMP4
	i_procmux_24_1513__CMP.slice<4>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<5>{0xeu});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1513_CMP5
	i_procmux_24_1513__CMP.slice<5>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1513_CMP6
	i_procmux_24_1513__CMP.slice<6>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1514_CMP0
	i_procmux_24_1514__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,6>().concat(p_DUT_2e_instr.curr.slice<0>()).val(), value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:516.7-526.14
	// cell $procmux$1514_CMP1
	i_procmux_24_1514__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,3>().val(), value<5>{0x1fu});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1073_CMP0
	i_procmux_24_1073__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x18u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1073_CMP1
	i_procmux_24_1073__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x1au});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1074_CMP0
	i_procmux_24_1074__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x10u});
	// \full_case: 1
	// \src: i8008_core.v:607.7-627.14
	// cell $procmux$1074_CMP1
	i_procmux_24_1074__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_instr.curr.slice<7,5>().concat(p_DUT_2e_instr.curr.slice<2,0>()).val(), value<6>{0x12u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2508_CMP0
	i_procmux_24_2508__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2508_CMP1
	i_procmux_24_2508__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1528_CMP0
	i_procmux_24_1528__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1528_CMP1
	i_procmux_24_1528__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1065_CMP0
	i_procmux_24_1065__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1065_CMP1
	i_procmux_24_1065__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// connection
	p_READY = p_sw.slice<9>().val();
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2494_CMP0
	i_procmux_24_2494__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2494_CMP1
	i_procmux_24_2494__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1516_CMP0
	i_procmux_24_1516__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1516_CMP1
	i_procmux_24_1516__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1077_CMP0
	i_procmux_24_1077__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1077_CMP1
	i_procmux_24_1077__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// cells $procmux$496 $flatten\DUT.\Stack.$ternary$i8008_core.v:745$287 $procmux$493 $procmux$490 $procmux$487 $procmux$484 $procmux$481
	p_DUT_2e_bus = (p_DUT_2e_Brain_2e_ctrl__signals.slice<5>().val() ? i_flatten_5c_DUT_2e__5c_Stack_2e__24_ternary_24_i8008__core_2e_v_3a_745_24_287__Y : (p_DUT_2e_Brain_2e_ctrl__signals.slice<5>().val() ? value<8>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<11>().val() ? p_DUT_2e_rf_2e_rs : (p_DUT_2e_Brain_2e_ctrl__signals.slice<5>().val() ? value<8>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<11>().val() ? value<8>{0u} : (p_DUT_2e_Brain_2e_ctrl__signals.slice<24>().val() ? p_DUT_2e_Unit_2e_d.curr : i_flatten_5c_DUT_2e__24_4_5c_bus_5b_7_3a_0_5d_))))));
	// cells $procmux$578 $procmux$547 $procmux$537 $procmux$538_CMP0 $procmux$539_CMP0 $procmux$540_CMP0 $procmux$541_CMP0 $procmux$542_CMP0 $procmux$543_CMP0 $procmux$544_CMP0 $procmux$545_CMP0
	i_procmux_24_578__Y = (p_DUT_2e_Unit_2e_ALU__ctrl.slice<2>().val() ? value<8>{0u} : (p_DUT_2e_Unit_2e_ALU__ctrl.slice<2>().val() ? value<8>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x7u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_280_24_40__Y.slice<7,0>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x5u}) ? value<8>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x6u}) ? value<8>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x4u}) ? value<8>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x3u}) ? value<8>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x2u}) ? value<8>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x1u}) ? value<8>{0u} : (logic_not<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val()) ? value<8>{0u} : value<8>{0u}))))))))));
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2723_CMP0
	i_procmux_24_2723__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2723_CMP1
	i_procmux_24_2723__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2726_CMP0
	i_procmux_24_2726__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2726_CMP1
	i_procmux_24_2726__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1813_CMP0
	i_procmux_24_1813__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1813_CMP1
	i_procmux_24_1813__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1816_CMP0
	i_procmux_24_1816__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1816_CMP1
	i_procmux_24_1816__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1308_CMP0
	i_procmux_24_1308__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1308_CMP1
	i_procmux_24_1308__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1311_CMP0
	i_procmux_24_1311__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1311_CMP1
	i_procmux_24_1311__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2711_CMP0
	i_procmux_24_2711__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2711_CMP1
	i_procmux_24_2711__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2714_CMP0
	i_procmux_24_2714__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:330.5-466.12
	// cell $procmux$2714_CMP1
	i_procmux_24_2714__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1802_CMP0
	i_procmux_24_1802__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1802_CMP1
	i_procmux_24_1802__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1805_CMP0
	i_procmux_24_1805__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:468.5-567.12
	// cell $procmux$1805_CMP1
	i_procmux_24_1805__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1298_CMP0
	i_procmux_24_1298__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1298_CMP1
	i_procmux_24_1298__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x3u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1301_CMP0
	i_procmux_24_1301__CMP.slice<0>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x2u});
	// \full_case: 1
	// \src: i8008_core.v:569.5-671.12
	// cell $procmux$1301_CMP1
	i_procmux_24_1301__CMP.slice<1>() = eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x6u});
	// cells $procmux$578 $procmux$547 $procmux$537 $procmux$538_CMP0 $procmux$539_CMP0 $procmux$540_CMP0 $procmux$541_CMP0 $procmux$542_CMP0 $procmux$543_CMP0 $procmux$544_CMP0 $procmux$545_CMP0
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_NA_5b_7_3a_0_5d_ = i_procmux_24_578__Y;
	// connection
	i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_d_5b_7_3a_0_5d_ = (p_DUT_2e_Unit_2e_ALU__ctrl.slice<2>().val() ? (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x3u}) ? p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr.slice<3>().concat(p_DUT_2e_regA_2e_Q.curr.slice<7,1>()).val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x2u}) ? p_DUT_2e_regA_2e_Q.curr.slice<6,0>().concat(p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr.slice<3>()).val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x1u}) ? p_DUT_2e_regA_2e_Q.curr.slice<0>().concat(p_DUT_2e_regA_2e_Q.curr.slice<7,1>()).val() : (logic_not<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val()) ? p_DUT_2e_regA_2e_Q.curr.slice<6,0>().concat(p_DUT_2e_regA_2e_Q.curr.slice<7>()).val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x5u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_252_24_28__Y.slice<7,0>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x4u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_251_24_27__Y.slice<7,0>().val() : p_DUT_2e_Unit_2e_d.curr)))))) : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x7u}) ? value<8>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x5u}) ? xor_uu<8>(p_DUT_2e_regA_2e_Q.curr, p_DUT_2e_regB_2e_Q.curr) : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x6u}) ? or_uu<8>(p_DUT_2e_regA_2e_Q.curr, p_DUT_2e_regB_2e_Q.curr) : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x4u}) ? and_uu<8>(p_DUT_2e_regA_2e_Q.curr, p_DUT_2e_regB_2e_Q.curr) : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x3u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_276_24_36__Y.slice<7,0>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x2u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_275_24_33__Y.slice<7,0>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x1u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_274_24_32__Y.slice<7,0>().val() : (logic_not<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val()) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_273_24_29__Y.slice<7,0>().val() : i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_273_24_29__Y.slice<7,0>().val())))))))));
	// connection
	p_DUT_2e_SP__SEL_2e_up = p_DUT_2e_Brain_2e_ctrl__signals.slice<7>().val();
	// cells $flatten\DUT.$and$i8008_core.v:183$273 $flatten\DUT.$not$i8008_core.v:183$272 $flatten\DUT.$and$i8008_core.v:183$271 $flatten\DUT.$eq$i8008_core.v:183$270 $flatten\DUT.$and$i8008_core.v:183$269 $flatten\DUT.$not$i8008_core.v:183$268 $flatten\DUT.$and$i8008_core.v:183$267 $flatten\DUT.$not$i8008_core.v:183$266 $flatten\DUT.$eq$i8008_core.v:183$265
	p_DUT_2e_enable__SP = and_uu<1>(and_uu<1>(p_DUT_2e_Brain_2e_ctrl__signals.slice<9>().val(), not_u<1>(and_uu<1>(logic_not<1>(p_DUT_2e_SP__SEL_2e_Q.curr), not_u<1>(p_DUT_2e_Brain_2e_ctrl__signals.slice<7>().val())))), not_u<1>(and_uu<1>(eq_uu<1>(p_DUT_2e_SP__SEL_2e_Q.curr, value<3>{0x7u}), p_DUT_2e_Brain_2e_ctrl__signals.slice<7>().val())));
	// connection
	p_DUT_2e_Stack_2e_RST__AAA.slice<7,6>() = value<2>{0u};
	// connection
	p_DUT_2e_Stack_2e_RST__AAA.slice<2,0>() = value<3>{0u};
	// connection
	p_DUT_2e_Stack_2e_RST__AAA.slice<5,3>() = p_DUT_2e_bus.slice<5,3>().val();
	// \src: i8008_core.v:49.8-49.16
	// cell $not$i8008_core.v:49$2
	i_not_24_i8008__core_2e_v_3a_49_24_2__Y = not_u<1>(p_reset__n);
	// \src: i8008_core.v:49.8-49.16
	// cell $not$i8008_core.v:49$2
	p_DUT_2e_rst = i_not_24_i8008__core_2e_v_3a_49_24_2__Y;
	// connection
	p_INTR = p_sw.slice<8>().val();
	// connection
	p_DUT_2e_regA_2e_en = p_DUT_2e_Brain_2e_ctrl__signals.slice<32>().val();
	// cells $flatten\DUT.$or$i8008_core.v:148$263 $not$i8008_core.v:49$2
	p_DUT_2e_A__rst = or_uu<1>(p_DUT_2e_Brain_2e_ctrl__signals.slice<31>().val(), p_DUT_2e_rst);
	// connection
	p_DUT_2e_regB_2e_en = p_DUT_2e_Brain_2e_ctrl__signals.slice<29>().val();
	// connection
	p_DUT_2e_Unit_2e_flag__reg_2e_en = p_DUT_2e_Unit_2e_ALU__ctrl.slice<1>().val();
	// cells $flatten\DUT.\Unit.$ternary$i8008_core.v:285$46 $flatten\DUT.\Unit.$or$i8008_core.v:285$45 $flatten\DUT.\Unit.$reduce_xor$i8008_core.v:285$44 $flatten\DUT.\Unit.$reduce_xor$i8008_core.v:285$43 $flatten\DUT.\Unit.$ternary$i8008_core.v:284$42 $flatten\DUT.\Unit.$or$i8008_core.v:284$41 $flatten\DUT.\Unit.$ternary$i8008_core.v:286$53 $flatten\DUT.\Unit.$ternary$i8008_core.v:286$52 $flatten\DUT.\Unit.$eq$i8008_core.v:286$47 $flatten\DUT.\Unit.$not$i8008_core.v:286$49 $flatten\DUT.\Unit.$reduce_or$i8008_core.v:286$48 $flatten\DUT.\Unit.$not$i8008_core.v:286$51 $flatten\DUT.\Unit.$reduce_or$i8008_core.v:286$50 $procmux$572 $procmux$558 $procmux$551 $procmux$552_CMP0 $procmux$553_CMP0 $procmux$554_CMP0 $procmux$555_CMP0 $procmux$556_CMP0 $procmux$557_CMP0 $procmux$523 $procmux$513 $procmux$514_CMP0 $procmux$515_CMP0 $procmux$516_CMP0 $procmux$517_CMP0 $procmux$518_CMP0 $procmux$519_CMP0 $procmux$520_CMP0 $procmux$521_CMP0
	p_DUT_2e_Unit_2e_flag__in = (p_DUT_2e_Unit_2e_ALU__ctrl.slice<2>().val() ? (p_DUT_2e_Unit_2e_ALU__ctrl.slice<2>().val() ? (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x3u}) ? p_DUT_2e_regA_2e_Q.curr.slice<0>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x2u}) ? p_DUT_2e_regA_2e_Q.curr.slice<7>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x1u}) ? p_DUT_2e_regA_2e_Q.curr.slice<0>().val() : (logic_not<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val()) ? p_DUT_2e_regA_2e_Q.curr.slice<7>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x5u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_252_24_28__Y.slice<8>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<5,3>().val(), value<3>{0x4u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_251_24_27__Y.slice<8>().val() : value<1>{0u})))))) : value<1>{0u}) : (p_DUT_2e_Unit_2e_ALU__ctrl.slice<2>().val() ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x7u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_280_24_40__Y.slice<8>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x5u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x6u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x4u}) ? value<1>{0u} : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x3u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_276_24_36__Y.slice<8>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x2u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_sub_24_i8008__core_2e_v_3a_275_24_33__Y.slice<8>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x1u}) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_274_24_32__Y.slice<8>().val() : (logic_not<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val()) ? i_flatten_5c_DUT_2e__5c_Unit_2e__24_add_24_i8008__core_2e_v_3a_273_24_29__Y.slice<8>().val() : value<1>{0u})))))))))).concat((p_DUT_2e_Unit_2e_ALU__ctrl.slice<2>().val() ? p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr.slice<2>().val() : (eq_uu<1>(p_DUT_2e_Unit_2e_ALU__ctrl.slice<8,6>().val(), value<3>{0x7u}) ? not_u<1>(reduce_or<1>(i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_NA_5b_7_3a_0_5d_)) : not_u<1>(reduce_or<1>(i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_d_5b_7_3a_0_5d_))))).concat((p_DUT_2e_Unit_2e_ALU__ctrl.slice<2>().val() ? p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr.slice<1>().val() : or_uu<1>(i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_d_5b_7_3a_0_5d_.slice<7>().val(), i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_NA_5b_7_3a_0_5d_.slice<7>().val()))).concat((p_DUT_2e_Unit_2e_ALU__ctrl.slice<2>().val() ? p_DUT_2e_Unit_2e_flag__reg_2e_Q.curr.slice<0>().val() : or_uu<1>(reduce_xor<1>(i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_d_5b_7_3a_0_5d_), reduce_xor<1>(i_flatten_5c_DUT_2e__5c_Unit_2e__24_1_5c_NA_5b_7_3a_0_5d_)))).val();
	// cells $procmux$2806 $procmux$2807_CMP0 $procmux$2808_CMP0 $procmux$2809_CMP0 $procmux$1312 $procmux$1313_CMP0 $procmux$1305 $procmux$1306_CMP0 $procmux$1307_CMP0 $procmux$1308_ANY $procmux$1309_CMP0 $procmux$1310_CMP0 $procmux$1311_ANY $procmux$1066 $procmux$1067_CMP0 $procmux$1064 $procmux$1065_ANY $procmux$1060 $procmux$1061_ANY $procmux$1062_ANY $procmux$1063_CMP0 $procmux$1013 $procmux$1014_CMP0 $procmux$1011 $procmux$1012_ANY $procmux$1009 $procmux$1010_ANY $procmux$1007 $procmux$1040 $procmux$1041_CMP0 $procmux$1038 $procmux$1039_ANY $procmux$1036 $procmux$1037_ANY $procmux$1034 $procmux$1817 $procmux$1818_CMP0 $procmux$1810 $procmux$1811_CMP0 $procmux$1812_CMP0 $procmux$1813_ANY $procmux$1814_CMP0 $procmux$1815_CMP0 $procmux$1816_ANY $procmux$1529 $procmux$1530_CMP0 $procmux$1527 $procmux$1528_ANY $procmux$1524 $procmux$1525_ANY $procmux$1526_ANY $procmux$2727 $procmux$2728_CMP0 $procmux$2720 $procmux$2721_CMP0 $procmux$2722_CMP0 $procmux$2723_ANY $procmux$2724_CMP0 $procmux$2725_CMP0 $procmux$2726_ANY $procmux$2798 $procmux$2799_CMP0 $procmux$2796 $procmux$2797_CMP0 $procmux$2794 $procmux$2509 $procmux$2510_CMP0 $procmux$2507 $procmux$2508_ANY $procmux$2503 $procmux$2504_ANY $procmux$2505_ANY $procmux$2506_ANY $procmux$2407 $procmux$2408_CMP0 $procmux$2405 $procmux$2406_ANY $procmux$2403 $procmux$2404_ANY $procmux$2401 $procmux$2481 $procmux$2482_CMP0 $procmux$2479 $procmux$2480_ANY $procmux$2477 $procmux$2478_ANY $procmux$2475 $procmux$2427 $procmux$2428_CMP0 $procmux$2425 $procmux$2426_ANY $procmux$2423 $procmux$2424_ANY $procmux$2421 $procmux$2418
	p_DUT_2e_Brain_2e_next__cycle = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? p_DUT_2e_Brain_2e_cycle.curr : (reduce_or<1>(i_procmux_24_1308__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1065__CMP) ? (reduce_or<1>(i_procmux_24_1061__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1012__CMP) ? (reduce_or<1>(i_procmux_24_1010__CMP) ? (p_DUT_2e_Brain_2e_CF ? value<2>{0u} : p_DUT_2e_Brain_2e_cycle.curr) : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : (reduce_or<1>(i_procmux_24_1062__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1039__CMP) ? (reduce_or<1>(i_procmux_24_1037__CMP) ? (i_procmux_24_2850__Y ? p_DUT_2e_Brain_2e_cycle.curr : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : (eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu}) ? value<2>{0u} : p_DUT_2e_Brain_2e_cycle.curr))) : value<2>{0u}) : value<2>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? p_DUT_2e_Brain_2e_cycle.curr : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? p_DUT_2e_Brain_2e_cycle.curr : (reduce_or<1>(i_procmux_24_1311__CMP) ? p_DUT_2e_Brain_2e_cycle.curr : value<2>{0u})))))) : value<2>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? p_DUT_2e_Brain_2e_cycle.curr : (reduce_or<1>(i_procmux_24_1813__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1528__CMP) ? (reduce_or<1>(i_procmux_24_1525__CMP) ? value<2>{0x2u} : (reduce_or<1>(i_procmux_24_1526__CMP) ? value<2>{0u} : p_DUT_2e_Brain_2e_cycle.curr)) : value<2>{0u}) : value<2>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? p_DUT_2e_Brain_2e_cycle.curr : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? p_DUT_2e_Brain_2e_cycle.curr : (reduce_or<1>(i_procmux_24_1816__CMP) ? p_DUT_2e_Brain_2e_cycle.curr : value<2>{0u})))))) : value<2>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<2>{0u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_eq_24_i8008__core_2e_v_3a_419_24_74__Y ? value<2>{0x1u} : p_DUT_2e_Brain_2e_cycle.curr) : value<2>{0u}) : value<2>{0u}) : (reduce_or<1>(i_procmux_24_2723__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2508__CMP) ? (reduce_or<1>(i_procmux_24_2504__CMP) ? value<2>{0x1u} : (reduce_or<1>(i_procmux_24_2505__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2406__CMP) ? (reduce_or<1>(i_procmux_24_2404__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_or_24_i8008__core_2e_v_3a_371_24_67__Y ? p_DUT_2e_Brain_2e_cycle.curr : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : (reduce_or<1>(i_procmux_24_2506__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2480__CMP) ? (reduce_or<1>(i_procmux_24_2478__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_360_24_62__Y ? value<2>{0x1u} : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2426__CMP) ? (reduce_or<1>(i_procmux_24_2424__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_360_24_62__Y ? value<2>{0u} : (p_DUT_2e_Intr.curr ? value<2>{0u} : p_DUT_2e_Brain_2e_cycle.curr)) : value<2>{0u}) : value<2>{0u}) : value<2>{0u})) : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : p_DUT_2e_Brain_2e_cycle.curr))) : value<2>{0u}) : value<2>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? p_DUT_2e_Brain_2e_cycle.curr : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? p_DUT_2e_Brain_2e_cycle.curr : (reduce_or<1>(i_procmux_24_2726__CMP) ? p_DUT_2e_Brain_2e_cycle.curr : value<2>{0u})))))) : value<2>{0u}) : value<2>{0u})));
	// cells $procmux$2801 $procmux$2802_CMP0 $procmux$2803_CMP0 $procmux$2804_CMP0 $procmux$1302 $procmux$1303_CMP0 $procmux$1295 $procmux$1296_CMP0 $procmux$1297_CMP0 $procmux$1298_ANY $procmux$1299_CMP0 $procmux$1300_CMP0 $procmux$1301_ANY $procmux$1078 $procmux$1079_CMP0 $procmux$1076 $procmux$1077_ANY $procmux$1072 $procmux$1073_ANY $procmux$1074_ANY $procmux$1075_CMP0 $procmux$1026 $procmux$1027_CMP0 $procmux$1024 $procmux$1025_ANY $procmux$1022 $procmux$1023_ANY $procmux$1020 $procmux$1054 $procmux$1055_CMP0 $procmux$1052 $procmux$1053_ANY $procmux$1050 $procmux$1051_ANY $procmux$1048 $flatten\DUT.\Brain.$ternary$i8008_core.v:605$89 $flatten\DUT.\Brain.$ternary$i8008_core.v:588$88 $procmux$1806 $procmux$1807_CMP0 $procmux$1799 $procmux$1800_CMP0 $procmux$1801_CMP0 $procmux$1802_ANY $procmux$1803_CMP0 $procmux$1804_CMP0 $procmux$1805_ANY $procmux$1517 $procmux$1518_CMP0 $procmux$1515 $procmux$1516_ANY $procmux$1512 $procmux$1513_ANY $procmux$1514_ANY $flatten\DUT.\Brain.$ternary$i8008_core.v:514$82 $flatten\DUT.\Brain.$ternary$i8008_core.v:492$79 $procmux$2715 $procmux$2716_CMP0 $procmux$2708 $procmux$2709_CMP0 $procmux$2710_CMP0 $procmux$2711_ANY $procmux$2712_CMP0 $procmux$2713_CMP0 $procmux$2714_ANY $procmux$2147 $procmux$2148_CMP0 $procmux$2145 $procmux$2146_CMP0 $procmux$2143 $procmux$2495 $procmux$2496_CMP0 $procmux$2493 $procmux$2494_ANY $procmux$2489 $procmux$2490_ANY $procmux$2491_ANY $procmux$2492_ANY $procmux$2655 $procmux$2656_CMP0 $procmux$2653 $procmux$2654_ANY $procmux$2651 $procmux$2652_ANY $procmux$2649 $procmux$2464 $procmux$2465_CMP0 $procmux$2462 $procmux$2463_ANY $procmux$2460 $procmux$2461_ANY $procmux$2458 $procmux$2447 $procmux$2448_CMP0 $procmux$2445 $procmux$2446_ANY $procmux$2443 $procmux$2444_ANY $procmux$2441 $procmux$2438 $flatten\DUT.\Brain.$ternary$i8008_core.v:345$60 $flatten\DUT.\Brain.$ternary$i8008_core.v:338$59
	p_DUT_2e_Brain_2e_next__state = (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<3>{0x2u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<3>{0x5u} : (reduce_or<1>(i_procmux_24_1298__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1077__CMP) ? (reduce_or<1>(i_procmux_24_1073__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1025__CMP) ? (reduce_or<1>(i_procmux_24_1023__CMP) ? (p_DUT_2e_Brain_2e_CF ? value<3>{0x2u} : value<3>{0x7u}) : value<3>{0u}) : value<3>{0u}) : value<3>{0u}) : (reduce_or<1>(i_procmux_24_1074__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x2u}) ? (reduce_or<1>(i_procmux_24_1053__CMP) ? (reduce_or<1>(i_procmux_24_1051__CMP) ? (i_procmux_24_2850__Y ? value<3>{0x7u} : value<3>{0x2u}) : value<3>{0u}) : value<3>{0u}) : value<3>{0u}) : (eq_uu<1>(p_DUT_2e_instr.curr, value<8>{0x3eu}) ? value<3>{0x2u} : value<3>{0x7u}))) : value<3>{0u}) : value<3>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? (p_READY ? value<3>{0x1u} : value<3>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (p_READY ? value<3>{0x1u} : value<3>{0u}) : (reduce_or<1>(i_procmux_24_1301__CMP) ? value<3>{0x4u} : value<3>{0u})))))) : value<3>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<3>{0x2u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? value<3>{0x5u} : (reduce_or<1>(i_procmux_24_1802__CMP) ? (eq_uu<1>(p_DUT_2e_Brain_2e_cycle.curr, value<2>{0x1u}) ? (reduce_or<1>(i_procmux_24_1516__CMP) ? (reduce_or<1>(i_procmux_24_1513__CMP) ? value<3>{0x2u} : (reduce_or<1>(i_procmux_24_1514__CMP) ? value<3>{0x2u} : value<3>{0x7u})) : value<3>{0u}) : value<3>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? (p_READY ? value<3>{0x1u} : value<3>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (p_READY ? value<3>{0x1u} : value<3>{0u}) : (reduce_or<1>(i_procmux_24_1805__CMP) ? value<3>{0x4u} : value<3>{0u})))))) : value<3>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x5u}) ? value<3>{0x2u} : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x7u}) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_eq_24_i8008__core_2e_v_3a_419_24_74__Y ? value<3>{0x2u} : value<3>{0x5u}) : value<3>{0u}) : value<3>{0u}) : (reduce_or<1>(i_procmux_24_2711__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2494__CMP) ? (reduce_or<1>(i_procmux_24_2490__CMP) ? value<3>{0x2u} : (reduce_or<1>(i_procmux_24_2491__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2654__CMP) ? (reduce_or<1>(i_procmux_24_2652__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_or_24_i8008__core_2e_v_3a_371_24_67__Y ? value<3>{0x7u} : value<3>{0x2u}) : value<3>{0u}) : value<3>{0u}) : value<3>{0u}) : (reduce_or<1>(i_procmux_24_2492__CMP) ? (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2463__CMP) ? (reduce_or<1>(i_procmux_24_2461__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_360_24_62__Y ? value<3>{0x2u} : (logic_not<1>(p_DUT_2e_Brain_2e_cycle.curr) ? (reduce_or<1>(i_procmux_24_2446__CMP) ? (reduce_or<1>(i_procmux_24_2444__CMP) ? (i_flatten_5c_DUT_2e__5c_Brain_2e__24_ne_24_i8008__core_2e_v_3a_360_24_62__Y ? value<3>{0u} : (p_DUT_2e_Intr.curr ? value<3>{0x6u} : value<3>{0x3u})) : value<3>{0u}) : value<3>{0u}) : value<3>{0u})) : value<3>{0u}) : value<3>{0u}) : value<3>{0u}) : value<3>{0x7u}))) : value<3>{0u}) : value<3>{0u}) : (logic_not<1>(p_DUT_2e_Brain_2e_state.curr) ? (p_READY ? value<3>{0x1u} : value<3>{0u}) : (eq_uu<1>(p_DUT_2e_Brain_2e_state.curr, value<3>{0x4u}) ? (p_READY ? value<3>{0x1u} : value<3>{0u}) : (reduce_or<1>(i_procmux_24_2714__CMP) ? value<3>{0x4u} : value<3>{0u})))))) : value<3>{0u}) : value<3>{0x2u})));
	// connection
	p_DUT_2e_SP__rst = i_not_24_i8008__core_2e_v_3a_49_24_2__Y;
	// connection
	p_DUT_2e_Unit_2e_Flag__rst = i_not_24_i8008__core_2e_v_3a_49_24_2__Y;
	// connection
	p_DUT_2e_B__rst = i_not_24_i8008__core_2e_v_3a_49_24_2__Y;
	// connection
	p_DUT_2e_Sync = p_DUT_2e_Brain_2e_ctrl__signals.slice<38>().val();
	// connection
	p_D__in = p_sw.slice<7,0>().val();
	// \src: i8008_core.v:44.4-53.3|i8008_core.v:745.19-745.50|i8008_core.v:197.4-204.3
	// cell $flatten\DUT.\Stack.$ternary$i8008_core.v:745$287
	p_DUT_2e_Stack_2e_PC__out = i_flatten_5c_DUT_2e__5c_Stack_2e__24_ternary_24_i8008__core_2e_v_3a_745_24_287__Y;
	// cells $procmux$578 $procmux$547 $procmux$537 $procmux$538_CMP0 $procmux$539_CMP0 $procmux$540_CMP0 $procmux$541_CMP0 $procmux$542_CMP0 $procmux$543_CMP0 $procmux$544_CMP0 $procmux$545_CMP0
	p_DUT_2e_Unit_2e_NA = i_procmux_24_578__Y;
	// connection
	p_DUT_2e_IR__en = p_sw.slice<9>().val();
	// connection
	p_DUT_2e_IR__rst = i_not_24_i8008__core_2e_v_3a_49_24_2__Y;
	// connection
	p_DUT_2e_DBR__rst = i_not_24_i8008__core_2e_v_3a_49_24_2__Y;
	// connection
	p_DUT_2e_DBR__en = p_DUT_2e_Brain_2e_ctrl__signals.slice<38>().val();
	// connection
	p_chip__inputs.slice<9,0>() = p_sw.slice<9,0>().val();
	// connection
	p_chip__outputs.slice<11,9>() = p_DUT_2e_Brain_2e_state.curr;
	// connection
	p_chip__outputs.slice<8>() = p_DUT_2e_Sync;
	// connection
	p_chip__outputs.slice<7,0>() = p_DUT_2e_bus;
	// connection
	p_rst = not_u<1>(p_reset__n);
}

CXXRTL_EXTREMELY_COLD
void p_top::debug_info(debug_items &items, std::string path) {
	assert(path.empty() || path[path.size() - 1] == ' ');
	items.add(path + "DUT D_in", debug_item(debug_eval_outline, p_D__in, 0));
	items.add(path + "DUT INTR", debug_item(debug_eval_outline, p_INTR, 0));
	items.add(path + "DUT READY", debug_item(debug_eval_outline, p_READY, 0));
	items.add(path + "DUT clk", debug_item(debug_alias(), p_clk100, 0));
	items.add(path + "DUT rst", debug_item(debug_eval_outline, p_DUT_2e_rst, 0));
	items.add(path + "DUT D_out", debug_item(debug_eval_outline, p_DUT_2e_bus, 0));
	items.add(path + "DUT Sync", debug_item(debug_eval_outline, p_DUT_2e_Sync, 0));
	items.add(path + "DUT state", debug_item(debug_alias(), p_DUT_2e_Brain_2e_state, 0));
	items.add(path + "DUT bus", debug_item(debug_eval_outline, p_DUT_2e_bus, 0));
	items.add(path + "DUT instr", debug_item(p_DUT_2e_instr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "DUT enable_SP", debug_item(debug_eval_outline, p_DUT_2e_enable__SP, 0));
	items.add(path + "DUT Ready", debug_item(debug_eval_outline, p_READY, 0));
	items.add(path + "DUT Intr", debug_item(p_DUT_2e_Intr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "DUT DBR_en", debug_item(debug_eval_outline, p_DUT_2e_DBR__en, 0));
	items.add(path + "DUT A_rst", debug_item(debug_eval_outline, p_DUT_2e_A__rst, 0));
	items.add(path + "DUT B_rst", debug_item(debug_eval_outline, p_DUT_2e_B__rst, 0));
	items.add(path + "DUT DBR_rst", debug_item(debug_eval_outline, p_DUT_2e_DBR__rst, 0));
	items.add(path + "DUT IR_rst", debug_item(debug_eval_outline, p_DUT_2e_IR__rst, 0));
	items.add(path + "DUT SP_rst", debug_item(debug_eval_outline, p_DUT_2e_SP__rst, 0));
	items.add(path + "DUT IR_en", debug_item(debug_eval_outline, p_DUT_2e_IR__en, 0));
	items.add(path + "DUT A_in", debug_item(debug_eval_outline, p_DUT_2e_A__in, 0));
	items.add(path + "DUT A_out", debug_item(debug_alias(), p_DUT_2e_regA_2e_Q, 0));
	items.add(path + "DUT B_in", debug_item(debug_eval_outline, p_DUT_2e_B__in, 0));
	items.add(path + "DUT B_out", debug_item(debug_alias(), p_DUT_2e_regB_2e_Q, 0));
	items.add(path + "DUT ALU_out", debug_item(debug_alias(), p_DUT_2e_Unit_2e_d, 0));
	items.add(path + "DUT DBR_D", debug_item(debug_eval_outline, p_DUT_2e_bus, 0));
	items.add(path + "DUT DBR_out", debug_item(debug_eval_outline, p_DUT_2e_DBR__out, 0));
	items.add(path + "DUT DBR_in", debug_item(debug_eval_outline, p_DUT_2e_DBR__in, 0));
	items.add(path + "DUT PC_out", debug_item(debug_eval_outline, p_DUT_2e_Stack_2e_PC__out, 0));
	items.add(path + "DUT rf_out", debug_item(debug_eval_outline, p_DUT_2e_rf_2e_rs, 0));
	items.add(path + "DUT ctrl_signals", debug_item(debug_eval_outline, p_DUT_2e_Brain_2e_ctrl__signals, 0));
	items.add(path + "DUT flags", debug_item(debug_alias(), p_DUT_2e_Unit_2e_flag__reg_2e_Q, 0));
	items.add(path + "DUT sel_Stack", debug_item(debug_alias(), p_DUT_2e_SP__SEL_2e_Q, 0));
	items.add(path + "DUT cycle", debug_item(debug_eval_outline, p_DUT_2e_cycle, 0));
	items.add(path + "DUT regA Q", debug_item(p_DUT_2e_regA_2e_Q, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "DUT regA d", debug_item(debug_eval_outline, p_DUT_2e_bus, 0));
	items.add(path + "DUT regA clk", debug_item(debug_alias(), p_clk100, 0));
	items.add(path + "DUT regA clear", debug_item(debug_eval_outline, p_DUT_2e_A__rst, 0));
	items.add(path + "DUT regA en", debug_item(debug_eval_outline, p_DUT_2e_regA_2e_en, 0));
	items.add(path + "DUT regB Q", debug_item(p_DUT_2e_regB_2e_Q, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "DUT regB d", debug_item(debug_eval_outline, p_DUT_2e_bus, 0));
	items.add(path + "DUT regB clk", debug_item(debug_alias(), p_clk100, 0));
	items.add(path + "DUT regB clear", debug_item(debug_eval_outline, p_DUT_2e_B__rst, 0));
	items.add(path + "DUT regB en", debug_item(debug_eval_outline, p_DUT_2e_regB_2e_en, 0));
	items.add(path + "DUT Unit flag_reg en", debug_item(debug_eval_outline, p_DUT_2e_Unit_2e_flag__reg_2e_en, 0));
	items.add(path + "DUT Unit flag_reg clear", debug_item(debug_eval_outline, p_DUT_2e_Unit_2e_Flag__rst, 0));
	items.add(path + "DUT Unit flag_reg clk", debug_item(debug_alias(), p_clk100, 0));
	items.add(path + "DUT Unit flag_reg d", debug_item(debug_eval_outline, p_DUT_2e_Unit_2e_flag__in, 0));
	items.add(path + "DUT Unit flag_reg Q", debug_item(p_DUT_2e_Unit_2e_flag__reg_2e_Q, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "DUT Unit Flag_rst", debug_item(debug_eval_outline, p_DUT_2e_Unit_2e_Flag__rst, 0));
	items.add(path + "DUT Unit NA", debug_item(debug_eval_outline, p_DUT_2e_Unit_2e_NA, 0));
	items.add(path + "DUT Unit flag_in", debug_item(debug_eval_outline, p_DUT_2e_Unit_2e_flag__in, 0));
	items.add(path + "DUT Unit art_tmp", debug_item(debug_eval_outline, p_DUT_2e_Unit_2e_art__tmp, 0));
	items.add(path + "DUT Unit add_tmp", debug_item(debug_eval_outline, p_DUT_2e_Unit_2e_add__tmp, 0));
	items.add(path + "DUT Unit flags", debug_item(debug_alias(), p_DUT_2e_Unit_2e_flag__reg_2e_Q, 0));
	items.add(path + "DUT Unit d", debug_item(p_DUT_2e_Unit_2e_d, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "DUT Unit rst", debug_item(debug_eval_outline, p_DUT_2e_rst, 0));
	items.add(path + "DUT Unit clk", debug_item(debug_alias(), p_clk100, 0));
	items.add(path + "DUT Unit ALU_ctrl", debug_item(debug_eval_outline, p_DUT_2e_Unit_2e_ALU__ctrl, 0));
	items.add(path + "DUT Unit b", debug_item(debug_alias(), p_DUT_2e_regB_2e_Q, 0));
	items.add(path + "DUT Unit a", debug_item(debug_alias(), p_DUT_2e_regA_2e_Q, 0));
	items.add(path + "DUT rf rs", debug_item(debug_eval_outline, p_DUT_2e_rf_2e_rs, 0));
	items.add(path + "DUT rf rf_out", debug_item(debug_eval_outline, p_DUT_2e_rf_2e_rs, 0));
	items.add(path + "DUT rf rf_ctrl", debug_item(debug_eval_outline, p_DUT_2e_rf_2e_rf__ctrl, 0));
	items.add(path + "DUT rf rst", debug_item(debug_eval_outline, p_DUT_2e_rst, 0));
	items.add(path + "DUT rf clk", debug_item(debug_alias(), p_clk100, 0));
	items.add(path + "DUT rf bus", debug_item(debug_eval_outline, p_DUT_2e_bus, 0));
	items.add(path + "DUT SP_SEL Q", debug_item(p_DUT_2e_SP__SEL_2e_Q, 0, debug_item::DRIVEN_SYNC));
	static const value<3> const_p_DUT_2e_SP__SEL_2e_d = value<3>{0u};
	items.add(path + "DUT SP_SEL d", debug_item(const_p_DUT_2e_SP__SEL_2e_d, 0));
	items.add(path + "DUT SP_SEL clk", debug_item(debug_alias(), p_clk100, 0));
	items.add(path + "DUT SP_SEL up", debug_item(debug_eval_outline, p_DUT_2e_SP__SEL_2e_up, 0));
	static const value<1> const_p_DUT_2e_SP__SEL_2e_load = value<1>{0u};
	items.add(path + "DUT SP_SEL load", debug_item(const_p_DUT_2e_SP__SEL_2e_load, 0));
	items.add(path + "DUT SP_SEL clear", debug_item(debug_eval_outline, p_DUT_2e_SP__rst, 0));
	items.add(path + "DUT SP_SEL en", debug_item(debug_eval_outline, p_DUT_2e_enable__SP, 0));
	items.add(path + "DUT Stack RST_AAA", debug_item(debug_eval_outline, p_DUT_2e_Stack_2e_RST__AAA, 0));
	items.add(path + "DUT Stack upper", debug_item(debug_eval_outline, p_DUT_2e_Stack_2e_upper, 0));
	items.add(path + "DUT Stack rs", debug_item(debug_eval_outline, p_DUT_2e_Stack_2e_rs, 0));
	items.add(path + "DUT Stack PC_out", debug_item(debug_eval_outline, p_DUT_2e_Stack_2e_PC__out, 0));
	items.add(path + "DUT Stack Stack_ctrl", debug_item(debug_eval_outline, p_DUT_2e_Stack_2e_Stack__ctrl, 0));
	items.add(path + "DUT Stack rst", debug_item(debug_eval_outline, p_DUT_2e_rst, 0));
	items.add(path + "DUT Stack clk", debug_item(debug_alias(), p_clk100, 0));
	items.add(path + "DUT Stack sel", debug_item(debug_alias(), p_DUT_2e_SP__SEL_2e_Q, 0));
	items.add(path + "DUT Stack bus", debug_item(debug_eval_outline, p_DUT_2e_bus, 0));
	items.add(path + "DUT Brain CF", debug_item(debug_eval_outline, p_DUT_2e_Brain_2e_CF, 0));
	items.add(path + "DUT Brain next_state", debug_item(debug_eval_outline, p_DUT_2e_Brain_2e_next__state, 0));
	items.add(path + "DUT Brain next_cycle", debug_item(debug_eval_outline, p_DUT_2e_Brain_2e_next__cycle, 0));
	items.add(path + "DUT Brain cycle", debug_item(p_DUT_2e_Brain_2e_cycle, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "DUT Brain D5_3", debug_item(debug_eval_outline, p_DUT_2e_Brain_2e_D5__3, 0));
	items.add(path + "DUT Brain DDD", debug_item(debug_eval_outline, p_DUT_2e_Brain_2e_DDD, 0));
	items.add(path + "DUT Brain SSS", debug_item(debug_eval_outline, p_DUT_2e_Brain_2e_SSS, 0));
	items.add(path + "DUT Brain state", debug_item(p_DUT_2e_Brain_2e_state, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "DUT Brain ctrl_signals", debug_item(debug_eval_outline, p_DUT_2e_Brain_2e_ctrl__signals, 0));
	items.add(path + "DUT Brain flags", debug_item(debug_alias(), p_DUT_2e_Unit_2e_flag__reg_2e_Q, 0));
	items.add(path + "DUT Brain instr", debug_item(debug_alias(), p_DUT_2e_instr, 0));
	items.add(path + "DUT Brain rst", debug_item(debug_eval_outline, p_DUT_2e_rst, 0));
	items.add(path + "DUT Brain Intr", debug_item(debug_alias(), p_DUT_2e_Intr, 0));
	items.add(path + "DUT Brain Ready", debug_item(debug_eval_outline, p_READY, 0));
	items.add(path + "DUT Brain clk", debug_item(debug_alias(), p_clk100, 0));
	items.add(path + "state", debug_item(debug_alias(), p_DUT_2e_Brain_2e_state, 0));
	items.add(path + "Sync", debug_item(debug_eval_outline, p_DUT_2e_Sync, 0));
	items.add(path + "READY", debug_item(debug_eval_outline, p_READY, 0));
	items.add(path + "INTR", debug_item(debug_eval_outline, p_INTR, 0));
	items.add(path + "D_out", debug_item(debug_eval_outline, p_DUT_2e_bus, 0));
	items.add(path + "D_in", debug_item(debug_eval_outline, p_D__in, 0));
	items.add(path + "chip_outputs", debug_item(debug_eval_outline, p_chip__outputs, 0));
	items.add(path + "chip_inputs", debug_item(debug_eval_outline, p_chip__inputs, 0));
	items.add(path + "rst", debug_item(debug_eval_outline, p_rst, 0));
	items.add(path + "clk", debug_item(debug_alias(), p_clk100, 0));
	items.add(path + "display", debug_item(p_display, 0, debug_item::OUTPUT|debug_item::UNDRIVEN));
	items.add(path + "display_sel", debug_item(p_display__sel, 0, debug_item::OUTPUT|debug_item::UNDRIVEN));
	items.add(path + "sw", debug_item(p_sw, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	items.add(path + "led", debug_item(p_led, 0, debug_item::OUTPUT|debug_item::DRIVEN_COMB));
	items.add(path + "base_led", debug_item(p_base__led, 0, debug_item::OUTPUT|debug_item::UNDRIVEN));
	items.add(path + "uart_tx", debug_item(p_uart__tx, 0, debug_item::OUTPUT|debug_item::UNDRIVEN));
	items.add(path + "uart_rx", debug_item(p_uart__rx, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	items.add(path + "reset_n", debug_item(p_reset__n, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	items.add(path + "clk100", debug_item(p_clk100, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	items.add(path + "DUT rf rf", debug_item(memory_p_DUT_2e_rf_2e_rf, 0));
	items.add(path + "DUT Stack rf", debug_item(memory_p_DUT_2e_Stack_2e_rf, 0));
}

} // namespace cxxrtl_design

extern "C"
cxxrtl_toplevel cxxrtl_design_create() {
	return new _cxxrtl_toplevel { std::unique_ptr<cxxrtl_design::p_top>(new cxxrtl_design::p_top) };
}

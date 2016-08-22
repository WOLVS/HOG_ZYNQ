// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _image_filter_CvtColor_HH_
#define _image_filter_CvtColor_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "image_filter_mac_muladd_8ns_23ns_29ns_30_1.h"
#include "image_filter_mac_muladd_8ns_20ns_29ns_29_1.h"
#include "image_filter_mul_mul_8ns_22ns_29_1.h"

namespace ap_rtl {

struct image_filter_CvtColor : public sc_module {
    // Port declarations 21
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<11> > rows;
    sc_in< sc_lv<11> > cols;
    sc_in< sc_lv<8> > p_src_data_stream_0_V_dout;
    sc_in< sc_logic > p_src_data_stream_0_V_empty_n;
    sc_out< sc_logic > p_src_data_stream_0_V_read;
    sc_in< sc_lv<8> > p_src_data_stream_1_V_dout;
    sc_in< sc_logic > p_src_data_stream_1_V_empty_n;
    sc_out< sc_logic > p_src_data_stream_1_V_read;
    sc_in< sc_lv<8> > p_src_data_stream_2_V_dout;
    sc_in< sc_logic > p_src_data_stream_2_V_empty_n;
    sc_out< sc_logic > p_src_data_stream_2_V_read;
    sc_out< sc_lv<8> > p_dst_data_stream_V_din;
    sc_in< sc_logic > p_dst_data_stream_V_full_n;
    sc_out< sc_logic > p_dst_data_stream_V_write;


    // Module declarations
    image_filter_CvtColor(sc_module_name name);
    SC_HAS_PROCESS(image_filter_CvtColor);

    ~image_filter_CvtColor();

    sc_trace_file* mVcdFile;

    image_filter_mac_muladd_8ns_23ns_29ns_30_1<1,1,8,23,29,30>* image_filter_mac_muladd_8ns_23ns_29ns_30_1_U12;
    image_filter_mac_muladd_8ns_20ns_29ns_29_1<1,1,8,20,29,29>* image_filter_mac_muladd_8ns_20ns_29ns_29_1_U13;
    image_filter_mul_mul_8ns_22ns_29_1<1,1,8,22,29>* image_filter_mul_mul_8ns_22ns_29_1_U14;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_bdd_23;
    sc_signal< sc_lv<11> > j_i_reg_142;
    sc_signal< bool > ap_sig_bdd_55;
    sc_signal< sc_lv<1> > exitcond2_i_fu_153_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_bdd_67;
    sc_signal< sc_lv<11> > i_fu_158_p2;
    sc_signal< sc_lv<11> > i_reg_285;
    sc_signal< sc_lv<1> > exitcond_i_fu_164_p2;
    sc_signal< sc_lv<1> > exitcond_i_reg_290;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg0_fsm_2;
    sc_signal< bool > ap_sig_bdd_78;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it0;
    sc_signal< bool > ap_sig_bdd_92;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it1;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it2;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it3;
    sc_signal< sc_lv<1> > ap_reg_ppstg_exitcond_i_reg_290_pp0_it3;
    sc_signal< bool > ap_sig_bdd_104;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it4;
    sc_signal< sc_lv<1> > ap_reg_ppstg_exitcond_i_reg_290_pp0_it1;
    sc_signal< sc_lv<1> > ap_reg_ppstg_exitcond_i_reg_290_pp0_it2;
    sc_signal< sc_lv<11> > j_fu_169_p2;
    sc_signal< sc_lv<8> > tmp_71_reg_299;
    sc_signal< sc_lv<8> > tmp_72_reg_304;
    sc_signal< sc_lv<8> > ap_reg_ppstg_tmp_72_reg_304_pp0_it2;
    sc_signal< sc_lv<8> > tmp_73_reg_309;
    sc_signal< sc_lv<8> > ap_reg_ppstg_tmp_73_reg_309_pp0_it2;
    sc_signal< sc_lv<29> > r_V_i_i_fu_265_p2;
    sc_signal< sc_lv<29> > r_V_i_i_reg_314;
    sc_signal< sc_lv<1> > tmp_68_reg_319;
    sc_signal< sc_lv<8> > p_Val2_33_fu_214_p2;
    sc_signal< sc_lv<8> > p_Val2_33_reg_324;
    sc_signal< sc_lv<1> > tmp_69_reg_329;
    sc_signal< sc_lv<11> > i_i_reg_131;
    sc_signal< sc_logic > ap_sig_cseq_ST_st8_fsm_3;
    sc_signal< bool > ap_sig_bdd_156;
    sc_signal< sc_lv<29> > grp_fu_257_p3;
    sc_signal< sc_lv<30> > grp_fu_246_p3;
    sc_signal< sc_lv<1> > tmp_fu_196_p3;
    sc_signal< sc_lv<8> > p_Val2_32_fu_187_p4;
    sc_signal< sc_lv<8> > tmp_4_i_i_i_i_fu_203_p1;
    sc_signal< sc_lv<1> > p_Result_9_i_i_i_i_not_fu_228_p2;
    sc_signal< sc_lv<1> > not_carry_fu_233_p2;
    sc_signal< sc_lv<8> > grp_fu_246_p0;
    sc_signal< sc_lv<23> > grp_fu_246_p1;
    sc_signal< sc_lv<29> > grp_fu_246_p2;
    sc_signal< sc_lv<8> > grp_fu_257_p0;
    sc_signal< sc_lv<20> > grp_fu_257_p1;
    sc_signal< sc_lv<8> > r_V_i_i_fu_265_p0;
    sc_signal< sc_lv<22> > r_V_i_i_fu_265_p1;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< sc_lv<30> > grp_fu_246_p00;
    sc_signal< sc_lv<30> > grp_fu_246_p20;
    sc_signal< sc_lv<28> > grp_fu_257_p00;
    sc_signal< sc_lv<29> > r_V_i_i_fu_265_p00;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_st1_fsm_0;
    static const sc_lv<4> ap_ST_st2_fsm_1;
    static const sc_lv<4> ap_ST_pp0_stg0_fsm_2;
    static const sc_lv<4> ap_ST_st8_fsm_3;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<30> ap_const_lv30_259168;
    static const sc_lv<28> ap_const_lv28_74BC6;
    static const sc_lv<29> ap_const_lv29_1322D0;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sig_bdd_104();
    void thread_ap_sig_bdd_156();
    void thread_ap_sig_bdd_23();
    void thread_ap_sig_bdd_55();
    void thread_ap_sig_bdd_67();
    void thread_ap_sig_bdd_78();
    void thread_ap_sig_bdd_92();
    void thread_ap_sig_cseq_ST_pp0_stg0_fsm_2();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_ap_sig_cseq_ST_st8_fsm_3();
    void thread_exitcond2_i_fu_153_p2();
    void thread_exitcond_i_fu_164_p2();
    void thread_grp_fu_246_p0();
    void thread_grp_fu_246_p00();
    void thread_grp_fu_246_p1();
    void thread_grp_fu_246_p2();
    void thread_grp_fu_246_p20();
    void thread_grp_fu_257_p0();
    void thread_grp_fu_257_p00();
    void thread_grp_fu_257_p1();
    void thread_i_fu_158_p2();
    void thread_j_fu_169_p2();
    void thread_not_carry_fu_233_p2();
    void thread_p_Result_9_i_i_i_i_not_fu_228_p2();
    void thread_p_Val2_32_fu_187_p4();
    void thread_p_Val2_33_fu_214_p2();
    void thread_p_dst_data_stream_V_din();
    void thread_p_dst_data_stream_V_write();
    void thread_p_src_data_stream_0_V_read();
    void thread_p_src_data_stream_1_V_read();
    void thread_p_src_data_stream_2_V_read();
    void thread_r_V_i_i_fu_265_p0();
    void thread_r_V_i_i_fu_265_p00();
    void thread_r_V_i_i_fu_265_p1();
    void thread_tmp_4_i_i_i_i_fu_203_p1();
    void thread_tmp_fu_196_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

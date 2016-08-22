// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#include "image_filter_CvtColor.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic image_filter_CvtColor::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic image_filter_CvtColor::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> image_filter_CvtColor::ap_ST_st1_fsm_0 = "1";
const sc_lv<4> image_filter_CvtColor::ap_ST_st2_fsm_1 = "10";
const sc_lv<4> image_filter_CvtColor::ap_ST_pp0_stg0_fsm_2 = "100";
const sc_lv<4> image_filter_CvtColor::ap_ST_st8_fsm_3 = "1000";
const sc_lv<32> image_filter_CvtColor::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> image_filter_CvtColor::ap_const_lv1_1 = "1";
const sc_lv<32> image_filter_CvtColor::ap_const_lv32_1 = "1";
const sc_lv<32> image_filter_CvtColor::ap_const_lv32_2 = "10";
const sc_lv<1> image_filter_CvtColor::ap_const_lv1_0 = "0";
const sc_lv<11> image_filter_CvtColor::ap_const_lv11_0 = "00000000000";
const sc_lv<32> image_filter_CvtColor::ap_const_lv32_3 = "11";
const sc_lv<11> image_filter_CvtColor::ap_const_lv11_1 = "1";
const sc_lv<32> image_filter_CvtColor::ap_const_lv32_16 = "10110";
const sc_lv<32> image_filter_CvtColor::ap_const_lv32_1D = "11101";
const sc_lv<32> image_filter_CvtColor::ap_const_lv32_15 = "10101";
const sc_lv<32> image_filter_CvtColor::ap_const_lv32_7 = "111";
const sc_lv<8> image_filter_CvtColor::ap_const_lv8_FF = "11111111";
const sc_lv<30> image_filter_CvtColor::ap_const_lv30_259168 = "1001011001000101101000";
const sc_lv<28> image_filter_CvtColor::ap_const_lv28_74BC6 = "1110100101111000110";
const sc_lv<29> image_filter_CvtColor::ap_const_lv29_1322D0 = "100110010001011010000";

image_filter_CvtColor::image_filter_CvtColor(sc_module_name name) : sc_module(name), mVcdFile(0) {
    image_filter_mac_muladd_8ns_23ns_29ns_30_1_U12 = new image_filter_mac_muladd_8ns_23ns_29ns_30_1<1,1,8,23,29,30>("image_filter_mac_muladd_8ns_23ns_29ns_30_1_U12");
    image_filter_mac_muladd_8ns_23ns_29ns_30_1_U12->din0(grp_fu_246_p0);
    image_filter_mac_muladd_8ns_23ns_29ns_30_1_U12->din1(grp_fu_246_p1);
    image_filter_mac_muladd_8ns_23ns_29ns_30_1_U12->din2(grp_fu_246_p2);
    image_filter_mac_muladd_8ns_23ns_29ns_30_1_U12->dout(grp_fu_246_p3);
    image_filter_mac_muladd_8ns_20ns_29ns_29_1_U13 = new image_filter_mac_muladd_8ns_20ns_29ns_29_1<1,1,8,20,29,29>("image_filter_mac_muladd_8ns_20ns_29ns_29_1_U13");
    image_filter_mac_muladd_8ns_20ns_29ns_29_1_U13->din0(grp_fu_257_p0);
    image_filter_mac_muladd_8ns_20ns_29ns_29_1_U13->din1(grp_fu_257_p1);
    image_filter_mac_muladd_8ns_20ns_29ns_29_1_U13->din2(r_V_i_i_reg_314);
    image_filter_mac_muladd_8ns_20ns_29ns_29_1_U13->dout(grp_fu_257_p3);
    image_filter_mul_mul_8ns_22ns_29_1_U14 = new image_filter_mul_mul_8ns_22ns_29_1<1,1,8,22,29>("image_filter_mul_mul_8ns_22ns_29_1_U14");
    image_filter_mul_mul_8ns_22ns_29_1_U14->din0(r_V_i_i_fu_265_p0);
    image_filter_mul_mul_8ns_22ns_29_1_U14->din1(r_V_i_i_fu_265_p1);
    image_filter_mul_mul_8ns_22ns_29_1_U14->dout(r_V_i_i_fu_265_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( exitcond2_i_fu_153_p2 );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( exitcond2_i_fu_153_p2 );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );

    SC_METHOD(thread_ap_sig_bdd_104);
    sensitive << ( p_dst_data_stream_V_full_n );
    sensitive << ( ap_reg_ppstg_exitcond_i_reg_290_pp0_it3 );

    SC_METHOD(thread_ap_sig_bdd_156);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_23);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_55);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );

    SC_METHOD(thread_ap_sig_bdd_67);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_78);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_92);
    sensitive << ( p_src_data_stream_0_V_empty_n );
    sensitive << ( p_src_data_stream_1_V_empty_n );
    sensitive << ( p_src_data_stream_2_V_empty_n );
    sensitive << ( exitcond_i_reg_290 );

    SC_METHOD(thread_ap_sig_cseq_ST_pp0_stg0_fsm_2);
    sensitive << ( ap_sig_bdd_78 );

    SC_METHOD(thread_ap_sig_cseq_ST_st1_fsm_0);
    sensitive << ( ap_sig_bdd_23 );

    SC_METHOD(thread_ap_sig_cseq_ST_st2_fsm_1);
    sensitive << ( ap_sig_bdd_67 );

    SC_METHOD(thread_ap_sig_cseq_ST_st8_fsm_3);
    sensitive << ( ap_sig_bdd_156 );

    SC_METHOD(thread_exitcond2_i_fu_153_p2);
    sensitive << ( rows );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( i_i_reg_131 );

    SC_METHOD(thread_exitcond_i_fu_164_p2);
    sensitive << ( cols );
    sensitive << ( j_i_reg_142 );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it0 );
    sensitive << ( ap_sig_bdd_92 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( ap_sig_bdd_104 );
    sensitive << ( ap_reg_ppiten_pp0_it4 );

    SC_METHOD(thread_grp_fu_246_p0);
    sensitive << ( ap_reg_ppiten_pp0_it3 );
    sensitive << ( ap_reg_ppstg_exitcond_i_reg_290_pp0_it2 );
    sensitive << ( grp_fu_246_p00 );

    SC_METHOD(thread_grp_fu_246_p00);
    sensitive << ( ap_reg_ppstg_tmp_72_reg_304_pp0_it2 );

    SC_METHOD(thread_grp_fu_246_p1);
    sensitive << ( ap_reg_ppiten_pp0_it3 );
    sensitive << ( ap_reg_ppstg_exitcond_i_reg_290_pp0_it2 );

    SC_METHOD(thread_grp_fu_246_p2);
    sensitive << ( ap_reg_ppiten_pp0_it3 );
    sensitive << ( ap_reg_ppstg_exitcond_i_reg_290_pp0_it2 );
    sensitive << ( grp_fu_246_p20 );

    SC_METHOD(thread_grp_fu_246_p20);
    sensitive << ( grp_fu_257_p3 );

    SC_METHOD(thread_grp_fu_257_p0);
    sensitive << ( ap_reg_ppiten_pp0_it3 );
    sensitive << ( ap_reg_ppstg_exitcond_i_reg_290_pp0_it2 );
    sensitive << ( grp_fu_257_p00 );

    SC_METHOD(thread_grp_fu_257_p00);
    sensitive << ( ap_reg_ppstg_tmp_73_reg_309_pp0_it2 );

    SC_METHOD(thread_grp_fu_257_p1);
    sensitive << ( ap_reg_ppiten_pp0_it3 );
    sensitive << ( ap_reg_ppstg_exitcond_i_reg_290_pp0_it2 );

    SC_METHOD(thread_i_fu_158_p2);
    sensitive << ( i_i_reg_131 );

    SC_METHOD(thread_j_fu_169_p2);
    sensitive << ( j_i_reg_142 );

    SC_METHOD(thread_not_carry_fu_233_p2);
    sensitive << ( tmp_69_reg_329 );
    sensitive << ( p_Result_9_i_i_i_i_not_fu_228_p2 );

    SC_METHOD(thread_p_Result_9_i_i_i_i_not_fu_228_p2);
    sensitive << ( tmp_68_reg_319 );

    SC_METHOD(thread_p_Val2_32_fu_187_p4);
    sensitive << ( grp_fu_246_p3 );

    SC_METHOD(thread_p_Val2_33_fu_214_p2);
    sensitive << ( p_Val2_32_fu_187_p4 );
    sensitive << ( tmp_4_i_i_i_i_fu_203_p1 );

    SC_METHOD(thread_p_dst_data_stream_V_din);
    sensitive << ( ap_sig_bdd_92 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( ap_reg_ppstg_exitcond_i_reg_290_pp0_it3 );
    sensitive << ( ap_sig_bdd_104 );
    sensitive << ( ap_reg_ppiten_pp0_it4 );
    sensitive << ( p_Val2_33_reg_324 );
    sensitive << ( not_carry_fu_233_p2 );

    SC_METHOD(thread_p_dst_data_stream_V_write);
    sensitive << ( ap_sig_bdd_92 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( ap_reg_ppstg_exitcond_i_reg_290_pp0_it3 );
    sensitive << ( ap_sig_bdd_104 );
    sensitive << ( ap_reg_ppiten_pp0_it4 );

    SC_METHOD(thread_p_src_data_stream_0_V_read);
    sensitive << ( exitcond_i_reg_290 );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_sig_bdd_92 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( ap_sig_bdd_104 );
    sensitive << ( ap_reg_ppiten_pp0_it4 );

    SC_METHOD(thread_p_src_data_stream_1_V_read);
    sensitive << ( exitcond_i_reg_290 );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_sig_bdd_92 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( ap_sig_bdd_104 );
    sensitive << ( ap_reg_ppiten_pp0_it4 );

    SC_METHOD(thread_p_src_data_stream_2_V_read);
    sensitive << ( exitcond_i_reg_290 );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_sig_bdd_92 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( ap_sig_bdd_104 );
    sensitive << ( ap_reg_ppiten_pp0_it4 );

    SC_METHOD(thread_r_V_i_i_fu_265_p0);
    sensitive << ( ap_reg_ppiten_pp0_it2 );
    sensitive << ( r_V_i_i_fu_265_p00 );

    SC_METHOD(thread_r_V_i_i_fu_265_p00);
    sensitive << ( tmp_71_reg_299 );

    SC_METHOD(thread_r_V_i_i_fu_265_p1);
    sensitive << ( ap_reg_ppiten_pp0_it2 );

    SC_METHOD(thread_tmp_4_i_i_i_i_fu_203_p1);
    sensitive << ( tmp_fu_196_p3 );

    SC_METHOD(thread_tmp_fu_196_p3);
    sensitive << ( grp_fu_246_p3 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_sig_bdd_55 );
    sensitive << ( exitcond2_i_fu_153_p2 );
    sensitive << ( exitcond_i_fu_164_p2 );
    sensitive << ( ap_reg_ppiten_pp0_it0 );
    sensitive << ( ap_sig_bdd_92 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( ap_reg_ppiten_pp0_it3 );
    sensitive << ( ap_sig_bdd_104 );
    sensitive << ( ap_reg_ppiten_pp0_it4 );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "0001";
    ap_reg_ppiten_pp0_it0 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it1 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it2 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it3 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it4 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "image_filter_CvtColor_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, rows, "(port)rows");
    sc_trace(mVcdFile, cols, "(port)cols");
    sc_trace(mVcdFile, p_src_data_stream_0_V_dout, "(port)p_src_data_stream_0_V_dout");
    sc_trace(mVcdFile, p_src_data_stream_0_V_empty_n, "(port)p_src_data_stream_0_V_empty_n");
    sc_trace(mVcdFile, p_src_data_stream_0_V_read, "(port)p_src_data_stream_0_V_read");
    sc_trace(mVcdFile, p_src_data_stream_1_V_dout, "(port)p_src_data_stream_1_V_dout");
    sc_trace(mVcdFile, p_src_data_stream_1_V_empty_n, "(port)p_src_data_stream_1_V_empty_n");
    sc_trace(mVcdFile, p_src_data_stream_1_V_read, "(port)p_src_data_stream_1_V_read");
    sc_trace(mVcdFile, p_src_data_stream_2_V_dout, "(port)p_src_data_stream_2_V_dout");
    sc_trace(mVcdFile, p_src_data_stream_2_V_empty_n, "(port)p_src_data_stream_2_V_empty_n");
    sc_trace(mVcdFile, p_src_data_stream_2_V_read, "(port)p_src_data_stream_2_V_read");
    sc_trace(mVcdFile, p_dst_data_stream_V_din, "(port)p_dst_data_stream_V_din");
    sc_trace(mVcdFile, p_dst_data_stream_V_full_n, "(port)p_dst_data_stream_V_full_n");
    sc_trace(mVcdFile, p_dst_data_stream_V_write, "(port)p_dst_data_stream_V_write");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st1_fsm_0, "ap_sig_cseq_ST_st1_fsm_0");
    sc_trace(mVcdFile, ap_sig_bdd_23, "ap_sig_bdd_23");
    sc_trace(mVcdFile, j_i_reg_142, "j_i_reg_142");
    sc_trace(mVcdFile, ap_sig_bdd_55, "ap_sig_bdd_55");
    sc_trace(mVcdFile, exitcond2_i_fu_153_p2, "exitcond2_i_fu_153_p2");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st2_fsm_1, "ap_sig_cseq_ST_st2_fsm_1");
    sc_trace(mVcdFile, ap_sig_bdd_67, "ap_sig_bdd_67");
    sc_trace(mVcdFile, i_fu_158_p2, "i_fu_158_p2");
    sc_trace(mVcdFile, i_reg_285, "i_reg_285");
    sc_trace(mVcdFile, exitcond_i_fu_164_p2, "exitcond_i_fu_164_p2");
    sc_trace(mVcdFile, exitcond_i_reg_290, "exitcond_i_reg_290");
    sc_trace(mVcdFile, ap_sig_cseq_ST_pp0_stg0_fsm_2, "ap_sig_cseq_ST_pp0_stg0_fsm_2");
    sc_trace(mVcdFile, ap_sig_bdd_78, "ap_sig_bdd_78");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it0, "ap_reg_ppiten_pp0_it0");
    sc_trace(mVcdFile, ap_sig_bdd_92, "ap_sig_bdd_92");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it1, "ap_reg_ppiten_pp0_it1");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it2, "ap_reg_ppiten_pp0_it2");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it3, "ap_reg_ppiten_pp0_it3");
    sc_trace(mVcdFile, ap_reg_ppstg_exitcond_i_reg_290_pp0_it3, "ap_reg_ppstg_exitcond_i_reg_290_pp0_it3");
    sc_trace(mVcdFile, ap_sig_bdd_104, "ap_sig_bdd_104");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it4, "ap_reg_ppiten_pp0_it4");
    sc_trace(mVcdFile, ap_reg_ppstg_exitcond_i_reg_290_pp0_it1, "ap_reg_ppstg_exitcond_i_reg_290_pp0_it1");
    sc_trace(mVcdFile, ap_reg_ppstg_exitcond_i_reg_290_pp0_it2, "ap_reg_ppstg_exitcond_i_reg_290_pp0_it2");
    sc_trace(mVcdFile, j_fu_169_p2, "j_fu_169_p2");
    sc_trace(mVcdFile, tmp_71_reg_299, "tmp_71_reg_299");
    sc_trace(mVcdFile, tmp_72_reg_304, "tmp_72_reg_304");
    sc_trace(mVcdFile, ap_reg_ppstg_tmp_72_reg_304_pp0_it2, "ap_reg_ppstg_tmp_72_reg_304_pp0_it2");
    sc_trace(mVcdFile, tmp_73_reg_309, "tmp_73_reg_309");
    sc_trace(mVcdFile, ap_reg_ppstg_tmp_73_reg_309_pp0_it2, "ap_reg_ppstg_tmp_73_reg_309_pp0_it2");
    sc_trace(mVcdFile, r_V_i_i_fu_265_p2, "r_V_i_i_fu_265_p2");
    sc_trace(mVcdFile, r_V_i_i_reg_314, "r_V_i_i_reg_314");
    sc_trace(mVcdFile, tmp_68_reg_319, "tmp_68_reg_319");
    sc_trace(mVcdFile, p_Val2_33_fu_214_p2, "p_Val2_33_fu_214_p2");
    sc_trace(mVcdFile, p_Val2_33_reg_324, "p_Val2_33_reg_324");
    sc_trace(mVcdFile, tmp_69_reg_329, "tmp_69_reg_329");
    sc_trace(mVcdFile, i_i_reg_131, "i_i_reg_131");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st8_fsm_3, "ap_sig_cseq_ST_st8_fsm_3");
    sc_trace(mVcdFile, ap_sig_bdd_156, "ap_sig_bdd_156");
    sc_trace(mVcdFile, grp_fu_257_p3, "grp_fu_257_p3");
    sc_trace(mVcdFile, grp_fu_246_p3, "grp_fu_246_p3");
    sc_trace(mVcdFile, tmp_fu_196_p3, "tmp_fu_196_p3");
    sc_trace(mVcdFile, p_Val2_32_fu_187_p4, "p_Val2_32_fu_187_p4");
    sc_trace(mVcdFile, tmp_4_i_i_i_i_fu_203_p1, "tmp_4_i_i_i_i_fu_203_p1");
    sc_trace(mVcdFile, p_Result_9_i_i_i_i_not_fu_228_p2, "p_Result_9_i_i_i_i_not_fu_228_p2");
    sc_trace(mVcdFile, not_carry_fu_233_p2, "not_carry_fu_233_p2");
    sc_trace(mVcdFile, grp_fu_246_p0, "grp_fu_246_p0");
    sc_trace(mVcdFile, grp_fu_246_p1, "grp_fu_246_p1");
    sc_trace(mVcdFile, grp_fu_246_p2, "grp_fu_246_p2");
    sc_trace(mVcdFile, grp_fu_257_p0, "grp_fu_257_p0");
    sc_trace(mVcdFile, grp_fu_257_p1, "grp_fu_257_p1");
    sc_trace(mVcdFile, r_V_i_i_fu_265_p0, "r_V_i_i_fu_265_p0");
    sc_trace(mVcdFile, r_V_i_i_fu_265_p1, "r_V_i_i_fu_265_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, grp_fu_246_p00, "grp_fu_246_p00");
    sc_trace(mVcdFile, grp_fu_246_p20, "grp_fu_246_p20");
    sc_trace(mVcdFile, grp_fu_257_p00, "grp_fu_257_p00");
    sc_trace(mVcdFile, r_V_i_i_fu_265_p00, "r_V_i_i_fu_265_p00");
#endif

    }
}

image_filter_CvtColor::~image_filter_CvtColor() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete image_filter_mac_muladd_8ns_23ns_29ns_30_1_U12;
    delete image_filter_mac_muladd_8ns_20ns_29ns_29_1_U13;
    delete image_filter_mul_mul_8ns_22ns_29_1_U14;
}

void image_filter_CvtColor::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
                    !esl_seteq<1,1,1>(exitcond2_i_fu_153_p2.read(), ap_const_lv1_0))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
             !((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) && 
             !esl_seteq<1,1,1>(exitcond_i_fu_164_p2.read(), ap_const_lv1_0))) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
                    esl_seteq<1,1,1>(exitcond2_i_fu_153_p2.read(), ap_const_lv1_0))) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
             !((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) && 
             esl_seteq<1,1,1>(exitcond_i_fu_164_p2.read(), ap_const_lv1_0))) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
                     esl_seteq<1,1,1>(exitcond2_i_fu_153_p2.read(), ap_const_lv1_0)) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
                     !((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) && 
                     !esl_seteq<1,1,1>(exitcond_i_fu_164_p2.read(), ap_const_lv1_0)))) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it2 = ap_const_logic_0;
    } else {
        if (!((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read())))) {
            ap_reg_ppiten_pp0_it2 = ap_reg_ppiten_pp0_it1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it3 = ap_const_logic_0;
    } else {
        if (!((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read())))) {
            ap_reg_ppiten_pp0_it3 = ap_reg_ppiten_pp0_it2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it4 = ap_const_logic_0;
    } else {
        if (!((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read())))) {
            ap_reg_ppiten_pp0_it4 = ap_reg_ppiten_pp0_it3.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
                    esl_seteq<1,1,1>(exitcond2_i_fu_153_p2.read(), ap_const_lv1_0))) {
            ap_reg_ppiten_pp0_it4 = ap_const_logic_0;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st8_fsm_3.read())) {
        i_i_reg_131 = i_reg_285.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !ap_sig_bdd_55.read())) {
        i_i_reg_131 = ap_const_lv11_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         !((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) && 
         esl_seteq<1,1,1>(exitcond_i_fu_164_p2.read(), ap_const_lv1_0))) {
        j_i_reg_142 = j_fu_169_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
                esl_seteq<1,1,1>(exitcond2_i_fu_153_p2.read(), ap_const_lv1_0))) {
        j_i_reg_142 = ap_const_lv11_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && !((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        ap_reg_ppstg_exitcond_i_reg_290_pp0_it1 = exitcond_i_reg_290.read();
        exitcond_i_reg_290 = exitcond_i_fu_164_p2.read();
    }
    if (!((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read())))) {
        ap_reg_ppstg_exitcond_i_reg_290_pp0_it2 = ap_reg_ppstg_exitcond_i_reg_290_pp0_it1.read();
        ap_reg_ppstg_exitcond_i_reg_290_pp0_it3 = ap_reg_ppstg_exitcond_i_reg_290_pp0_it2.read();
        ap_reg_ppstg_tmp_72_reg_304_pp0_it2 = tmp_72_reg_304.read();
        ap_reg_ppstg_tmp_73_reg_309_pp0_it2 = tmp_73_reg_309.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        i_reg_285 = i_fu_158_p2.read();
    }
    if ((!((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_reg_290_pp0_it2.read()))) {
        p_Val2_33_reg_324 = p_Val2_33_fu_214_p2.read();
        tmp_68_reg_319 = grp_fu_246_p3.read().range(29, 29);
        tmp_69_reg_329 = p_Val2_33_fu_214_p2.read().range(7, 7);
    }
    if ((!((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_reg_290_pp0_it1.read()))) {
        r_V_i_i_reg_314 = r_V_i_i_fu_265_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && esl_seteq<1,1,1>(exitcond_i_reg_290.read(), ap_const_lv1_0) && !((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        tmp_71_reg_299 = p_src_data_stream_0_V_dout.read();
        tmp_72_reg_304 = p_src_data_stream_1_V_dout.read();
        tmp_73_reg_309 = p_src_data_stream_2_V_dout.read();
    }
}

void image_filter_CvtColor::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_done_reg.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
          !esl_seteq<1,1,1>(exitcond2_i_fu_153_p2.read(), ap_const_lv1_0)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void image_filter_CvtColor::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void image_filter_CvtColor::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         !esl_seteq<1,1,1>(exitcond2_i_fu_153_p2.read(), ap_const_lv1_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void image_filter_CvtColor::thread_ap_sig_bdd_104() {
    ap_sig_bdd_104 = (esl_seteq<1,1,1>(p_dst_data_stream_V_full_n.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_reg_290_pp0_it3.read()));
}

void image_filter_CvtColor::thread_ap_sig_bdd_156() {
    ap_sig_bdd_156 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(3, 3));
}

void image_filter_CvtColor::thread_ap_sig_bdd_23() {
    ap_sig_bdd_23 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void image_filter_CvtColor::thread_ap_sig_bdd_55() {
    ap_sig_bdd_55 = (esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void image_filter_CvtColor::thread_ap_sig_bdd_67() {
    ap_sig_bdd_67 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void image_filter_CvtColor::thread_ap_sig_bdd_78() {
    ap_sig_bdd_78 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void image_filter_CvtColor::thread_ap_sig_bdd_92() {
    ap_sig_bdd_92 = ((esl_seteq<1,1,1>(p_src_data_stream_0_V_empty_n.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(exitcond_i_reg_290.read(), ap_const_lv1_0)) || (esl_seteq<1,1,1>(exitcond_i_reg_290.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(p_src_data_stream_1_V_empty_n.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond_i_reg_290.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(p_src_data_stream_2_V_empty_n.read(), ap_const_logic_0)));
}

void image_filter_CvtColor::thread_ap_sig_cseq_ST_pp0_stg0_fsm_2() {
    if (ap_sig_bdd_78.read()) {
        ap_sig_cseq_ST_pp0_stg0_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg0_fsm_2 = ap_const_logic_0;
    }
}

void image_filter_CvtColor::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_bdd_23.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void image_filter_CvtColor::thread_ap_sig_cseq_ST_st2_fsm_1() {
    if (ap_sig_bdd_67.read()) {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_0;
    }
}

void image_filter_CvtColor::thread_ap_sig_cseq_ST_st8_fsm_3() {
    if (ap_sig_bdd_156.read()) {
        ap_sig_cseq_ST_st8_fsm_3 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st8_fsm_3 = ap_const_logic_0;
    }
}

void image_filter_CvtColor::thread_exitcond2_i_fu_153_p2() {
    exitcond2_i_fu_153_p2 = (!i_i_reg_131.read().is_01() || !rows.read().is_01())? sc_lv<1>(): sc_lv<1>(i_i_reg_131.read() == rows.read());
}

void image_filter_CvtColor::thread_exitcond_i_fu_164_p2() {
    exitcond_i_fu_164_p2 = (!j_i_reg_142.read().is_01() || !cols.read().is_01())? sc_lv<1>(): sc_lv<1>(j_i_reg_142.read() == cols.read());
}

void image_filter_CvtColor::thread_grp_fu_246_p0() {
    grp_fu_246_p0 =  (sc_lv<8>) (grp_fu_246_p00.read());
}

void image_filter_CvtColor::thread_grp_fu_246_p00() {
    grp_fu_246_p00 = esl_zext<30,8>(ap_reg_ppstg_tmp_72_reg_304_pp0_it2.read());
}

void image_filter_CvtColor::thread_grp_fu_246_p1() {
    grp_fu_246_p1 =  (sc_lv<23>) (ap_const_lv30_259168);
}

void image_filter_CvtColor::thread_grp_fu_246_p2() {
    grp_fu_246_p2 =  (sc_lv<29>) (grp_fu_246_p20.read());
}

void image_filter_CvtColor::thread_grp_fu_246_p20() {
    grp_fu_246_p20 = esl_zext<30,29>(grp_fu_257_p3.read());
}

void image_filter_CvtColor::thread_grp_fu_257_p0() {
    grp_fu_257_p0 =  (sc_lv<8>) (grp_fu_257_p00.read());
}

void image_filter_CvtColor::thread_grp_fu_257_p00() {
    grp_fu_257_p00 = esl_zext<28,8>(ap_reg_ppstg_tmp_73_reg_309_pp0_it2.read());
}

void image_filter_CvtColor::thread_grp_fu_257_p1() {
    grp_fu_257_p1 =  (sc_lv<20>) (ap_const_lv28_74BC6);
}

void image_filter_CvtColor::thread_i_fu_158_p2() {
    i_fu_158_p2 = (!i_i_reg_131.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(i_i_reg_131.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void image_filter_CvtColor::thread_j_fu_169_p2() {
    j_fu_169_p2 = (!j_i_reg_142.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(j_i_reg_142.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void image_filter_CvtColor::thread_not_carry_fu_233_p2() {
    not_carry_fu_233_p2 = (tmp_69_reg_329.read() | p_Result_9_i_i_i_i_not_fu_228_p2.read());
}

void image_filter_CvtColor::thread_p_Result_9_i_i_i_i_not_fu_228_p2() {
    p_Result_9_i_i_i_i_not_fu_228_p2 = (tmp_68_reg_319.read() ^ ap_const_lv1_1);
}

void image_filter_CvtColor::thread_p_Val2_32_fu_187_p4() {
    p_Val2_32_fu_187_p4 = grp_fu_246_p3.read().range(29, 22);
}

void image_filter_CvtColor::thread_p_Val2_33_fu_214_p2() {
    p_Val2_33_fu_214_p2 = (!p_Val2_32_fu_187_p4.read().is_01() || !tmp_4_i_i_i_i_fu_203_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_Val2_32_fu_187_p4.read()) + sc_biguint<8>(tmp_4_i_i_i_i_fu_203_p1.read()));
}

void image_filter_CvtColor::thread_p_dst_data_stream_V_din() {
    p_dst_data_stream_V_din = (!not_carry_fu_233_p2.read()[0].is_01())? sc_lv<8>(): ((not_carry_fu_233_p2.read()[0].to_bool())? p_Val2_33_reg_324.read(): ap_const_lv8_FF);
}

void image_filter_CvtColor::thread_p_dst_data_stream_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_reg_290_pp0_it3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
         !((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        p_dst_data_stream_V_write = ap_const_logic_1;
    } else {
        p_dst_data_stream_V_write = ap_const_logic_0;
    }
}

void image_filter_CvtColor::thread_p_src_data_stream_0_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(exitcond_i_reg_290.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         !((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        p_src_data_stream_0_V_read = ap_const_logic_1;
    } else {
        p_src_data_stream_0_V_read = ap_const_logic_0;
    }
}

void image_filter_CvtColor::thread_p_src_data_stream_1_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(exitcond_i_reg_290.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         !((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        p_src_data_stream_1_V_read = ap_const_logic_1;
    } else {
        p_src_data_stream_1_V_read = ap_const_logic_0;
    }
}

void image_filter_CvtColor::thread_p_src_data_stream_2_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(exitcond_i_reg_290.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         !((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        p_src_data_stream_2_V_read = ap_const_logic_1;
    } else {
        p_src_data_stream_2_V_read = ap_const_logic_0;
    }
}

void image_filter_CvtColor::thread_r_V_i_i_fu_265_p0() {
    r_V_i_i_fu_265_p0 =  (sc_lv<8>) (r_V_i_i_fu_265_p00.read());
}

void image_filter_CvtColor::thread_r_V_i_i_fu_265_p00() {
    r_V_i_i_fu_265_p00 = esl_zext<29,8>(tmp_71_reg_299.read());
}

void image_filter_CvtColor::thread_r_V_i_i_fu_265_p1() {
    r_V_i_i_fu_265_p1 =  (sc_lv<22>) (ap_const_lv29_1322D0);
}

void image_filter_CvtColor::thread_tmp_4_i_i_i_i_fu_203_p1() {
    tmp_4_i_i_i_i_fu_203_p1 = esl_zext<8,1>(tmp_fu_196_p3.read());
}

void image_filter_CvtColor::thread_tmp_fu_196_p3() {
    tmp_fu_196_p3 = grp_fu_246_p3.read().range(21, 21);
}

void image_filter_CvtColor::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!ap_sig_bdd_55.read()) {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 2 : 
            if (!esl_seteq<1,1,1>(exitcond2_i_fu_153_p2.read(), ap_const_lv1_0)) {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            } else {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_2;
            }
            break;
        case 4 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && !((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) && !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read())) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && !((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) && !esl_seteq<1,1,1>(exitcond_i_fu_164_p2.read(), ap_const_lv1_0) && !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_2;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
  !((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) && 
  !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
  !((ap_sig_bdd_92.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || (ap_sig_bdd_104.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) && 
  !esl_seteq<1,1,1>(exitcond_i_fu_164_p2.read(), ap_const_lv1_0) && 
  !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
                ap_NS_fsm = ap_ST_st8_fsm_3;
            } else {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_2;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_st2_fsm_1;
            break;
        default : 
            ap_NS_fsm = "XXXX";
            break;
    }
}

}


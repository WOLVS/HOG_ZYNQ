// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _image_filter_AXIvideo2Mat_HH_
#define _image_filter_AXIvideo2Mat_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct image_filter_AXIvideo2Mat : public sc_module {
    // Port declarations 27
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > INPUT_STREAM_TDATA;
    sc_in< sc_logic > INPUT_STREAM_TVALID;
    sc_out< sc_logic > INPUT_STREAM_TREADY;
    sc_in< sc_lv<4> > INPUT_STREAM_TKEEP;
    sc_in< sc_lv<4> > INPUT_STREAM_TSTRB;
    sc_in< sc_lv<1> > INPUT_STREAM_TUSER;
    sc_in< sc_lv<1> > INPUT_STREAM_TLAST;
    sc_in< sc_lv<1> > INPUT_STREAM_TID;
    sc_in< sc_lv<1> > INPUT_STREAM_TDEST;
    sc_in< sc_lv<11> > rows;
    sc_in< sc_lv<11> > cols;
    sc_out< sc_lv<8> > img_data_stream_0_V_din;
    sc_in< sc_logic > img_data_stream_0_V_full_n;
    sc_out< sc_logic > img_data_stream_0_V_write;
    sc_out< sc_lv<8> > img_data_stream_1_V_din;
    sc_in< sc_logic > img_data_stream_1_V_full_n;
    sc_out< sc_logic > img_data_stream_1_V_write;
    sc_out< sc_lv<8> > img_data_stream_2_V_din;
    sc_in< sc_logic > img_data_stream_2_V_full_n;
    sc_out< sc_logic > img_data_stream_2_V_write;


    // Module declarations
    image_filter_AXIvideo2Mat(sc_module_name name);
    SC_HAS_PROCESS(image_filter_AXIvideo2Mat);

    ~image_filter_AXIvideo2Mat();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<7> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_bdd_26;
    sc_signal< sc_lv<1> > eol_reg_186;
    sc_signal< sc_lv<32> > axi_data_V_1_i_reg_197;
    sc_signal< sc_lv<11> > p_2_i_reg_208;
    sc_signal< sc_lv<1> > eol_i_reg_219;
    sc_signal< sc_lv<1> > axi_last_V_2_i_reg_231;
    sc_signal< sc_lv<32> > p_Val2_s_reg_244;
    sc_signal< bool > ap_sig_bdd_73;
    sc_signal< sc_lv<32> > tmp_data_V_reg_379;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_bdd_85;
    sc_signal< sc_lv<1> > tmp_last_V_reg_387;
    sc_signal< sc_lv<1> > exitcond8_i_fu_309_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st4_fsm_3;
    sc_signal< bool > ap_sig_bdd_99;
    sc_signal< sc_lv<11> > i_V_fu_314_p2;
    sc_signal< sc_lv<11> > i_V_reg_403;
    sc_signal< sc_lv<1> > exitcond9_i_fu_320_p2;
    sc_signal< sc_lv<1> > exitcond9_i_reg_408;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg0_fsm_4;
    sc_signal< bool > ap_sig_bdd_110;
    sc_signal< sc_lv<1> > brmerge_i_fu_334_p2;
    sc_signal< bool > ap_sig_bdd_118;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it0;
    sc_signal< bool > ap_sig_bdd_131;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it1;
    sc_signal< sc_lv<11> > j_V_fu_325_p2;
    sc_signal< sc_lv<8> > tmp_fu_340_p1;
    sc_signal< sc_lv<8> > tmp_reg_421;
    sc_signal< sc_lv<8> > tmp_10_reg_426;
    sc_signal< sc_lv<8> > tmp_11_reg_431;
    sc_signal< sc_logic > ap_sig_cseq_ST_st7_fsm_5;
    sc_signal< bool > ap_sig_bdd_156;
    sc_signal< bool > ap_sig_bdd_161;
    sc_signal< sc_lv<1> > axi_last_V_3_i_reg_256;
    sc_signal< sc_lv<1> > axi_last_V1_i_reg_155;
    sc_signal< sc_logic > ap_sig_cseq_ST_st8_fsm_6;
    sc_signal< bool > ap_sig_bdd_179;
    sc_signal< sc_logic > ap_sig_cseq_ST_st3_fsm_2;
    sc_signal< bool > ap_sig_bdd_186;
    sc_signal< sc_lv<32> > axi_data_V_3_i_reg_268;
    sc_signal< sc_lv<32> > axi_data_V1_i_reg_165;
    sc_signal< sc_lv<11> > p_i_reg_175;
    sc_signal< sc_lv<1> > eol_phi_fu_189_p4;
    sc_signal< sc_lv<32> > axi_data_V_1_i_phi_fu_200_p4;
    sc_signal< sc_lv<1> > eol_i_phi_fu_223_p4;
    sc_signal< sc_lv<1> > ap_reg_phiprechg_axi_last_V_2_i_reg_231pp1_it0;
    sc_signal< sc_lv<32> > ap_reg_phiprechg_p_Val2_s_reg_244pp1_it0;
    sc_signal< sc_lv<32> > p_Val2_s_phi_fu_248_p4;
    sc_signal< sc_lv<1> > eol_2_i_reg_280;
    sc_signal< sc_lv<1> > sof_1_i_fu_100;
    sc_signal< sc_lv<1> > tmp_user_V_fu_300_p1;
    sc_signal< sc_lv<7> > ap_NS_fsm;
    sc_signal< bool > ap_sig_bdd_117;
    sc_signal< bool > ap_sig_bdd_209;
    sc_signal< bool > ap_sig_bdd_142;
    sc_signal< bool > ap_sig_bdd_224;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<7> ap_ST_st1_fsm_0;
    static const sc_lv<7> ap_ST_st2_fsm_1;
    static const sc_lv<7> ap_ST_st3_fsm_2;
    static const sc_lv<7> ap_ST_st4_fsm_3;
    static const sc_lv<7> ap_ST_pp1_stg0_fsm_4;
    static const sc_lv<7> ap_ST_st7_fsm_5;
    static const sc_lv<7> ap_ST_st8_fsm_6;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_17;
    static const bool ap_true;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_INPUT_STREAM_TREADY();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_reg_phiprechg_axi_last_V_2_i_reg_231pp1_it0();
    void thread_ap_reg_phiprechg_p_Val2_s_reg_244pp1_it0();
    void thread_ap_sig_bdd_110();
    void thread_ap_sig_bdd_117();
    void thread_ap_sig_bdd_118();
    void thread_ap_sig_bdd_131();
    void thread_ap_sig_bdd_142();
    void thread_ap_sig_bdd_156();
    void thread_ap_sig_bdd_161();
    void thread_ap_sig_bdd_179();
    void thread_ap_sig_bdd_186();
    void thread_ap_sig_bdd_209();
    void thread_ap_sig_bdd_224();
    void thread_ap_sig_bdd_26();
    void thread_ap_sig_bdd_73();
    void thread_ap_sig_bdd_85();
    void thread_ap_sig_bdd_99();
    void thread_ap_sig_cseq_ST_pp1_stg0_fsm_4();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_ap_sig_cseq_ST_st3_fsm_2();
    void thread_ap_sig_cseq_ST_st4_fsm_3();
    void thread_ap_sig_cseq_ST_st7_fsm_5();
    void thread_ap_sig_cseq_ST_st8_fsm_6();
    void thread_axi_data_V_1_i_phi_fu_200_p4();
    void thread_brmerge_i_fu_334_p2();
    void thread_eol_i_phi_fu_223_p4();
    void thread_eol_phi_fu_189_p4();
    void thread_exitcond8_i_fu_309_p2();
    void thread_exitcond9_i_fu_320_p2();
    void thread_i_V_fu_314_p2();
    void thread_img_data_stream_0_V_din();
    void thread_img_data_stream_0_V_write();
    void thread_img_data_stream_1_V_din();
    void thread_img_data_stream_1_V_write();
    void thread_img_data_stream_2_V_din();
    void thread_img_data_stream_2_V_write();
    void thread_j_V_fu_325_p2();
    void thread_p_Val2_s_phi_fu_248_p4();
    void thread_tmp_fu_340_p1();
    void thread_tmp_user_V_fu_300_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

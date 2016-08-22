// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _image_filter_Resize_HH_
#define _image_filter_Resize_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "image_filter_Resize_opr_linear.h"

namespace ap_rtl {

struct image_filter_Resize : public sc_module {
    // Port declarations 15
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<11> > rows;
    sc_in< sc_lv<11> > cols;
    sc_in< sc_lv<8> > p_src_data_stream_V_dout;
    sc_in< sc_logic > p_src_data_stream_V_empty_n;
    sc_out< sc_logic > p_src_data_stream_V_read;
    sc_out< sc_lv<8> > p_dst_data_stream_V_din;
    sc_in< sc_logic > p_dst_data_stream_V_full_n;
    sc_out< sc_logic > p_dst_data_stream_V_write;


    // Module declarations
    image_filter_Resize(sc_module_name name);
    SC_HAS_PROCESS(image_filter_Resize);

    ~image_filter_Resize();

    sc_trace_file* mVcdFile;

    image_filter_Resize_opr_linear* grp_image_filter_Resize_opr_linear_fu_44;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_bdd_21;
    sc_signal< bool > ap_sig_bdd_43;
    sc_signal< sc_logic > grp_image_filter_Resize_opr_linear_fu_44_ap_start;
    sc_signal< sc_logic > grp_image_filter_Resize_opr_linear_fu_44_ap_done;
    sc_signal< sc_logic > grp_image_filter_Resize_opr_linear_fu_44_ap_idle;
    sc_signal< sc_logic > grp_image_filter_Resize_opr_linear_fu_44_ap_ready;
    sc_signal< sc_lv<11> > grp_image_filter_Resize_opr_linear_fu_44_p_src_rows_V_read;
    sc_signal< sc_lv<11> > grp_image_filter_Resize_opr_linear_fu_44_p_src_cols_V_read;
    sc_signal< sc_lv<8> > grp_image_filter_Resize_opr_linear_fu_44_p_src_data_stream_V_dout;
    sc_signal< sc_logic > grp_image_filter_Resize_opr_linear_fu_44_p_src_data_stream_V_empty_n;
    sc_signal< sc_logic > grp_image_filter_Resize_opr_linear_fu_44_p_src_data_stream_V_read;
    sc_signal< sc_lv<11> > grp_image_filter_Resize_opr_linear_fu_44_p_dst_rows_V_read;
    sc_signal< sc_lv<11> > grp_image_filter_Resize_opr_linear_fu_44_p_dst_cols_V_read;
    sc_signal< sc_lv<8> > grp_image_filter_Resize_opr_linear_fu_44_p_dst_data_stream_V_din;
    sc_signal< sc_logic > grp_image_filter_Resize_opr_linear_fu_44_p_dst_data_stream_V_full_n;
    sc_signal< sc_logic > grp_image_filter_Resize_opr_linear_fu_44_p_dst_data_stream_V_write;
    sc_signal< sc_logic > grp_image_filter_Resize_opr_linear_fu_44_ap_start_ap_start_reg;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_bdd_71;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_st1_fsm_0;
    static const sc_lv<2> ap_ST_st2_fsm_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sig_bdd_21();
    void thread_ap_sig_bdd_43();
    void thread_ap_sig_bdd_71();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_grp_image_filter_Resize_opr_linear_fu_44_ap_start();
    void thread_grp_image_filter_Resize_opr_linear_fu_44_p_dst_cols_V_read();
    void thread_grp_image_filter_Resize_opr_linear_fu_44_p_dst_data_stream_V_full_n();
    void thread_grp_image_filter_Resize_opr_linear_fu_44_p_dst_rows_V_read();
    void thread_grp_image_filter_Resize_opr_linear_fu_44_p_src_cols_V_read();
    void thread_grp_image_filter_Resize_opr_linear_fu_44_p_src_data_stream_V_dout();
    void thread_grp_image_filter_Resize_opr_linear_fu_44_p_src_data_stream_V_empty_n();
    void thread_grp_image_filter_Resize_opr_linear_fu_44_p_src_rows_V_read();
    void thread_p_dst_data_stream_V_din();
    void thread_p_dst_data_stream_V_write();
    void thread_p_src_data_stream_V_read();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

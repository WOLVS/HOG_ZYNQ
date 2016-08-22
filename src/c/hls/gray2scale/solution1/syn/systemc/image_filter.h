// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _image_filter_HH_
#define _image_filter_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "image_filter_AXIvideo2Mat.h"
#include "image_filter_CvtColor.h"
#include "image_filter_Resize.h"
#include "image_filter_Mat2AXIvideo_8_1080_1920_0_s.h"
#include "FIFO_image_filter_img_0_data_stream_0_V.h"
#include "FIFO_image_filter_img_0_data_stream_1_V.h"
#include "FIFO_image_filter_img_0_data_stream_2_V.h"
#include "FIFO_image_filter_img_1_data_stream_0_V.h"
#include "FIFO_image_filter_img_2_data_stream_0_V.h"

namespace ap_rtl {

struct image_filter : public sc_module {
    // Port declarations 26
    sc_in< sc_lv<32> > INPUT_STREAM_TDATA;
    sc_in< sc_lv<4> > INPUT_STREAM_TKEEP;
    sc_in< sc_lv<4> > INPUT_STREAM_TSTRB;
    sc_in< sc_lv<1> > INPUT_STREAM_TUSER;
    sc_in< sc_lv<1> > INPUT_STREAM_TLAST;
    sc_in< sc_lv<1> > INPUT_STREAM_TID;
    sc_in< sc_lv<1> > INPUT_STREAM_TDEST;
    sc_out< sc_lv<8> > OUTPUT_STREAM_TDATA;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TKEEP;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TSTRB;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TUSER;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TLAST;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TID;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TDEST;
    sc_in< sc_lv<32> > rows;
    sc_in< sc_lv<32> > cols;
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > INPUT_STREAM_TVALID;
    sc_out< sc_logic > INPUT_STREAM_TREADY;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > OUTPUT_STREAM_TVALID;
    sc_in< sc_logic > OUTPUT_STREAM_TREADY;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;


    // Module declarations
    image_filter(sc_module_name name);
    SC_HAS_PROCESS(image_filter);

    ~image_filter();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    image_filter_AXIvideo2Mat* image_filter_AXIvideo2Mat_U0;
    image_filter_CvtColor* image_filter_CvtColor_U0;
    image_filter_Resize* image_filter_Resize_U0;
    image_filter_Mat2AXIvideo_8_1080_1920_0_s* image_filter_Mat2AXIvideo_8_1080_1920_0_U0;
    FIFO_image_filter_img_0_data_stream_0_V* img_0_data_stream_0_V_U;
    FIFO_image_filter_img_0_data_stream_1_V* img_0_data_stream_1_V_U;
    FIFO_image_filter_img_0_data_stream_2_V* img_0_data_stream_2_V_U;
    FIFO_image_filter_img_1_data_stream_0_V* img_1_data_stream_0_V_U;
    FIFO_image_filter_img_2_data_stream_0_V* img_2_data_stream_0_V_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > image_filter_AXIvideo2Mat_U0_ap_start;
    sc_signal< sc_logic > image_filter_AXIvideo2Mat_U0_ap_done;
    sc_signal< sc_logic > image_filter_AXIvideo2Mat_U0_ap_continue;
    sc_signal< sc_logic > image_filter_AXIvideo2Mat_U0_ap_idle;
    sc_signal< sc_logic > image_filter_AXIvideo2Mat_U0_ap_ready;
    sc_signal< sc_lv<32> > image_filter_AXIvideo2Mat_U0_INPUT_STREAM_TDATA;
    sc_signal< sc_logic > image_filter_AXIvideo2Mat_U0_INPUT_STREAM_TVALID;
    sc_signal< sc_logic > image_filter_AXIvideo2Mat_U0_INPUT_STREAM_TREADY;
    sc_signal< sc_lv<4> > image_filter_AXIvideo2Mat_U0_INPUT_STREAM_TKEEP;
    sc_signal< sc_lv<4> > image_filter_AXIvideo2Mat_U0_INPUT_STREAM_TSTRB;
    sc_signal< sc_lv<1> > image_filter_AXIvideo2Mat_U0_INPUT_STREAM_TUSER;
    sc_signal< sc_lv<1> > image_filter_AXIvideo2Mat_U0_INPUT_STREAM_TLAST;
    sc_signal< sc_lv<1> > image_filter_AXIvideo2Mat_U0_INPUT_STREAM_TID;
    sc_signal< sc_lv<1> > image_filter_AXIvideo2Mat_U0_INPUT_STREAM_TDEST;
    sc_signal< sc_lv<11> > image_filter_AXIvideo2Mat_U0_rows;
    sc_signal< sc_lv<11> > image_filter_AXIvideo2Mat_U0_cols;
    sc_signal< sc_lv<8> > image_filter_AXIvideo2Mat_U0_img_data_stream_0_V_din;
    sc_signal< sc_logic > image_filter_AXIvideo2Mat_U0_img_data_stream_0_V_full_n;
    sc_signal< sc_logic > image_filter_AXIvideo2Mat_U0_img_data_stream_0_V_write;
    sc_signal< sc_lv<8> > image_filter_AXIvideo2Mat_U0_img_data_stream_1_V_din;
    sc_signal< sc_logic > image_filter_AXIvideo2Mat_U0_img_data_stream_1_V_full_n;
    sc_signal< sc_logic > image_filter_AXIvideo2Mat_U0_img_data_stream_1_V_write;
    sc_signal< sc_lv<8> > image_filter_AXIvideo2Mat_U0_img_data_stream_2_V_din;
    sc_signal< sc_logic > image_filter_AXIvideo2Mat_U0_img_data_stream_2_V_full_n;
    sc_signal< sc_logic > image_filter_AXIvideo2Mat_U0_img_data_stream_2_V_write;
    sc_signal< sc_logic > image_filter_CvtColor_U0_ap_start;
    sc_signal< sc_logic > image_filter_CvtColor_U0_ap_done;
    sc_signal< sc_logic > image_filter_CvtColor_U0_ap_continue;
    sc_signal< sc_logic > image_filter_CvtColor_U0_ap_idle;
    sc_signal< sc_logic > image_filter_CvtColor_U0_ap_ready;
    sc_signal< sc_lv<11> > image_filter_CvtColor_U0_rows;
    sc_signal< sc_lv<11> > image_filter_CvtColor_U0_cols;
    sc_signal< sc_lv<8> > image_filter_CvtColor_U0_p_src_data_stream_0_V_dout;
    sc_signal< sc_logic > image_filter_CvtColor_U0_p_src_data_stream_0_V_empty_n;
    sc_signal< sc_logic > image_filter_CvtColor_U0_p_src_data_stream_0_V_read;
    sc_signal< sc_lv<8> > image_filter_CvtColor_U0_p_src_data_stream_1_V_dout;
    sc_signal< sc_logic > image_filter_CvtColor_U0_p_src_data_stream_1_V_empty_n;
    sc_signal< sc_logic > image_filter_CvtColor_U0_p_src_data_stream_1_V_read;
    sc_signal< sc_lv<8> > image_filter_CvtColor_U0_p_src_data_stream_2_V_dout;
    sc_signal< sc_logic > image_filter_CvtColor_U0_p_src_data_stream_2_V_empty_n;
    sc_signal< sc_logic > image_filter_CvtColor_U0_p_src_data_stream_2_V_read;
    sc_signal< sc_lv<8> > image_filter_CvtColor_U0_p_dst_data_stream_V_din;
    sc_signal< sc_logic > image_filter_CvtColor_U0_p_dst_data_stream_V_full_n;
    sc_signal< sc_logic > image_filter_CvtColor_U0_p_dst_data_stream_V_write;
    sc_signal< sc_logic > image_filter_Resize_U0_ap_start;
    sc_signal< sc_logic > image_filter_Resize_U0_ap_done;
    sc_signal< sc_logic > image_filter_Resize_U0_ap_continue;
    sc_signal< sc_logic > image_filter_Resize_U0_ap_idle;
    sc_signal< sc_logic > image_filter_Resize_U0_ap_ready;
    sc_signal< sc_lv<11> > image_filter_Resize_U0_rows;
    sc_signal< sc_lv<11> > image_filter_Resize_U0_cols;
    sc_signal< sc_lv<8> > image_filter_Resize_U0_p_src_data_stream_V_dout;
    sc_signal< sc_logic > image_filter_Resize_U0_p_src_data_stream_V_empty_n;
    sc_signal< sc_logic > image_filter_Resize_U0_p_src_data_stream_V_read;
    sc_signal< sc_lv<8> > image_filter_Resize_U0_p_dst_data_stream_V_din;
    sc_signal< sc_logic > image_filter_Resize_U0_p_dst_data_stream_V_full_n;
    sc_signal< sc_logic > image_filter_Resize_U0_p_dst_data_stream_V_write;
    sc_signal< sc_logic > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_ap_start;
    sc_signal< sc_logic > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_ap_done;
    sc_signal< sc_logic > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_ap_continue;
    sc_signal< sc_logic > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_ap_idle;
    sc_signal< sc_logic > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_ap_ready;
    sc_signal< sc_lv<11> > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_rows;
    sc_signal< sc_lv<11> > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_cols;
    sc_signal< sc_lv<8> > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_img_data_stream_V_dout;
    sc_signal< sc_logic > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_img_data_stream_V_empty_n;
    sc_signal< sc_logic > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_img_data_stream_V_read;
    sc_signal< sc_lv<8> > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_OUTPUT_STREAM_TDATA;
    sc_signal< sc_logic > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_OUTPUT_STREAM_TVALID;
    sc_signal< sc_logic > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_OUTPUT_STREAM_TREADY;
    sc_signal< sc_lv<1> > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_OUTPUT_STREAM_TKEEP;
    sc_signal< sc_lv<1> > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_OUTPUT_STREAM_TSTRB;
    sc_signal< sc_lv<1> > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_OUTPUT_STREAM_TUSER;
    sc_signal< sc_lv<1> > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_OUTPUT_STREAM_TLAST;
    sc_signal< sc_lv<1> > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_OUTPUT_STREAM_TID;
    sc_signal< sc_lv<1> > image_filter_Mat2AXIvideo_8_1080_1920_0_U0_OUTPUT_STREAM_TDEST;
    sc_signal< sc_logic > ap_sig_hs_continue;
    sc_signal< sc_logic > img_0_data_stream_0_V_U_ap_dummy_ce;
    sc_signal< sc_lv<8> > img_0_data_stream_0_V_din;
    sc_signal< sc_logic > img_0_data_stream_0_V_full_n;
    sc_signal< sc_logic > img_0_data_stream_0_V_write;
    sc_signal< sc_lv<8> > img_0_data_stream_0_V_dout;
    sc_signal< sc_logic > img_0_data_stream_0_V_empty_n;
    sc_signal< sc_logic > img_0_data_stream_0_V_read;
    sc_signal< sc_logic > img_0_data_stream_1_V_U_ap_dummy_ce;
    sc_signal< sc_lv<8> > img_0_data_stream_1_V_din;
    sc_signal< sc_logic > img_0_data_stream_1_V_full_n;
    sc_signal< sc_logic > img_0_data_stream_1_V_write;
    sc_signal< sc_lv<8> > img_0_data_stream_1_V_dout;
    sc_signal< sc_logic > img_0_data_stream_1_V_empty_n;
    sc_signal< sc_logic > img_0_data_stream_1_V_read;
    sc_signal< sc_logic > img_0_data_stream_2_V_U_ap_dummy_ce;
    sc_signal< sc_lv<8> > img_0_data_stream_2_V_din;
    sc_signal< sc_logic > img_0_data_stream_2_V_full_n;
    sc_signal< sc_logic > img_0_data_stream_2_V_write;
    sc_signal< sc_lv<8> > img_0_data_stream_2_V_dout;
    sc_signal< sc_logic > img_0_data_stream_2_V_empty_n;
    sc_signal< sc_logic > img_0_data_stream_2_V_read;
    sc_signal< sc_logic > img_1_data_stream_0_V_U_ap_dummy_ce;
    sc_signal< sc_lv<8> > img_1_data_stream_0_V_din;
    sc_signal< sc_logic > img_1_data_stream_0_V_full_n;
    sc_signal< sc_logic > img_1_data_stream_0_V_write;
    sc_signal< sc_lv<8> > img_1_data_stream_0_V_dout;
    sc_signal< sc_logic > img_1_data_stream_0_V_empty_n;
    sc_signal< sc_logic > img_1_data_stream_0_V_read;
    sc_signal< sc_logic > img_2_data_stream_0_V_U_ap_dummy_ce;
    sc_signal< sc_lv<8> > img_2_data_stream_0_V_din;
    sc_signal< sc_logic > img_2_data_stream_0_V_full_n;
    sc_signal< sc_logic > img_2_data_stream_0_V_write;
    sc_signal< sc_lv<8> > img_2_data_stream_0_V_dout;
    sc_signal< sc_logic > img_2_data_stream_0_V_empty_n;
    sc_signal< sc_logic > img_2_data_stream_0_V_read;
    sc_signal< sc_logic > ap_reg_procdone_image_filter_AXIvideo2Mat_U0;
    sc_signal< sc_logic > ap_sig_hs_done;
    sc_signal< sc_logic > ap_reg_procdone_image_filter_CvtColor_U0;
    sc_signal< sc_logic > ap_reg_procdone_image_filter_Resize_U0;
    sc_signal< sc_logic > ap_reg_procdone_image_filter_Mat2AXIvideo_8_1080_1920_0_U0;
    sc_signal< sc_logic > ap_CS;
    sc_signal< sc_logic > ap_sig_top_allready;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_logic ap_const_logic_1;
    static const bool ap_true;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_INPUT_STREAM_TREADY();
    void thread_OUTPUT_STREAM_TDATA();
    void thread_OUTPUT_STREAM_TDEST();
    void thread_OUTPUT_STREAM_TID();
    void thread_OUTPUT_STREAM_TKEEP();
    void thread_OUTPUT_STREAM_TLAST();
    void thread_OUTPUT_STREAM_TSTRB();
    void thread_OUTPUT_STREAM_TUSER();
    void thread_OUTPUT_STREAM_TVALID();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sig_hs_continue();
    void thread_ap_sig_hs_done();
    void thread_ap_sig_top_allready();
    void thread_image_filter_AXIvideo2Mat_U0_INPUT_STREAM_TDATA();
    void thread_image_filter_AXIvideo2Mat_U0_INPUT_STREAM_TDEST();
    void thread_image_filter_AXIvideo2Mat_U0_INPUT_STREAM_TID();
    void thread_image_filter_AXIvideo2Mat_U0_INPUT_STREAM_TKEEP();
    void thread_image_filter_AXIvideo2Mat_U0_INPUT_STREAM_TLAST();
    void thread_image_filter_AXIvideo2Mat_U0_INPUT_STREAM_TSTRB();
    void thread_image_filter_AXIvideo2Mat_U0_INPUT_STREAM_TUSER();
    void thread_image_filter_AXIvideo2Mat_U0_INPUT_STREAM_TVALID();
    void thread_image_filter_AXIvideo2Mat_U0_ap_continue();
    void thread_image_filter_AXIvideo2Mat_U0_ap_start();
    void thread_image_filter_AXIvideo2Mat_U0_cols();
    void thread_image_filter_AXIvideo2Mat_U0_img_data_stream_0_V_full_n();
    void thread_image_filter_AXIvideo2Mat_U0_img_data_stream_1_V_full_n();
    void thread_image_filter_AXIvideo2Mat_U0_img_data_stream_2_V_full_n();
    void thread_image_filter_AXIvideo2Mat_U0_rows();
    void thread_image_filter_CvtColor_U0_ap_continue();
    void thread_image_filter_CvtColor_U0_ap_start();
    void thread_image_filter_CvtColor_U0_cols();
    void thread_image_filter_CvtColor_U0_p_dst_data_stream_V_full_n();
    void thread_image_filter_CvtColor_U0_p_src_data_stream_0_V_dout();
    void thread_image_filter_CvtColor_U0_p_src_data_stream_0_V_empty_n();
    void thread_image_filter_CvtColor_U0_p_src_data_stream_1_V_dout();
    void thread_image_filter_CvtColor_U0_p_src_data_stream_1_V_empty_n();
    void thread_image_filter_CvtColor_U0_p_src_data_stream_2_V_dout();
    void thread_image_filter_CvtColor_U0_p_src_data_stream_2_V_empty_n();
    void thread_image_filter_CvtColor_U0_rows();
    void thread_image_filter_Mat2AXIvideo_8_1080_1920_0_U0_OUTPUT_STREAM_TREADY();
    void thread_image_filter_Mat2AXIvideo_8_1080_1920_0_U0_ap_continue();
    void thread_image_filter_Mat2AXIvideo_8_1080_1920_0_U0_ap_start();
    void thread_image_filter_Mat2AXIvideo_8_1080_1920_0_U0_cols();
    void thread_image_filter_Mat2AXIvideo_8_1080_1920_0_U0_img_data_stream_V_dout();
    void thread_image_filter_Mat2AXIvideo_8_1080_1920_0_U0_img_data_stream_V_empty_n();
    void thread_image_filter_Mat2AXIvideo_8_1080_1920_0_U0_rows();
    void thread_image_filter_Resize_U0_ap_continue();
    void thread_image_filter_Resize_U0_ap_start();
    void thread_image_filter_Resize_U0_cols();
    void thread_image_filter_Resize_U0_p_dst_data_stream_V_full_n();
    void thread_image_filter_Resize_U0_p_src_data_stream_V_dout();
    void thread_image_filter_Resize_U0_p_src_data_stream_V_empty_n();
    void thread_image_filter_Resize_U0_rows();
    void thread_img_0_data_stream_0_V_U_ap_dummy_ce();
    void thread_img_0_data_stream_0_V_din();
    void thread_img_0_data_stream_0_V_read();
    void thread_img_0_data_stream_0_V_write();
    void thread_img_0_data_stream_1_V_U_ap_dummy_ce();
    void thread_img_0_data_stream_1_V_din();
    void thread_img_0_data_stream_1_V_read();
    void thread_img_0_data_stream_1_V_write();
    void thread_img_0_data_stream_2_V_U_ap_dummy_ce();
    void thread_img_0_data_stream_2_V_din();
    void thread_img_0_data_stream_2_V_read();
    void thread_img_0_data_stream_2_V_write();
    void thread_img_1_data_stream_0_V_U_ap_dummy_ce();
    void thread_img_1_data_stream_0_V_din();
    void thread_img_1_data_stream_0_V_read();
    void thread_img_1_data_stream_0_V_write();
    void thread_img_2_data_stream_0_V_U_ap_dummy_ce();
    void thread_img_2_data_stream_0_V_din();
    void thread_img_2_data_stream_0_V_read();
    void thread_img_2_data_stream_0_V_write();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif

############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2015 Xilinx Inc. All rights reserved.
############################################################
open_project gray2scale
set_top image_filter
add_files src/top.cpp
add_files src/top.h
add_files -tb src/ap_axi_sdata.h
add_files -tb src/ap_bmp.cpp
add_files -tb src/ap_bmp.h
add_files -tb src/ap_interfaces.h
add_files -tb src/ap_video.h
add_files -tb src/hog_test.cpp
add_files -tb src/result_1080p_golden.bmp
add_files -tb src/test_1080p.bmp
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
#source "./gray2scale/solution1/directives.tcl"
csim_design -clean -setup
csynth_design
cosim_design -tool xsim
export_design -format ip_catalog

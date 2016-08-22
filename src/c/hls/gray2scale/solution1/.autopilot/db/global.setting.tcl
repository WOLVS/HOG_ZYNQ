
set TopModule "image_filter"
set ClockPeriod "10.000000"
set ClockList {ap_clk}
set multiClockList {}
set PortClockMap {}
set CombLogicFlag 0
set PipelineFlag 1
set DataflowTaskPipelineFlag  1
set TrivialPipelineFlag 0
set noPortSwitchingFlag 0
set FloatingPointFlag 0
set FftOrFirFlag 0
set NbRWValue 0
set intNbAccess 0
set NewDSPMapping 1
set HasDSPModule 1
set ResetLevelFlag 0
set ResetStyle "control"
set ResetSyncFlag 1
set ResetRegisterFlag 0
set ResetVariableFlag 0
set fsmEncStyle "onehot"
set maxFanout "0"
set RtlPrefix ""
set ExtraCCFlags ""
set ExtraCLdFlags ""
set SynCheckOptions ""
set PresynOptions ""
set PreprocOptions ""
set SchedOptions ""
set BindOptions ""
set RtlGenOptions ""
set RtlWriterOptions ""
set CbcGenFlag ""
set CasGenFlag ""
set CasMonitorFlag ""
set AutoSimOptions {}
set ExportMCPathFlag "0"
set SCTraceFileName "mytrace"
set SCTraceFileFormat "vcd"
set SCTraceOption "all"
set TargetInfo "xc7z020:clg484:-1"
set SourceFiles {sc {} c ../../src/top.cpp}
set SourceFlags {sc {} c {{}}}
set DirectiveFile {F:/xilixproject/project_hog12/hls/gray2scale/solution1/solution1.directive}
set TBFiles {verilog {../../src/test_1080p.bmp ../../src/result_1080p_golden.bmp ../../src/hog_test.cpp ../../src/ap_video.h ../../src/ap_interfaces.h ../../src/ap_bmp.h ../../src/ap_bmp.cpp ../../src/ap_axi_sdata.h} bc {../../src/test_1080p.bmp ../../src/result_1080p_golden.bmp ../../src/hog_test.cpp ../../src/ap_video.h ../../src/ap_interfaces.h ../../src/ap_bmp.h ../../src/ap_bmp.cpp ../../src/ap_axi_sdata.h} sc {../../src/test_1080p.bmp ../../src/result_1080p_golden.bmp ../../src/hog_test.cpp ../../src/ap_video.h ../../src/ap_interfaces.h ../../src/ap_bmp.h ../../src/ap_bmp.cpp ../../src/ap_axi_sdata.h} vhdl {../../src/test_1080p.bmp ../../src/result_1080p_golden.bmp ../../src/hog_test.cpp ../../src/ap_video.h ../../src/ap_interfaces.h ../../src/ap_bmp.h ../../src/ap_bmp.cpp ../../src/ap_axi_sdata.h} c {} cas {../../src/test_1080p.bmp ../../src/result_1080p_golden.bmp ../../src/hog_test.cpp ../../src/ap_video.h ../../src/ap_interfaces.h ../../src/ap_bmp.h ../../src/ap_bmp.cpp ../../src/ap_axi_sdata.h}}
set SpecLanguage "C"
set TVInFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TVOutFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TBTops {verilog {} bc {} sc {} vhdl {} c {} cas {}}
set TBInstNames {verilog {} bc {} sc {} vhdl {} c {} cas {}}
set ExtraGlobalOptions {"area_timing" 1 "clock_gate" 1 "impl_flow" map "power_gate" 0}
set PlatformFiles {{DefaultPlatform {xilinx/zynq/zynq xilinx/zynq/zynq_fpv6}}}
set DefaultPlatform "DefaultPlatform"
set TBTVFileNotFound ""
set AppFile "../vivado_hls.app"
set ApsFile "solution1.aps"
set AvePath "../.."
set HPFPO "0"

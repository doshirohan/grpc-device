# Changes in metadata from the nimi-python metadata

## config.py

The following metadata was added:
- 'c_function_prefix': 'niFgen_'
- 'service_class_prefix': 'NiFgen'
- 'java_package': 'com.ni.grpc.fgen'
- 'csharp_namespace': 'NationalInstruments.Grpc.Fgen'

## attributes.py

The documentation and lv_property values were removed from all the attributes.

`enum` tag was removed from the following attributes:
- REFERENCE_CLOCK_SOURCE_NIFGEN_VAL_CLOCK_IN_COLLISION_AVOIDANCE = ClkIn;
- REFERENCE_CLOCK_SOURCE_NIFGEN_VAL_NONE_COLLISION_AVOIDANCE = None;
- REFERENCE_CLOCK_SOURCE_NIFGEN_VAL_ONBOARD_REFERENCE_CLOCK_COLLISION_AVOIDANCE = OnboardRefClk;
- REFERENCE_CLOCK_SOURCE_NIFGEN_VAL_PXI_CLOCK_COLLISION_AVOIDANCE = PXI_Clk;
- REFERENCE_CLOCK_SOURCE_NIFGEN_VAL_RTSI_7_COLLISION_AVOIDANCE = RTSI7;

- SAMPLE_CLOCK_SOURCE_NIFGEN_VAL_CLOCK_IN = ClkIn;
- SAMPLE_CLOCK_SOURCE_NIFGEN_VAL_DDC_CLOCK_IN = DDC_ClkIn;
- SAMPLE_CLOCK_SOURCE_NIFGEN_VAL_ONBOARD_CLOCK = OnboardClock;
- SAMPLE_CLOCK_SOURCE_NIFGEN_VAL_PXI_STAR_LINE = PXI_Star;
- SAMPLE_CLOCK_SOURCE_NIFGEN_VAL_PXI_TRIGGER_LINE_0_RTSI_0 = PXI_Trig0;
- SAMPLE_CLOCK_SOURCE_NIFGEN_VAL_PXI_TRIGGER_LINE_1_RTSI_1 = PXI_Trig1;
- SAMPLE_CLOCK_SOURCE_NIFGEN_VAL_PXI_TRIGGER_LINE_2_RTSI_2 = PXI_Trig2;
- SAMPLE_CLOCK_SOURCE_NIFGEN_VAL_PXI_TRIGGER_LINE_3_RTSI_3 = PXI_Trig3;
- SAMPLE_CLOCK_SOURCE_NIFGEN_VAL_PXI_TRIGGER_LINE_4_RTSI_4 = PXI_Trig4;
- SAMPLE_CLOCK_SOURCE_NIFGEN_VAL_PXI_TRIGGER_LINE_5_RTSI_5 = PXI_Trig5;
- SAMPLE_CLOCK_SOURCE_NIFGEN_VAL_PXI_TRIGGER_LINE_6_RTSI_6 = PXI_Trig6;
- SAMPLE_CLOCK_SOURCE_NIFGEN_VAL_PXI_TRIGGER_LINE_7_RTSI_7 = PXI_Trig7;


- SAMPLE_CLOCK_TIMEBASE_SOURCE_NIFGEN_VAL_CLOCK_IN = ClkIn;
- SAMPLE_CLOCK_TIMEBASE_SOURCE_NIFGEN_VAL_ONBOARD_CLOCK = OnboardClock;

# Changes in metadata from the base metadata

## functions.py

The following functions were tagged with their corresponding CNAME tag
- Close
- ConfigureCustomFirFilterCoefficients
- ConfigureP2pEndpointFullnessStartTrigger
- CreateWaveformFromFileHws
- ErrorMessage
- GetFirFilterCoefficients
- InitializeCalAdcCalibration
- ManualEnableP2pStream
- ReadCalAdc
- Reset
- SelfTest

Added value_twist attribute to the coefficientsArray parameter of GetFirFilterCoefficients function.
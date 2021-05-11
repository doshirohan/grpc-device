functions = {
    "Abort": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            }
        ],
        "returns": "ViStatus"
    },
    "AbortKeepAlive": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            }
        ],
        "returns": "ViStatus"
    },
    "ApplyLevelsAndTiming": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "sites",
                "name": "siteList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "levelsSheet",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "timingSheet",
                "type": "ViConstString"
            },
            {
                "default_value": "None",
                "direction": "in",
                "name": "initialStateHighPins",
                "type": "ViConstString",
            },
            {
                "default_value": "None",
                "direction": "in",
                "name": "initialStateLowPins",
                "type": "ViConstString",
            },
            {
                "default_value": "None",
                "direction": "in",
                "name": "initialStateTristatePins",
                "type": "ViConstString",
            }
        ],
        "returns": "ViStatus"
    },
    "ApplyTDROffsets": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "numOffsets",
                "type": "ViInt32"
            },
            {
                "direction": "in",
                "name": "offsets",
                "size": {
                    "mechanism": "len",
                    "value": "numOffsets"
                },
                "type": "ViReal64[]",
            }
        ],
        "returns": "ViStatus"
    },
    "BurstPattern": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "sites",
                "name": "siteList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "startLabel",
                "type": "ViConstString"
            },
            {
                "default_value": True,
                "direction": "in",
                "name": "selectDigitalFunction",
                "type": "ViBoolean"
            },
            {
                "default_value": True,
                "direction": "in",
                "name": "waitUntilDone",
                "type": "ViBoolean"
            },
            {
                "default_value": "hightime.timedelta(seconds=10.0)",
                "direction": "in",
                "name": "timeout",
                "type": "ViReal64",
            }
        ],
        "returns": "ViStatus"
    },
    "ClearError": {
        "codegen_method": "no",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            }
        ],
        "returns": "ViStatus"
    },
    "ClockGeneratorAbort": {
        "cname": "niDigital_ClockGenerator_Abort",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelList",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "ClockGeneratorGenerateClock": {
        "cname": "niDigital_ClockGenerator_GenerateClock",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "frequency",
                "type": "ViReal64"
            },
            {
                "default_value": True,
                "direction": "in",
                "name": "selectDigitalFunction",
                "type": "ViBoolean"
            }
        ],
        "returns": "ViStatus"
    },
    "ClockGeneratorInitiate": {
        "cname": "niDigital_ClockGenerator_Initiate",
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelList",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "Close": {
        "cname": "niDigital_close",
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            }
        ],
        "returns": "ViStatus",
        "use_session_lock": False
    },
    "Commit": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureActiveLoadLevels": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "iol",
                "type": "ViReal64"
            },
            {
                "direction": "in",
                "name": "ioh",
                "type": "ViReal64"
            },
            {
                "direction": "in",
                "name": "vcom",
                "type": "ViReal64"
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureCycleNumberHistoryRAMTrigger": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "cycleNumber",
                "direction": "in",
                "type": "ViInt64"
            },
            {
                "name": "pretriggerSamples",
                "direction": "in",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureDigitalEdgeConditionalJumpTrigger": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "triggerIdentifier",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "source",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "edge",
                "direction": "in",
                "type": "ViInt32",
                "enum": "DigitalEdge"
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureDigitalEdgeStartTrigger": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "source",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "edge",
                "direction": "in",
                "type": "ViInt32",
                "enum": "DigitalEdge"
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureFirstFailureHistoryRAMTrigger": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "pretriggerSamples",
                "direction": "in",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureHistoryRAMCyclesToAcquire": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "cyclesToAcquire",
                "direction": "in",
                "type": "ViInt32",
                "enum": "HistoryRamCyclesToAcquire"
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigurePatternBurstSites": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "sites",
                "name": "siteList",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigurePatternLabelHistoryRAMTrigger": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "label",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "vectorOffset",
                "direction": "in",
                "type": "ViInt64"
            },
            {
                "name": "cycleOffset",
                "direction": "in",
                "type": "ViInt64"
            },
            {
                "name": "pretriggerSamples",
                "direction": "in",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureStartLabel": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "label",
                "direction": "in",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureSoftwareEdgeConditionalJumpTrigger": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "triggerIdentifier",
                "direction": "in",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureSoftwareEdgeStartTrigger": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureTerminationMode": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "channelList",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "mode",
                "direction": "in",
                "type": "ViInt32",
                "enum": "TerminationMode"
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureTimeSetCompareEdgesStrobe": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "pins",
                "name": "pinList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "timeSetName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "strobeEdge",
                "type": "ViReal64",
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureTimeSetCompareEdgesStrobe2x": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "pins",
                "name": "pinList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "timeSetName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "strobeEdge",
                "type": "ViReal64",
            },
            {
                "direction": "in",
                "name": "strobe2Edge",
                "type": "ViReal64",
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureTimeSetDriveEdges": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "pins",
                "name": "pinList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "timeSetName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "enum": "DriveFormat",
                "name": "format",
                "type": "ViInt32"
            },
            {
                "direction": "in",
                "name": "driveOnEdge",
                "type": "ViReal64",
            },
            {
                "direction": "in",
                "name": "driveDataEdge",
                "type": "ViReal64",
            },
            {
                "direction": "in",
                "name": "driveReturnEdge",
                "type": "ViReal64",
            },
            {
                "direction": "in",
                "name": "driveOffEdge",
                "type": "ViReal64",
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureTimeSetDriveEdges2x": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "pins",
                "name": "pinList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "timeSetName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "enum": "DriveFormat",
                "name": "format",
                "type": "ViInt32"
            },
            {
                "direction": "in",
                "name": "driveOnEdge",
                "type": "ViReal64",
            },
            {
                "direction": "in",
                "name": "driveDataEdge",
                "type": "ViReal64",
            },
            {
                "direction": "in",
                "name": "driveReturnEdge",
                "type": "ViReal64",
            },
            {
                "direction": "in",
                "name": "driveOffEdge",
                "type": "ViReal64",
            },
            {
                "direction": "in",
                "name": "driveData2Edge",
                "type": "ViReal64",
            },
            {
                "direction": "in",
                "name": "driveReturn2Edge",
                "type": "ViReal64",
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureTimeSetDriveFormat": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "pins",
                "name": "pinList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "timeSetName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "enum": "DriveFormat",
                "name": "driveFormat",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureTimeSetEdge": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "pins",
                "name": "pinList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "timeSetName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "enum": "TimeSetEdgeType",
                "name": "edge",
                "type": "ViInt32"
            },
            {
                "direction": "in",
                "name": "time",
                "type": "ViReal64",
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureTimeSetEdgeMultiplier": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "pins",
                "name": "pinList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "timeSetName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "edgeMultiplier",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureTimeSetPeriod": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "timeSetName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "period",
                "type": "ViReal64",
            }
        ],
        "returns": "ViStatus"
    },
    "ConfigureVoltageLevels": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "vil",
                "type": "ViReal64"
            },
            {
                "direction": "in",
                "name": "vih",
                "type": "ViReal64"
            },
            {
                "direction": "in",
                "name": "vol",
                "type": "ViReal64"
            },
            {
                "direction": "in",
                "name": "voh",
                "type": "ViReal64"
            },
            {
                "direction": "in",
                "name": "vterm",
                "type": "ViReal64"
            }
        ],
        "returns": "ViStatus"
    },
    "CreateCaptureWaveformFromFileDigicapture": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "waveformName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "waveformFilePath",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "CreateCaptureWaveformParallel": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "pins",
                "name": "pinList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "waveformName",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "CreateCaptureWaveformSerial": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "pins",
                "name": "pinList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "waveformName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "sampleWidth",
                "type": "ViUInt32"
            },
            {
                "direction": "in",
                "enum": "BitOrder",
                "name": "bitOrder",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "CreateChannelMap": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "numSites",
                "direction": "in",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "CreateSourceWaveformFromFileTDMS": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "waveformName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "waveformFilePath",
                "type": "ViConstString"
            },
            {
                "default_value": True,
                "direction": "in",
                "name": "writeWaveformData",
                "type": "ViBoolean"
            }
        ],
        "returns": "ViStatus"
    },
    "CreatePinMap": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "dutPinList",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "systemPinList",
                "direction": "in",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "CreatePinGroup": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "pinGroupName",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "pinList",
                "direction": "in",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "CreateSourceWaveformParallel": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "pins",
                "name": "pinList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "waveformName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "enum": "SourceDataMapping",
                "name": "dataMapping",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "CreateSourceWaveformSerial": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "pins",
                "name": "pinList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "waveformName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "enum": "SourceDataMapping",
                "name": "dataMapping",
                "type": "ViInt32"
            },
            {
                "direction": "in",
                "name": "sampleWidth",
                "type": "ViUInt32"
            },
            {
                "direction": "in",
                "enum": "BitOrder",
                "name": "bitOrder",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "CreateTimeSet": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "name",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "DeleteAllTimeSets": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            }
        ],
        "returns": "ViStatus"
    },
    "DisableConditionalJumpTrigger": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "triggerIdentifier",
                "direction": "in",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "DisableSites": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "sites",
                "name": "siteList",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "DisableStartTrigger": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            }
        ],
        "returns": "ViStatus"
    },
    "EnableSites": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "sites",
                "name": "siteList",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "EndChannelMap": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            }
        ],
        "returns": "ViStatus"
    },
    "ErrorMessage": {
        "cname": "niDigital_error_message",
        "codegen_method": "public",
        "is_error_handling": True,
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "errorCode",
                "type": "ViStatus"
            },
            {
                "direction": "out",
                "name": "errorMessage",
                "size": {
                    "mechanism": "fixed",
                    "value": 256
                },
                "type": "ViChar[]"
            }
        ],
        "returns": "ViStatus",
        "use_session_lock": False
    },
    "ExportSignal": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "signal",
                "direction": "in",
                "type": "ViInt32",
                "enum": "ExportSignal"
            },
            {
                "name": "signalIdentifier",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "outputTerminal",
                "direction": "in",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "FetchCaptureWaveformU32": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "sites",
                "name": "siteList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "waveformName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "samplesToRead",
                "type": "ViInt32"
            },
            {
                "direction": "in",
                "name": "timeout",
                "type": "ViReal64"
            },
            {
                "direction": "in",
                "name": "dataBufferSize",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "data",
                "size": {
                    "mechanism": "ivi-dance-with-a-twist",
                    "value": "dataBufferSize",
                    "value_twist": "actualNumWaveforms"
                },
                "type": "ViUInt32[]"
            },
            {
                "direction": "out",
                "name": "actualNumWaveforms",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "actualSamplesPerWaveform",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "FetchHistoryRAMCycleInformation": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "sites",
                "name": "site",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "sampleIndex",
                "type": "ViInt64"
            },
            {
                "direction": "out",
                "name": "patternIndex",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "timeSetIndex",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "vectorNumber",
                "type": "ViInt64"
            },
            {
                "direction": "out",
                "name": "cycleNumber",
                "type": "ViInt64"
            },
            {
                "direction": "out",
                "name": "numDutCycles",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "FetchHistoryRAMScanCycleNumber": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "sites",
                "name": "site",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "sampleIndex",
                "type": "ViInt64"
            },
            {
                "direction": "out",
                "name": "scanCycleNumber",
                "type": "ViInt64"
            }
        ],
        "returns": "ViStatus"
    },
    "FrequencyCounterConfigureMeasurementMode": {
        "cname": "niDigital_FrequencyCounter_ConfigureMeasurementMode",
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "measurementMode",
                "direction": "in",
                "type": "ViInt32",
                "enum": "FrequencyMeasurementMode"
            }
        ],
        "returns": "ViStatus"
    },
    "FrequencyCounterConfigureMeasurementTime": {
        "cname": "niDigital_FrequencyCounter_ConfigureMeasurementTime",
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "channelList",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "measurementTime",
                "direction": "in",
                "type": "ViReal64"
            }
        ],
        "returns": "ViStatus"
    },
    "FrequencyCounterMeasureFrequency": {
        "cname": "niDigital_FrequencyCounter_MeasureFrequency",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "frequenciesBufferSize",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "frequencies",
                "size": {
                    "mechanism": "ivi-dance-with-a-twist",
                    "value": "frequenciesBufferSize",
                    "value_twist": "actualNumFrequencies"
                },
                "type": "ViReal64[]"
            },
            {
                "direction": "out",
                "name": "actualNumFrequencies",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "GetAttributeViBoolean": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "attribute",
                "type": "ViAttr"
            },
            {
                "direction": "out",
                "name": "value",
                "type": "ViBoolean"
            }
        ],
        "returns": "ViStatus"
    },
    "GetAttributeViInt32": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "attribute",
                "type": "ViAttr"
            },
            {
                "direction": "out",
                "name": "value",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "GetAttributeViInt64": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "attribute",
                "type": "ViAttr"
            },
            {
                "direction": "out",
                "name": "value",
                "type": "ViInt64"
            }
        ],
        "returns": "ViStatus"
    },
    "GetAttributeViReal64": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "attribute",
                "type": "ViAttr"
            },
            {
                "direction": "out",
                "name": "value",
                "type": "ViReal64"
            }
        ],
        "returns": "ViStatus"
    },
    "GetAttributeViSession": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "channelList",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "attribute",
                "direction": "in",
                "type": "ViAttr"
            },
            {
                "name": "value",
                "direction": "out",
                "type": "ViSession"
            }
        ],
        "returns": "ViStatus"
    },
    "GetAttributeViString": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "attribute",
                "type": "ViAttr"
            },
            {
                "direction": "in",
                "name": "bufferSize",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "value",
                "size": {
                    "mechanism": "ivi-dance",
                    "value": "bufferSize"
                },
                "type": "ViChar[]"
            }
        ],
        "returns": "ViStatus"
    },
    "GetChannelName": {
        "codegen_method": "no",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "index",
                "type": "ViInt32"
            },
            {
                "direction": "in",
                "name": "nameBufferSize",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "name",
                "size": {
                    "mechanism": "ivi-dance",
                    "value": "nameBufferSize"
                },
                "type": "ViChar[]"
            }
        ],
        "returns": "ViStatus"
    },
    "GetChannelNameFromString": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "indices",
                "type": "ViConstString",
            },
            {
                "direction": "in",
                "name": "nameBufferSize",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "names",
                "size": {
                    "mechanism": "ivi-dance",
                    "value": "nameBufferSize"
                },
                "type": "ViChar[]",
            }
        ],
        "render_in_session_base": True,
        "returns": "ViStatus"
    },
    "GetError": {
        "codegen_method": "public",
        "is_error_handling": True,
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "out",
                "name": "errorCode",
                "type": "ViStatus"
            },
            {
                "direction": "in",
                "name": "errorDescriptionBufferSize",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "errorDescription",
                "size": {
                    "mechanism": "ivi-dance",
                    "value": "errorDescriptionBufferSize"
                },
                "type": "ViChar[]"
            }
        ],
        "returns": "ViStatus",
        "use_session_lock": False
    },
    "GetFailCount": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "bufferSize",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "failureCount",
                "size": {
                    "mechanism": "ivi-dance-with-a-twist",
                    "value": "bufferSize",
                    "value_twist": "actualNumRead"
                },
                "type": "ViInt64[]"
            },
            {
                "direction": "out",
                "name": "actualNumRead",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "GetHistoryRAMSampleCount": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "sites",
                "name": "site",
                "type": "ViConstString"
            },
            {
                "direction": "out",
                "name": "sampleCount",
                "type": "ViInt64"
            }
        ],
        "returns": "ViStatus"
    },
    "GetPatternName": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "patternIndex",
                "type": "ViInt32"
            },
            {
                "direction": "in",
                "name": "nameBufferSize",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "name",
                "size": {
                    "mechanism": "ivi-dance",
                    "value": "nameBufferSize"
                },
                "type": "ViChar[]"
            }
        ],
        "render_in_session_base": True,
        "returns": "ViStatus"
    },
    "GetPatternPinIndexes": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "startLabel",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "pinIndexesBufferSize",
                "direction": "in",
                "type": "ViInt32"
            },
            {
                "name": "pinIndexes",
                "direction": "out",
                "type": "ViInt32[]",
                "size": {
                    "mechanism": "ivi-dance-with-a-twist",
                    "value": "pinIndexesBufferSize"
                }
            },
            {
                "name": "actualNumPins",
                "direction": "out",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "GetPatternPinList": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "startLabel",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "pinListBufferSize",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "pinList",
                "size": {
                    "mechanism": "ivi-dance",
                    "value": "pinListBufferSize"
                },
                "type": "ViChar[]",
            }
        ],
        "returns": "ViStatus"
    },
    "GetPinName": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "pinIndex",
                "type": "ViInt32"
            },
            {
                "direction": "in",
                "name": "nameBufferSize",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "name",
                "size": {
                    "mechanism": "ivi-dance",
                    "value": "nameBufferSize"
                },
                "type": "ViChar[]"
            }
        ],
        "render_in_session_base": True,
        "returns": "ViStatus"
    },
    "GetPinResultsPinInformation": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "bufferSize",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "pinIndexes",
                "size": {
                    "mechanism": "ivi-dance-with-a-twist",
                    "value": "bufferSize",
                    "value_twist": "actualNumValues"
                },
                "type": "ViInt32[]"
            },
            {
                "direction": "out",
                "name": "siteNumbers",
                "size": {
                    "mechanism": "ivi-dance-with-a-twist",
                    "value": "bufferSize",
                    "value_twist": "actualNumValues"
                },
                "type": "ViInt32[]"
            },
            {
                "direction": "out",
                "name": "channelIndexes",
                "size": {
                    "mechanism": "ivi-dance-with-a-twist",
                    "value": "bufferSize",
                    "value_twist": "actualNumValues"
                },
                "type": "ViInt32[]"
            },
            {
                "direction": "out",
                "name": "actualNumValues",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "GetSitePassFail": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "sites",
                "name": "siteList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "passFailBufferSize",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "passFail",
                "size": {
                    "mechanism": "ivi-dance-with-a-twist",
                    "value": "passFailBufferSize",
                    "value_twist": "actualNumSites"
                },
                "type": "ViBoolean[]"
            },
            {
                "direction": "out",
                "name": "actualNumSites",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "GetSiteResultsSiteNumbers": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "sites",
                "name": "siteList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "enum": "SiteResultType",
                "name": "siteResultType",
                "type": "ViInt32"
            },
            {
                "direction": "in",
                "name": "siteNumbersBufferSize",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "siteNumbers",
                "size": {
                    "mechanism": "ivi-dance-with-a-twist",
                    "value": "siteNumbersBufferSize",
                    "value_twist": "actualNumSiteNumbers"
                },
                "type": "ViInt32[]"
            },
            {
                "direction": "out",
                "name": "actualNumSiteNumbers",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "GetTimeSetDriveFormat": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "pins",
                "name": "pin",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "timeSetName",
                "type": "ViConstString"
            },
            {
                "direction": "out",
                "enum": "DriveFormat",
                "name": "format",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "GetTimeSetEdge": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "pins",
                "name": "pin",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "timeSetName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "enum": "TimeSetEdgeType",
                "name": "edge",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "time",
                "type": "ViReal64",
            }
        ],
        "returns": "ViStatus"
    },
    "GetTimeSetEdgeMultiplier": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "pins",
                "name": "pin",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "timeSetName",
                "type": "ViConstString"
            },
            {
                "direction": "out",
                "name": "edgeMultiplier",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "GetTimeSetName": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "timeSetIndex",
                "type": "ViInt32"
            },
            {
                "direction": "in",
                "name": "nameBufferSize",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "name",
                "size": {
                    "mechanism": "ivi-dance",
                    "value": "nameBufferSize"
                },
                "type": "ViChar[]"
            }
        ],
        "render_in_session_base": True,
        "returns": "ViStatus"
    },
    "GetTimeSetPeriod": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "timeSetName",
                "type": "ViConstString"
            },
            {
                "direction": "out",
                "name": "period",
                "type": "ViReal64",
            }
        ],
        "returns": "ViStatus"
    },
    "Init": {
        "init_method": True,
        "cname": "niDigital_init",
        "parameters": [
            {
                "name": "resourceName",
                "direction": "in",
                "type": "ViRsrc"
            },
            {
                "name": "idQuery",
                "direction": "in",
                "type": "ViBoolean"
            },
            {
                "name": "resetDevice",
                "direction": "in",
                "type": "ViBoolean"
            },
            {
                "name": "vi",
                "direction": "out",
                "type": "ViSession"
            }
        ],
        "returns": "ViStatus"
    },
    "InitWithOptions": {
        "init_method": True,
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "resourceName",
                "type": "ViRsrc"
            },
            {
                "default_value": False,
                "direction": "in",
                "name": "idQuery",
                "type": "ViBoolean",
            },
            {
                "default_value": False,
                "direction": "in",
                "name": "resetDevice",
                "type": "ViBoolean"
            },
            {
                "default_value": "\"\"",
                "direction": "in",
                "name": "optionString",
                "type": "ViConstString",
            },
            {
                "direction": "out",
                "name": "vi",
                "type": "ViSession"
            }
        ],
        "returns": "ViStatus",
        "use_session_lock": False
    },
    "Initiate": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            }
        ],
        "returns": "ViStatus"
    },
    "IsDone": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "out",
                "name": "done",
                "type": "ViBoolean"
            }
        ],
        "returns": "ViStatus"
    },
    "IsSiteEnabled": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "sites",
                "name": "site",
                "type": "ViConstString"
            },
            {
                "direction": "out",
                "name": "enable",
                "type": "ViBoolean"
            }
        ],
        "returns": "ViStatus"
    },
    "LoadLevels": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "filePath",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "LoadPattern": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "filePath",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "LoadPinMap": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "filePath",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "LoadSpecifications": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "filePath",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "LoadTiming": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "filePath",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "LockSession": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "out",
                "name": "callerHasLock",
                "type": "ViBoolean"
            }
        ],
        "render_in_session_base": True,
        "returns": "ViStatus",
        "use_session_lock": False
    },
    "MapPinToChannel": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "pin",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "site",
                "direction": "in",
                "type": "ViInt32"
            },
            {
                "name": "channel",
                "direction": "in",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "PPMUConfigureApertureTime": {
        "cname": "niDigital_PPMU_ConfigureApertureTime",
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "channelList",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "apertureTime",
                "direction": "in",
                "type": "ViReal64"
            },
            {
                "name": "units",
                "direction": "in",
                "type": "ViInt32",
                "enum": "PpmuApertureTimeUnits"
            }
        ],
        "returns": "ViStatus"
    },
    "PPMUConfigureCurrentLevel": {
        "cname": "niDigital_PPMU_ConfigureCurrentLevel",
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "channelList",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "currentLevel",
                "direction": "in",
                "type": "ViReal64"
            }
        ],
        "returns": "ViStatus"
    },
    "PPMUConfigureCurrentLevelRange": {
        "cname": "niDigital_PPMU_ConfigureCurrentLevelRange",
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "channelList",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "range",
                "direction": "in",
                "type": "ViReal64"
            }
        ],
        "returns": "ViStatus"
    },
    "PPMUConfigureCurrentLimit": {
        "cname": "niDigital_PPMU_ConfigureCurrentLimit",
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "channelList",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "behavior",
                "direction": "in",
                "type": "ViInt32",
                "enum": "PpmuCurrentLimitBehavior"
            },
            {
                "name": "limit",
                "direction": "in",
                "type": "ViReal64"
            }
        ],
        "returns": "ViStatus"
    },
    "PPMUConfigureCurrentLimitRange": {
        "cname": "niDigital_PPMU_ConfigureCurrentLimitRange",
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "channelList",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "range",
                "direction": "in",
                "type": "ViReal64"
            }
        ],
        "returns": "ViStatus"
    },
    "PPMUConfigureOutputFunction": {
        "cname": "niDigital_PPMU_ConfigureOutputFunction",
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "channelList",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "outputFunction",
                "direction": "in",
                "type": "ViInt32",
                "enum": "PpmuOutputFunction"
            }
        ],
        "returns": "ViStatus"
    },
    "PPMUConfigureVoltageLevel": {
        "cname": "niDigital_PPMU_ConfigureVoltageLevel",
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "channelList",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "voltageLevel",
                "direction": "in",
                "type": "ViReal64"
            }
        ],
        "returns": "ViStatus"
    },
    "PPMUConfigureVoltageLimits": {
        "cname": "niDigital_PPMU_ConfigureVoltageLimits",
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "channelList",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "lowerVoltageLimit",
                "direction": "in",
                "type": "ViReal64"
            },
            {
                "name": "upperVoltageLimit",
                "direction": "in",
                "type": "ViReal64"
            }
        ],
        "returns": "ViStatus"
    },
    "PPMUMeasure": {
        "cname": "niDigital_PPMU_Measure",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "enum": "PpmuMeasurementType",
                "name": "measurementType",
                "type": "ViInt32"
            },
            {
                "direction": "in",
                "name": "bufferSize",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "measurements",
                "size": {
                    "mechanism": "ivi-dance-with-a-twist",
                    "value": "bufferSize",
                    "value_twist": "actualNumRead"
                },
                "type": "ViReal64[]"
            },
            {
                "direction": "out",
                "name": "actualNumRead",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "PPMUSource": {
        "cname": "niDigital_PPMU_Source",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelList",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "ReadSequencerFlag": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "flag",
                "type": "ViConstString"
            },
            {
                "direction": "out",
                "name": "value",
                "type": "ViBoolean"
            }
        ],
        "returns": "ViStatus"
    },
    "ReadSequencerRegister": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "reg",
                "type": "ViConstString"
            },
            {
                "direction": "out",
                "name": "value",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "Reset": {
        "cname": "niDigital_reset",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            }
        ],
        "returns": "ViStatus"
    },
    "ResetAttribute": {
        "codegen_method": "no",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "attributeId",
                "type": "ViAttr"
            }
        ],
        "returns": "ViStatus"
    },
    "ResetDevice": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            }
        ],
        "returns": "ViStatus"
    },
    "SelfCalibrate": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            }
        ],
        "returns": "ViStatus"
    },
    "SelfTest": {
        "cname": "niDigital_self_test",
        "codegen_method": "public",
        "method_name_for_documentation": "self_test",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "out",
                "name": "testResult",
                "type": "ViInt16"
            },
            {
                "direction": "out",
                "name": "testMessage",
                "size": {
                    "mechanism": "fixed",
                    "value": 2048
                },
                "type": "ViChar[]"
            }
        ],
        "returns": "ViStatus"
    },
    "SendSoftwareEdgeTrigger": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "enum": "SoftwareTrigger",
                "name": "trigger",
                "type": "ViInt32"
            },
            {
                "direction": "in",
                "name": "triggerIdentifier",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "SetAttributeViBoolean": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "attribute",
                "type": "ViAttr"
            },
            {
                "direction": "in",
                "name": "value",
                "type": "ViBoolean"
            }
        ],
        "returns": "ViStatus"
    },
    "SetAttributeViInt32": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "attribute",
                "type": "ViAttr"
            },
            {
                "direction": "in",
                "name": "value",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "SetAttributeViInt64": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "attribute",
                "type": "ViAttr"
            },
            {
                "direction": "in",
                "name": "value",
                "type": "ViInt64"
            }
        ],
        "returns": "ViStatus"
    },
    "SetAttributeViReal64": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "attribute",
                "type": "ViAttr"
            },
            {
                "direction": "in",
                "name": "value",
                "type": "ViReal64"
            }
        ],
        "returns": "ViStatus"
    },
    "SetAttributeViSession": {
        "parameters": [
            {
                "name": "vi",
                "direction": "in",
                "type": "ViSession"
            },
            {
                "name": "channelList",
                "direction": "in",
                "type": "ViConstString"
            },
            {
                "name": "attribute",
                "direction": "in",
                "type": "ViAttr"
            },
            {
                "name": "value",
                "direction": "in",
                "type": "ViSession"
            }
        ],
        "returns": "ViStatus"
    },
    "SetAttributeViString": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "attribute",
                "type": "ViAttr"
            },
            {
                "direction": "in",
                "name": "value",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "TDR": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "channelList",
                "type": "ViConstString"
            },
            {
                "default_value": True,
                "direction": "in",
                "name": "applyOffsets",
                "type": "ViBoolean"
            },
            {
                "direction": "in",
                "name": "offsetsBufferSize",
                "type": "ViInt32"
            },
            {
                "direction": "out",
                "name": "offsets",
                "size": {
                    "mechanism": "ivi-dance-with-a-twist",
                    "value": "offsetsBufferSize",
                    "value_twist": "actualNumOffsets"
                },
                "type": "ViReal64[]",
            },
            {
                "direction": "out",
                "name": "actualNumOffsets",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "UnloadAllPatterns": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "default_value": False,
                "direction": "in",
                "name": "unloadKeepAlivePattern",
                "type": "ViBoolean"
            }
        ],
        "returns": "ViStatus"
    },
    "UnloadSpecifications": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "filePath",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "UnlockSession": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "out",
                "name": "callerHasLock",
                "type": "ViBoolean"
            }
        ],
        "render_in_session_base": True,
        "returns": "ViStatus",
        "use_session_lock": False
    },
    "WaitUntilDone": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "default_value": "hightime.timedelta(seconds=10.0)",
                "direction": "in",
                "name": "timeout",
                "type": "ViReal64",
            }
        ],
        "returns": "ViStatus"
    },
    "WriteSequencerFlag": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "flag",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "value",
                "type": "ViBoolean"
            }
        ],
        "returns": "ViStatus"
    },
    "WriteSequencerRegister": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "reg",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "value",
                "type": "ViInt32"
            }
        ],
        "returns": "ViStatus"
    },
    "WriteSourceWaveformBroadcastU32": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "waveformName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "waveformSize",
                "type": "ViInt32"
            },
            {
                "direction": "in",
                "name": "waveformData",
                "size": {
                    "mechanism": "len",
                    "value": "waveformSize"
                },
                "type": "ViUInt32[]"
            }
        ],
        "returns": "ViStatus"
    },
    "WriteSourceWaveformDataFromFileTDMS": {
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "name": "waveformName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "waveformFilePath",
                "type": "ViConstString"
            }
        ],
        "returns": "ViStatus"
    },
    "WriteSourceWaveformSiteUniqueU32": {
        "codegen_method": "public",
        "parameters": [
            {
                "direction": "in",
                "name": "vi",
                "type": "ViSession"
            },
            {
                "direction": "in",
                "is_repeated_capability": True,
                "repeated_capability_type": "sites",
                "name": "siteList",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "waveformName",
                "type": "ViConstString"
            },
            {
                "direction": "in",
                "name": "numWaveforms",
                "type": "ViInt32"
            },
            {
                "direction": "in",
                "name": "samplesPerWaveform",
                "type": "ViInt32"
            },
            {
                "direction": "in",
                "name": "waveformData",
                "size": {
                    "mechanism": "fixed",
                    "value": 1
                },
                "type": "ViUInt32[]",
                "use_array": True
            }
        ],
        'returns': 'ViStatus'
    },
    'ReadStatic': {
        'documentation': {
            'description': 'Reads the current state of comparators for pins you specify in the repeated capabilities. If there are uncommitted changes to levels or the termination mode, this function commits the changes to the pins.\n'
        },
        'parameters': [
            {
                'direction': 'in',
                'documentation': {
                    'description': 'The specified instrument session the niDigital_init or niDigital_InitWithOptions function returns.\n'
                },
                'name': 'vi',
                'type': 'ViSession'
            },
            {
                'direction': 'in',
                'documentation': {
                    'description': 'List of channel names or list of pins. Do not pass a mix of channel names and pin names. An empty string denotes all digital pattern instrument channels.\n\nPin names and pin groups apply to all enabled sites, unless the pin name explicitly specifies the site. You can specify a pin in a specific site using the form site\\ ``N``/pinName\\ ````, where ``N`` is the site number. This function ignores pins that are not mapped to the digital pattern instrument.\n\nSpecify channel names using the form ``PXI1Slot3``/``0``,\\ ``2-3`` or ``PXI1Slot3``/``0``,\\ ``PXI1Slot3``/``2-3``, where ``PXI1Slot3`` is the instrument resource name and ``0``, ``2``, ``3`` are channel names. To specify channels from multiple instruments, use the form ``PXI1Slot3``/``0``,\\ ``PXI1Slot3``/``2-3``,\\ ``PXI1Slot4``/``2-3``. The instruments must be in the same chassis.\n'
                },
                'name': 'channelList',
                'type': 'ViConstString'
            },
            {
                'direction': 'in',
                'documentation': {
                    'description': 'The number of elements in the ViUInt8 array you specify for data. To determine the size of the buffer to allocate for the data array, pass a value of 0 to the **bufferSize** parameter and a value of VI_NULL to the **data** parameter. In this case, the value returned by the **actualNumRead** parameter is the size of the array necessary to hold the data.\n'
                },
                'name': 'bufferSize',
                'type': 'ViInt32'
            },
            {
                'direction': 'out',
                'documentation': {
                    'description': 'The returned array of pin states read from the channels in the repeated capabilities. Data is returned in the order you specify in the repeated capabilities. If a site is disabled, the function does not return data for that site. You can also use the niDigital_FancyGetPinResultsPinInformation function to obtain a sorted list of returned sites and channels.\n\n-   NIDIGITAL_VAL_L: The comparators read a logic low pin state.\n-   NIDIGITAL_VAL_H: The comparators read a logic high pin state.\n-   NIDIGITAL_VAL_M: The comparators read a midband pin state.\n-   NIDIGITAL_VAL_V: The comparators read a value that is above VOH and below VOL, which can occur when you set VOL higher than VOH.\n'
                },
                'enum': 'PinState',
                'name': 'data',
                'size': {
                    'mechanism': 'ivi-dance-with-a-twist',
                    'value': 'bufferSize',
                    'value_twist': 'actualNumRead'
                },
                'type': 'ViUInt8[]'
            },
            {
                'direction': 'out',
                'documentation': {
                    'description': 'The number of values written to the data array.\n'
                },
                'name': 'actualNumRead',
                'type': 'ViInt32'
            }
        ],
        'returns': 'ViStatus'
    },
    'WriteStatic': {
        'documentation': {
            'description': 'Writes a static state to the specified pins. The selected pins remain in the specified state until the next pattern burst or call to this function. If there are uncommitted changes to levels or the termination mode, this function commits the changes to the pins. This function does not change the selected pin function. If you write a static state to a pin that does not have the Digital function selected, the new static state is stored by the instrument, and affects the state of the pin the next time you change the selected function to Digital.\n'
        },
        'parameters': [
            {
                'direction': 'in',
                'documentation': {
                    'description': 'The specified instrument session the niDigital_init or niDigital_InitWithOptions function returns.\n'
                },
                'name': 'vi',
                'type': 'ViSession'
            },
            {
                'direction': 'in',
                'documentation': {
                    'description': 'List of channel names or list of pins. Do not pass a mix of channel names and pin names. An empty string denotes all digital pattern instrument channels.\n\nPin names and pin groups apply to all enabled sites, unless the pin name explicitly specifies the site. You can specify a pin in a specific site using the form site\\ ``N``/pinName\\ ````, where ``N`` is the site number. This function ignores pins that are not mapped to the digital pattern instrument.\n\nSpecify channel names using the form ``PXI1Slot3``/``0``,\\ ``2-3`` or ``PXI1Slot3``/``0``,\\ ``PXI1Slot3``/``2-3``, where ``PXI1Slot3`` is the instrument resource name and ``0``, ``2``, ``3`` are channel names. To specify channels from multiple instruments, use the form ``PXI1Slot3``/``0``,\\ ``PXI1Slot3``/``2-3``,\\ ``PXI1Slot4``/``2-3``. The instruments must be in the same chassis.\n'
                },
                'name': 'channelList',
                'type': 'ViConstString'
            },
            {
                'direction': 'in',
                'documentation': {
                    'description': 'Parameter that specifies one of the following digital states to assign to the pin.\n\n-   NIDIGITAL_VAL_0: Specifies to drive low.\n-   NIDIGITAL_VAL_1: Specifies to drive high.\n-   NIDIGITAL_VAL_X: Specifies to not drive.\n'
                },
                'enum': 'WriteStaticPinState',
                'name': 'state',
                'type': 'ViUInt8'
            }
        ],
        'returns': 'ViStatus'
    }
}
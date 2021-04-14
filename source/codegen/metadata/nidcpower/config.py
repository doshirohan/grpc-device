# -*- coding: utf-8 -*-
# This file is generated from NI-DCPower API metadata version 20.7.0d8
config = {
    'api_version': '20.7.0d8',
    'c_header': 'nidcpower.h',
    'c_function_prefix': 'niDCPower_',
    'service_class_prefix': 'NiDCPower',
    'java_package': 'com.ni.grpc.dcpower',
    'csharp_namespace': 'NationalInstruments.Grpc.DCPower',
    'namespace_component': 'nidcpower',
    'close_function': 'Close',
    'context_manager_name': {
        'abort_function': 'Abort',
        'initiate_function': 'Initiate',
        'task': 'acquisition'
    },
    'custom_types': [
        { 
            'name': 'NIComplexNumber_struct',
            'grpc_name': 'NIComplexNumber',
            'fields': [
                {
                    'type': 'ViReal64',
                    'name': 'real',
                    'grpc_name': 'real'
                },
                {
                    'type': 'ViReal64',
                    'name': 'imaginary',
                    'grpc_name': 'imaginary'
                }
            ]
        },
        {
            'name': 'NILCRMeasurement_struct',
            'grpc_name': 'NILCRMeasurement',
            'fields': [
                {
                    'type': 'ViReal64',
                    'name': 'Vdc',
                    'grpc_name': 'vdc'
                },
                {
                    'type': 'ViReal64',
                    'name': 'Idc',
                    'grpc_name': 'idc'
                },
                {
                    'type': 'ViReal64',
                    'name': 'stimulusFrequency',
                    'grpc_name': 'stimulus_frequency'
                },
                {
                    'type': 'NIComplexNumber',
                    'name': 'ACVoltage',
                    'grpc_name': 'ac_voltage'
                },
                {
                    'type': 'NIComplexNumber',
                    'name': 'ACCurrent',
                    'grpc_name': 'ac_current'
                },
                {
                    'type': 'NIComplexNumber',
                    'name': 'Z',
                    'grpc_name': 'z'
                },
                {
                    'type': 'ViReal64',
                    'name': 'ZMagnitude',
                    'grpc_name': 'z_magnitude'
                },
                {
                    'type': 'ViReal64',
                    'name': 'ZPhase',
                    'grpc_name': 'z_phase'
                },
                {
                    'type': 'NIComplexNumber',
                    'name': 'Y',
                    'grpc_name': 'y'
                },
                {
                    'type': 'ViReal64',
                    'name': 'YMagnitude',
                    'grpc_name': 'y_magnitude'
                },
                {
                    'type': 'ViReal64',
                    'name': 'YPhase',
                    'grpc_name': 'y_phase'
                },
                {
                    'type': 'ViReal64',
                    'name': 'Ls',
                    'grpc_name': 'ls'
                },
                {
                    'type': 'ViReal64',
                    'name': 'Cs',
                    'grpc_name': 'cs'
                },
                {
                    'type': 'ViReal64',
                    'name': 'Rs',
                    'grpc_name': 'rs'
                },
                {
                    'type': 'ViReal64',
                    'name': 'Lp',
                    'grpc_name': 'lp'
                },
                {
                    'type': 'ViReal64',
                    'name': 'Cp',
                    'grpc_name': 'cp'
                },
                {
                    'type': 'ViReal64',
                    'name': 'Rp',
                    'grpc_name': 'rp'
                },
                {
                    'type': 'ViReal64',
                    'name': 'D',
                    'grpc_name': 'd'
                },
                {
                    'type': 'ViReal64',
                    'name': 'Q',
                    'grpc_name': 'q'
                },
                {
                    'type': 'ViUInt32',
                    'name': 'measurementMode',
                    'grpc_name': 'measurement_mode'
                },
                {
                    'type': 'ViBoolean',
                    'name': 'dcInCompliance',
                    'grpc_name': 'dc_in_compliance'
                },
                {
                    'type': 'ViBoolean',
                    'name': 'acInCompliance',
                    'grpc_name': 'ac_in_compliance'
                },
                {
                    'type': 'ViUInt32',
                    'name': 'rfu0',
                    'grpc_name': 'rfu0'
                },
                {
                    'type': 'ViReal64',
                    'name': 'rfu1',
                    'grpc_name': 'rfu1'
                },
                {
                    'type': 'ViReal64',
                    'name': 'rfu2',
                    'grpc_name': 'rfu2'
                },
                {
                    'type': 'ViReal64',
                    'name': 'rfu3',
                    'grpc_name': 'rfu3'
                },
                {
                    'type': 'ViReal64',
                    'name': 'rfu4',
                    'grpc_name': 'rfu4'
                },
                {
                    'type': 'ViReal64',
                    'name': 'rfu5',
                    'grpc_name': 'rfu5'
                },
                {
                    'type': 'ViReal64',
                    'name': 'rfu6',
                    'grpc_name': 'rfu6'
                },
                {
                    'type': 'ViReal64',
                    'name': 'rfu7',
                    'grpc_name': 'rfu7'
                }
            ]
        },
        {
            'name': 'NILoadCompensationSpot_struct',
            'grpc_name': 'NILoadCompensationSpot',
            'fields': [
                {
                    'type': 'ViReal64',
                    'name': 'frequency',
                    'grpc_name': 'frequency'
                },
                {
                    'type': 'ViInt32',
                    'name': 'primaryType',
                    'grpc_name': 'primary_type'
                },
                {
                    'type': 'ViInt32',
                    'name': 'secondaryType',
                    'grpc_name': 'secondary_type'
                },
                {
                    'type': 'ViReal64',
                    'name': 'primaryReference',
                    'grpc_name': 'primary_reference'
                },
                {
                    'type': 'ViReal64',
                    'name': 'secondaryReference',
                    'grpc_name': 'secondary_reference'
                }
            ]
        }
    ],
    'driver_name': 'NI-DCPower',
    'extra_errors_used': [
        'InvalidRepeatedCapabilityError',
        'SelfTestError'
    ],
    'init_function': 'InitializeWithChannels',
    'library_info': {
        'Linux': {
            '64bit': {
                'name': 'nidcpower',
                'type': 'cdll'
            }
        },
        'Windows': {
            '32bit': {
                'name': 'nidcpower_32.dll',
                'type': 'windll'
            },
            '64bit': {
                'name': 'nidcpower_64.dll',
                'type': 'cdll'
            }
        }
    },
    'metadata_version': '2.0',
    'module_name': 'nidcpower',
    'repeated_capabilities': [
        {
            'prefix': '',
            'python_name': 'channels'
        }
    ],
    'session_class_description': 'An NI-DCPower session to a National Instruments Programmable Power Supply or Source Measure Unit.',
    'session_handle_parameter_name': 'vi',
    'uses_nitclk': False
}

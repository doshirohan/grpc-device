# Changes in metadata from the nimi-python metadata

## config.py

The following metadata was added:
- 'c_function_prefix': 'niDCPower_'
- 'service_class_prefix': 'NiDCPower'
- 'java_package': 'com.ni.grpc.dcpower'
- 'csharp_namespace': 'NationalInstruments.Grpc.DCPower'

The following function name was capitalised:
- 'close_function': 'Close'

## functions.py

The following functions were tagged with 'init_method': True, to ensure their generated service handler registers the new session with the session_repository.
- InitializeWithIndependentChannels
- InitializeWithChannels
- InitExtCal

## attributes.py

The following attributes were added : 
- NIDCPOWER_ATTRIBUTE_RANGE_CHECK
- NIDCPOWER_ATTRIBUTE_CACHE
- NIDCPOWER_ATTRIBUTE_RECORD_COERCIONS
- NIDCPOWER_ATTRIBUTE_INTERCHANGE_CHECK
- NIDCPOWER_ATTRIBUTE_GROUP_CAPABILITIES
- NIDCPOWER_ATTRIBUTE_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION
- NIDCPOWER_ATTRIBUTE_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION
- NIDCPOWER_ATTRIBUTE_DIGITAL_EDGE_START_TRIGGER_EDGE
- NIDCPOWER_ATTRIBUTE_DIGITAL_EDGE_SEQUENCE_ADVANCE_TRIGGER_EDGE
- NIDCPOWER_ATTRIBUTE_DIGITAL_EDGE_SOURCE_TRIGGER_EDGE
- NIDCPOWER_ATTRIBUTE_DIGITAL_EDGE_MEASURE_TRIGGER_EDGE
- NIDCPOWER_ATTRIBUTE_DIGITAL_EDGE_PULSE_TRIGGER_EDGE
- NIDCPOWER_ATTRIBUTE_DIGITAL_EDGE_SHUTDOWN_TRIGGER_EDGE

The documentation and lv_property values were removed from all the attributes.
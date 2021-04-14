message NIComplexNumber {
    double real = 1;
    double imaginary = 2;
}

message NILCRMeasurement {
  double vdc = 1;
  double idc = 2;
  double stimulus_frequency = 3;
  NIComplexNumber ac_voltage = 4;
  NIComplexNumber ac_current = 5;
  NIComplexNumber z = 6;
  double z_magnitude = 7;
  double z_phase = 8;
  NIComplexNumber y = 9;
  double y_magnitude = 10;
  double y_phase = 11;
  double ls = 12;
  double cs = 13;
  double rs = 14;
  double lp = 15;
  double cp = 16;
  double rp = 17;
  double d = 18;
  double q = 19;
  uint32 measurement_mode = 20;
  bool dc_in_compliance = 21;
  bool ac_in_compliance = 22;
  uint32 rfu0 = 23;
  double rfu1 = 24;
  double rfu2 = 25;
  double rfu3 = 26;
  double rfu4 = 27;
  double rfu5 = 28;
  double rfu6 = 29;
  double rfu7 = 30;
}

message NILoadCompensationSpot {
  double frequency = 1;
  int32 primary_type = 2;
  int32 secondary_type = 3;
  double primary_reference = 4;
  double secondary_reference = 5;
}


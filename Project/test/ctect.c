# include "ctest.h"
#include "../Headers/total.h" 

const float a = 567.391;

CTEST(total, id_12) {    
    // When
    float  res_a = millimeters_TO_meters(a);
    // Then
    const float s = 0.567391;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_13) {
    // When
    float  res_a = millimeters_TO_centimeters(a);
    // Then
    const float s = 56.7391;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_14) {
    // When
    float  res_a = millimeters_TO_decimeters(a);
    // Then
    const float s = 5.67391;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_15) {
    // When
    float  res_a = millimeters_TO_kilometers(a);
    // Then
    const float s = 0.000567391;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_16) {
    // When
    float  res_a = millimeters_TO_fathoms(a);
    // Then
    const float s = 0.265931;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_17) {
    // When
    float  res_a = millimeters_TO_arshins(a);
    // Then
    const float s = 0.797794;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_18) {
    // When
    float  res_a = millimeters_TO_miles(a);
    // Then
    const float s = 0.000353;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_19) {
    // When
    float  res_a = millimeters_TO_yards(a);
    // Then
    const float s = 0.6205;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_110) {
    // When
    float  res_a = millimeters_TO_foots(a);
    // Then
    const float s = 1.861519;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_111) {
    // When
    float  res_a = millimeters_TO_micrometers(a);
    // Then
    const float s = 567391;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_112) {
    // When
    float  res_a = millimeters_TO_nanometers(a);
    // Then
    const float s = 567391000;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_113) {
    // When
    float  res_a = millimeters_TO_angstroms(a);
    // Then
    const float s = 0.000000;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_114) {
    // When
    float  res_a = millimeters_TO_nauticalmiles(a);
    // Then
    const float s = 0.0003064;
       
    ASSERT_DBL_NEAR(s, res_a);
}


CTEST(total, id_21) {    
    // When
    float  res_a = meters_TO_millimeters(a);
    // Then
    const float s = 567391;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_23) {
    // When
    float  res_a = meters_TO_centimeters(a);
    // Then
    const float s = 56739.100000;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_24) {
    // When
    float  res_a = meters_TO_decimeters(a);
    // Then
    const float s = 5673.91;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_25) {
    // When
    float  res_a = meters_TO_kilometers(a);
    // Then
    const float s = 0.567391;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_26) {
    // When
    float  res_a = meters_TO_fathoms(a);
    // Then
    const float s = 265.932;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_27) {
    // When
    float  res_a = meters_TO_arshins(a);
    // Then
    const float s = 797.794;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_28) {
    // When
    float  res_a = meters_TO_miles(a);
    // Then
    const float s = 0.35256;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_29) {
    // When
    float  res_a = meters_TO_yards(a);
    // Then
    const float s = 620.506343;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_210) {
    // When
    float  res_a = meters_TO_foots(a);
    // Then
    const float s = 1861.519029;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_211) {
    // When
    float  res_a = meters_TO_micrometers(a);
    // Then
    const float s = 567.391;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_212) {
    // When
    float  res_a = meters_TO_nanometers(a);
    // Then
    const float s = 567.391;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_213) {
    // When
    float  res_a = meters_TO_angstroms(a);
    // Then
    const float s = 0.000000;
       
    ASSERT_DBL_NEAR(s, res_a);
}

CTEST(total, id_214) {
    // When
    float  res_a = meters_TO_nauticalmiles(a);
    // Then
    const float s = 0.3064;
       
    ASSERT_DBL_NEAR(s, res_a);
}

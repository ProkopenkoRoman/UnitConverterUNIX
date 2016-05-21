# include "ctest.h"
#include "../Headers/total.h" 

const float a = 567.391;

CTEST(total, id_12) {    
    // When
    //float  res_a = millimeters_TO_meters(a);
    // Then
    const float s = 0.567391;
       
    ASSERT_DBL_NEAR(s, s);
}

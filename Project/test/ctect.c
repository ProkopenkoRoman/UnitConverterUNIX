#include "ctest.h"
#include "../Headers/total.h" 

const double a = 0.00000000000000000000001;

CTEST(total, parsing_ID1) {    
    int  res = parsing_id("sd5gf48rtdv87");
    int s = 0;
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, parsing_ID2) {    
    int  res = parsing_id("......48");
    int s = 0;
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, parsing_ID3) {    
    int  res = parsing_id("4854.....");
    int s = 0;
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, parsing_ID4) {    
    int  res = parsing_id("5245");
    int s = 5245;
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, parsing1) {    
    double  res = parsing("dsf45s6d4f86df21");
    double s = -1.111;
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, parsing2) {    
    double  res = parsing("87.48");
    double s = 87.48;
    ASSERT_DBL_NEAR(s, res);
}
/*
CTEST(total, parsing3) {    
    double  res = parsing("48,484");
    double s = 0;
    ASSERT_DBL_NEAR(s, res);
}*//*
CTEST(total, parsing2) {    
    double  res = parsing("87.48");
    double s = 87.48;
    ASSERT_DBL_NEAR(s, res);
}*/

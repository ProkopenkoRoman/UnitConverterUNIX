#include "ctest.h"
#include "../Headers/total.h" 

const float a = ;

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

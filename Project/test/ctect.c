#include <math.h>
#include "ctest.h"
#include "../Headers/total.h" 

const double a = 0.000000000000000000000000000000001;
const double b = 9999999999999.999999999999999999999;

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

CTEST(total, Time1) {    
    double  res = nsec_to_min(a);
    double s = 1.666667 * pow(10, -44);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Time2) {    
    double  res = nsec_to_min(b);
    double s = 1.666667 * pow(10, 2);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Pression1) {    
    double  res = kgm_to_bar(a);
    double s = 9.807 * pow(10, -38);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Pression2) {    
    double  res = kgm_to_bar(b);
    double s = 9.807 * pow(10, 8);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Data1) {    
    double  res = bitsTopetabytes(a);
    double s = 1.058791 * pow(10, -55);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Data2) {    
    double  res = bitsTopetabytes(b);
    double s = 1.110223 * pow(10, -3);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Length1) {    
    double  res = meters_TO_nauticalmiles(a);
    double s = 1 * pow(10, -23);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Length2) {    
    double  res = meters_TO_nauticalmiles(b);
    double s = 1 * pow(10, 23);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, QOS1) {    
    double  res = PoundMole2Mole(a);
    double s = 4.535924 * pow(10, -31);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Mass1) {    
    double  res = Drachmas_TO_Kilograms(a);
    double s =  1.771850 * pow(10, -36);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Mass2) {    
    double  res = Drachmas_TO_Kilograms(b);
    double s = 1.771850 * pow(10, 10);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Power1) {    
    double  res = ErgS2Vat(a);
    double s =  1 * pow(10, -40);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Power2) {    
    double  res = ErgS2Vat(b);
    double s = 1 * pow(10, 6);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Amount1) {    
    double  res = flozs_TO_squaredmeters(a);
    double s =  2.957353 * pow(10, -38);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Radiation1) {    
    double  res = PTOKlperKg(a);
    double s =  2.579760 * pow(10, -43);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Speed1) {    
    double  res = kmch_to_uzl(a);
    double s =  5.399560 * pow(10, -34);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Speed2) {    
    double  res = kmch_to_uzl(b);
    double s = 5.399560 * pow(10, 12);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, RESISTANCE1) {    
    double  res = uOmTOOm(a);
    double s =  1 * pow(10, -39);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, RESISTANCE2) {    
    double  res = uOmTOOm(b);
    double s = 1 * pow(10, 7);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Temperature1) {    
    double  res = Newtons_TO_Kelvins(a);
    double s =  2.7315 * pow(10, 2);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Angle1) {    
    double  res = Radian2Degree(a);
    double s =  5.729578 * pow(10, -32);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Frequency1) {    
    double  res = RadSec2Herz(a);
    double s =  1.591548 * pow(10, -34);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Energy1) {    
    double  res = electronvolt_to_joule(a);
    double s =  1.602176 * pow(10, -52);
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, Energy2) {    
    double  res = electronvolt_to_joule(b);
    double s = 1.602176 * pow(10, -6);
    ASSERT_DBL_NEAR(s, res);
}

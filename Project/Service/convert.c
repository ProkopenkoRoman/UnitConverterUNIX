#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
#include <math.h> 

void convert(double RESULT) {
	int i;
	char buf[40];
	double tmp, ost;
	
	ost = modf(RESULT, &tmp);
		
	for(i = 0; (ost < 1) && (i < 20); i++){
		
		ost *= 10;
	}
	
	if (i == 20){
		printf("Результат конвертирования: %.0f\n", RESULT);
	} else {
		printf("Результат конвертирования: %e\n", RESULT);
		//sprintf(buf," %%.%df\n", i + 3);
		//printf(buf, RESULT);
		} 	

}

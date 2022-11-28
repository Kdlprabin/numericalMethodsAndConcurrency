#include <stdio.h>
#include <math.h>

void velocityCalc(float v, float u, float a, float t){
	if(isnan(v)){
		v = u + a*t;
		printf("The final velocity is %f",v);
	}else if(isnan(u)){
		u = v - a *t;
		printf("The initial velocity is %f",u);
	}else if(isnan(a)){
		a = (v-u)/t;
		printf("The accleration is %f",a);
	}else{
		t= (v-u)/a;
		printf("The time is %f",t);
	}
}

int mainFour(){
	velocityCalc(NAN,5,4,3);	
	return 0;
}

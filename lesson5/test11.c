#include<stdio.h>
#include<stdlib.h>
main(){
	printf("\t@@@@@@@@@@@@@@ Test 1 @@@@@@@@@@@@@@\n");
	system("color f4");
	float h,l,w,v;
	printf("\tPlease Enter h:");
	scanf("%f",&h);
	printf("\tPlease Enter l:");
	scanf("%f",&l);
	printf("\tPlease Enter w:");
	scanf("%f",&w);
	v = h*l*w;
	printf("\t v = %f*%f*%f is %f\n",h,l,w,v);
	printf("\t@@@@@@@@@@@@@@ Test 1 @@@@@@@@@@@@@@\n");
}

#include<stdio.h>
#include<stdlib.h>
main(){
	printf("\t@@@@@@@@@@@@@@ Test 1 @@@@@@@@@@@@@@\n");
	system("color f5");
	double a,m,f,F;
	printf("\tPlease Enter m:");
	scanf("%lf",&m);
	printf("\tPlease Enter a:");
	scanf("%lf",&a);
	printf("\tPlease Enter f:");
	scanf("%lf",&f);
	F = (m*a)+f;
	printf("\t F = (%lf*%lf)+%lf is %lf\n",m,a,f,F);
	printf("\t@@@@@@@@@@@@@@ Test 1 @@@@@@@@@@@@@@\n");
}

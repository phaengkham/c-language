#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
main(){
	system ("color e3");
	Sleep (2000);
	printf("\t show you to know how to Calculate\n");
	printf("\t=====================================\n");
	
	float A,H,S;
	printf("\t value of A is: ");
	scanf("%f",&A);
	printf("\t value of H is:");
	scanf("\%f",&H);
	S=0.5*A*H;
	printf("\t Area=0.5*%f*%f is %f\n",A,H,S);
	
	printf("\t=====================================\n");
}

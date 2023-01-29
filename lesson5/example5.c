#include<stdio.h>
#include<stdlib.h>
main(){
	printf("\t@@@@@@@@@@ lesson 5 example 5 @@@@@@@@@@\n\n");
	system("color f1");
	int choice;
	double num1,num2;
	printf("\t########################################\n");
	printf("\t######### Plaese Select Choice ########\n");
	printf("\t########################################\n");
	printf("\t#######     1.Plus     (+)     ########\n");
	printf("\t#######     2.Minus    (-)     ########\n");
	printf("\t#######     3.Multiply (*)     ########\n");
	printf("\t#######     4.Divide   (/)     ########\n");
	printf("\t#######     5.Power    (^)     ########\n");
	printf("\t########################################\n");
	printf("\n\tSelect :");
	scanf("%d",&choice);
	printf("\n\tEnter number1 :");
	scanf("%lf",&num1);
	printf("\tEnter number2 :");
	scanf("%lf",&num2);
	switch(choice){
		case 1:
			printf("\t%3.2lf + %3.2lf = %3.2lf\n",num1,num2,num1+num2);
			break;
		case 2:
			printf("\t%3.2lf - %3.2lf = %3.2lf\n",num1,num2,num1-num2);
			break;	
		case 3:
			printf("\t%3.2lf * %3.2lf = %3.2lf\n",num1,num2,num1*num2);
			break;
		case 4:
			printf("\t%3.2lf / %3.2lf = %3.2lf\n",num1,num2,num1/num2);
			break;	
		case 5:
			printf("\t%3.2lf power %3.2lf = %3.2lf\n",num1,num2,pow(num1,num2));
			break;
		default :
			printf("\tPlese select choice 1-5 only\n");
	}
	printf("\t@@@@@@@@@@ lesson 5 example 5 @@@@@@@@@@\n\n");
}

#include<stdio.h>
#include<stdlib.h>

 main(){
	system("color f1");
	printf("\t=====logical operator=====\n");
	
	printf("\tResault of expression 30 > 20 is %d\n",30 > 20);
	printf("\tResault of expression 200 >= 200 is %d\n",200 >= 200);
	printf("\tResault of expression 100 == 20 is %d\n",100 == 20);
	printf("\tResault of expression 30 == 30 is %d\n",30 == 30);
	printf("\tResault of expression 120 != 120 is %d\n",120 != 120);
	printf("\tResault of expression ((2 * 2 / 4) && 0) is %d\n", ((2 * 2 / 4) && 0));
	printf("\tResault of expression ((2 * 2 / 4) && 1) is %d\n", ((2 * 2 / 4) && 1));
	printf("\tResault of expression 2 || 0 is %d\n", 2 || 0);
	
	printf("\t=====logical operator=====\n");
}

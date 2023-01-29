#include<stdio.h>
#include<stdlib.h>
main(){
	printf("\t@@@@@@@@@ lesson 5 example 1 @@@@@@@@@\n");
	system("color f1");
	int age;
	printf("\tHow old are you ?\n");
	printf("\tEnter your age:");
	scanf("%d",age);	
	if(age<18){
		printf("\tyou are young\n");
	}	
	printf("\tyou are %d yeas old",age);
	printf("\t@@@@@@@@@ lesson 5 example 1 @@@@@@@@@\n");
}

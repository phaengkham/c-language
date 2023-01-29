#include<stdio.h>
#include<stdlib.h>
main(){
	printf("\t================ example 16 ================\n");
	system("color f6");
	int choice;
	printf("\t============================================\n");
	printf("\tPlease Select the choice\n");
	printf("\t====== choice 1 get gun        ======\n");
	printf("\t====== choice 2 get plane      ======\n");
	printf("\t====== choice 3 get car        ======\n");
	printf("\t====== choice 4 get explosives ======\n");
	printf("\t====== choice 5 get life       ======\n");
	printf("\t============================================\n");
	do{
		printf("\n\tSelect(Please select the choice 1-5):");
		scanf("%d",&choice);
	}
	while(choice<1 || choice>5);
	printf("\tThe game is over you win\n");
	printf("\t================ example 16 ================\n");
}

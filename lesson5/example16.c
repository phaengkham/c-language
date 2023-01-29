#include<stdio.h>
#include<stdlib.h>
main(){
	printf("\t================ example 16 ================\n");
	system("color f6");
	int number;
	printf("\tGuess number:");
	scanf("%d",&number);
	while(number !=3){
		printf("\tYou are wrong! please try a gain\n");
		printf("\tThe number is 0-9\n");
		printf("\tGuess number:");
		scanf("%d",&number);
	}
	printf("\tYou win! Congratulation\n");
	printf("\t================ example 16 ================\n");
}

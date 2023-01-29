#include<stdio.h>
#include<stdlib.h>
main(){
	printf("\t@@@@@@@@@ lesson 5 example 3 @@@@@@@@@\n\n");
	system("color f1");
	int points;
	printf("\tPlease Enter Points:");
	scanf("%d",&points);
	if(points>=80){
		printf("\tCongratulations\n");
		printf("\tC language programming subject\n");
		printf("\tYou get grade A\n");
	}
	else if(points>=70){
		printf("\tYou get grade B\n");
	}
	else if(points>=60){
		printf("\tYou get grade C\n");
	}
	else if(points>=50){
		printf("\tYou get grade D\n");
	}
	else{
		printf("\tYou get grade F\n");
	}
	printf("\tSee you again! next course\n\n");
	printf("\t@@@@@@@@@ lesson 5 example 3 @@@@@@@@@\n\n");
}

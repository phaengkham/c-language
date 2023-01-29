#include<stdio.h>
#include<stdlib.h>

main(){
	printf("\t@@@@@@@@@ lesson 5 example 2 @@@@@@@@@\n\n");
	system("color f1");
	int point;
	printf("\tEnter your point:");
	scanf("%d",&point);
	if(point>=50){
		printf("\tPass exam, Congratulations\n");
	}
	else{
		printf("\tfail, Attempt again\n");
	}
	printf("\tBye Bye...See you next term");
	printf("\t@@@@@@@@@ lesson 5 example 2 @@@@@@@@@\n");
}

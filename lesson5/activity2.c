#include<stdio.h>
#include<stdio.h>

main(){
	printf("\t@@@@@@@@@ lesson 5 activity 2 @@@@@@@@@\n\n");
	system("color f1");
	int year;
	int THIS_YEAR = 2022;
	printf("\tWhat year were you born ?\n");
	printf("\tEnter the year:");
	scanf("%d",&year);
	if(year > THIS_YEAR){
		printf("\tPlease check the year again\n");
	}
	else{
		year=THIS_YEAR - year;
		printf("\tYou are %d years old\n",year);
	}
	printf("\tfinish good bye\n\n");
	printf("\t@@@@@@@@@ lesson 5 activity 2 @@@@@@@@@\n");
}

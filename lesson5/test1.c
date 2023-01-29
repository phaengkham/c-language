#include<stdio.h>
#include<stdlib.h>
main(){
	int point;
	printf("\t===============Test 1===============\n");
	system("color f2");
	printf("\tEnter the point:");
	scanf("%d",&point);
	if(point>=80){
		printf("\tGrade A\n");
	}
	else if(point>=75){
		printf("\tGrade B+\n");
	}
	else if(point>=70){
		printf("\tGrade B\n");
	}
	else if(point>=65){
		printf("\tGrade C+\n");
	}
	else if(point>=60){
		printf("\tGrade C\n");
	}
	else if(point>=55){
		printf("\tGrade D+\n");
	}
	else if(point>=50){
		printf("\tGrade D\n");
	}
	else{
		printf("\tGrade F\n");
	}
	printf("\t===============Test 1===============\n");
}

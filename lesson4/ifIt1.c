#include<stdio.h>
#include<stdlib.h>
main(){
	printf("\t######### it 1 #########\n");
	
	system("color f1");
	int age;
	printf("\t How old are you ?\n");
	printf("\t I am:");
	scanf("%d",&age);
	if(age<=18){
		printf("\t you are young\n");
	}
	printf("\t you are %d years old\n",age);
	
	printf("\t######### it 1 #########\n");
}

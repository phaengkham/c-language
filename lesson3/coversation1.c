#include<stdio.h>
#include<stdlib.h>
void main(){
	printf("\t 000000000@@@000000000\n\n");
	system("color f1");
	
	char name[10];
	printf("\t A.Hello, what is your name ? \n\a");
	printf("\t B.");
	scanf("\t%s",&name);
	printf("\t A.Nice to meet you ");
	printf("%s \n",name);
	printf("\t A.This is your girlfriend ?\n");
	printf("\t B.");
	scanf("%s",&name);
	printf("\t A.What is her name ?\n");
	printf("\t B.");
	scanf("%s",&name);
	printf("\t A.Nice to meet you ");
	printf("%s\n\n",&name);

	printf("\t 000000000@@@000000000\n\n\a");
}

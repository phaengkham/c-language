#include<stdio.h>
#include<stdlib.h>
main(){
	system("color f1");
	char name[20],surname[20],gender[10];
	int age,phone;
	float weight;
	printf("\tName:");
	scanf("%s",name);
	printf("\tsurname:");
	scanf("%s",surname);
	printf("\tgender:");
	scanf("%s",gender);
	printf("\tage:");
	scanf("%d",&age);
	printf("\tphone:");
	scanf("%d",&phone);
	printf("\tweight:");
	scanf("%f",&weight);
}

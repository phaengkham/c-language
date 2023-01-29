#include<stdio.h>
#include<stdlib.h>
main(){
	printf("\t=============================@C Programming=============================\n\n\n");
	system("color f1");
	char name[20],surname[20],birthday[11];
	int age;
	float weight;
	printf("\tName :");
	scanf("%s",name);
	printf("\tSurname:");
	scanf("%s",surname);
	printf("\tAge:");
	scanf("%d",&age);
	printf("\tBirthday:");
	scanf("%s",birthday);
	printf("\tWeight:");
	scanf("%f",&weight);
	printf("\n");
	printf("\tShow me the history\n");
    printf("\tName: %s\n",name);
    printf("\tSurname: %s\n",surname);
    printf("\tAge: %d\n",age);
    printf("\tBirthday: %s\n",birthday);
    printf("\tWeight: %f\n",weight);
   
	printf("\t=============================@C Programming=============================\n");
}

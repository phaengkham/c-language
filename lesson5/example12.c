#include<stdio.h>
#include<stdlib.h>
main(){
	printf("========== example 12 ==========\n");
	system("color f4");
	int i,j;
	for(i=1;i<=5;i+=2){
		for(j=i;j<=9;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
    printf("========== example 12 ==========\n");
}

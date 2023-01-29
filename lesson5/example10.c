#include<stdio.h>
#include<stdlib.h>
main(){
	printf("========== example 10 ==========\n");
	system("color f4");
	int i,j;
	for(i=1;i<=9;i+=2){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=9;i>=1;i-=2){
		for(j=i;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
    printf("========== example 10 ==========\n");
}

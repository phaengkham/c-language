#include<stdio.h>
#include<stdlib.h>
main(){
	printf("========== example 13 ==========\n");
	system("color f5");
	int i,j;
	int n=5;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(j=i;j<=n;j++){
			printf("*");
		}
		printf("\n");
	}
    printf("========== example 13 ==========\n");
}

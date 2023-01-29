#include<stdio.h>
#include<stdlib.h>
main(){
	printf("========== example 15 ==========\n");
	system("color f4");
	int i,j;
	int n = 5;
	for(i=i;i<=n;i++){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(j=i;j<n;j++){
			printf("*");
		}
		for(j=i;j<=n;j++){
			printf("*");
		}
		printf("\n");
	}
    printf("========== example 15 ==========\n");
}

#include<stdio.h>
#include<stdlib.h>
main(){
	system("color f3");
	printf("\t======== example 1 array 3 ==========\n\n");
	int num[2][3][4];
	int i,j,k,count=0;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			for(k=0;k<4;k++){
				++count;
				num[i][j][k] = count;
				printf("\tnum[%d][%d][%d]=%d\t",i,j,k,num[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("\tnum[2][3][4] can keep %d value\n",count);
	printf("\t======== example 1 array 3 ==========\n\n");
}

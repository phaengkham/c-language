#include<stdio.h>
#include<stdlib.h>
main(){
	system("color f3");
	printf("\t========== Example 3 array 2 ==========\n");
	int num[10][10]={0};
	int i,j,count = 0;
	for(i=0;i<10;i++){
		for(j=0;j<i;j++){
			num[i][j] = count;
			count++;
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}
	printf("\t========== Example 3 array 2 ==========\n");
}

#include<stdio.h>
#include<stdlib.h>

main(){
	system("color f3");
	printf("\t==== example 1 array 2 ====\n\n\n");
	int num [3][4]={ {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	//printf("\t\t%d\n\n\n",num[1][4]);
	printf("\t\t%d",num[0][0]);
	printf("\t%d",num[0][1]);
	printf("\t%d",num[0][2]);
	printf("\t%d\n\n",num[0][3]);
	
	printf("\t\t%d",num[1][0]);
	printf("\t%d",num[1][1]);
	printf("\t%d",num[1][2]);
	printf("\t%d\n\n",num[1][3]);
	
	printf("\t\t%d",num[2][0]);
	printf("\t%d",num[2][1]);
	printf("\t%d",num[2][2]);
	printf("\t%d\n\n",num[2][3]);
	printf("\t==== example 1 array 2 ====\n");
}

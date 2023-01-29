#include<stdio.h>
#include<stdlib.h>

main(){
	system("color f3");
	printf("\t==== example 2 array 2 ====\n\n\n");
	int num [3][4]={ {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	
	int x,y;
	for(x=0;x<3;x++){
		for(y=0;y<4;y++){
			printf("\t%d",num[x][y]);
		}
		printf("\n\n");
	}
	printf("\t==== example 2 array 2 ====\n");
}

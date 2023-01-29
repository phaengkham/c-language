#include<stdio.h>
#include<stdlib.h>

main(){
	printf("\t====example1====\n");
	system("color f2");
	int x,y,min;
	printf("\tEnter x:");
	scanf("%d",&x);
	printf("\tEnter y:");
	scanf("%d",&y);
	min=(x<y)?x:y;
	printf("\tMinimum value is %d\n",min);
	printf("\t====example1====\n");
}

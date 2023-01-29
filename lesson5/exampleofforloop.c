#include<stdio.h>
#include<stdlib.h>
main(){
	system("color f2");
	printf("\t==============Example of for loop==============\n");
	int n;
	printf("\tEnter Number:");
	scanf("%d",&n);
	printf("\tMultiplecation table of %d\n",n);
	int i;
	for(i=1;i<=12;i++){
		printf("\t%d x %d = %d\n",n,i,n*i);
	}
	printf("\t==============Example of for loop==============\n");
}

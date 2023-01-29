#include<stdio.h>
#include<stdlib.h>

main(){
	printf("\t=========example3=========\n");
	system("color f3");
	int a =9,b=6,c=0;
	c=(a++) + (++b);
	printf("\t\t%d %d %d\n",a,b,c);
	c=(--a) - (--b);
	printf("\t\t%d %d %d\n",a,b,c);
	c=++a;
	c=c-b--;
	c=c+ --a;
	printf("\t\t%d %d %d\n",a,b,c);
	printf("\t=========example3=========\n");
}

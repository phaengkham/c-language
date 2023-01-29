#include<stdio.h>
main(){
	int a;
	int b;
	printf("Enter a:\n");
	scanf("%d",&a);
	printf("Enter b:\n");
	scanf("%d",&b);
	int c=a+b;
	int d=a-b;
	int e=a*b;
	int f=a/b;
	int g=a%b;
	printf("a+b=%d\n",c);
	printf("a-b=%d\n",d);
	printf("a*b=%d\n",e);
	printf("a/b=%d\n",f);
	printf("a%b=%d\n",g);

}

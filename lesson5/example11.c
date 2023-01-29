#include<stdio.h>
#include<stdlib.h>

main(){
	printf("\t@@@@@@@@@ lesson 5 activity 1 @@@@@@@@@\n\n");
	system("color f1");
	int random;
	char name[20];
	printf("\tA.Please Input you name\n");
	printf("\tB.My name is ");
	scanf("%s",&name);
	printf("\tA.Please, Input your password\n");
	printf("\tB.My password is ");
	scanf("%s",name);
	printf("\tA.Please input your random number\n");
	printf("\tB.My random number is ");
	scanf("%d",&random);
	if(random<20){
		printf("\tA.You are in the random number\n");
		printf("\tA.Your Random number is %d\n",random);
	}
	printf("\tA.Thank you\n\n",random);
	printf("\t@@@@@@@@@ lesson 5 activity 1 @@@@@@@@@\n");
}

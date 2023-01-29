#include<stdio.h>
#include<stdlib.h>
main(){
	printf("\t@@@@@@@@@ lesson 5 example 4 @@@@@@@@@\n\n");
	system("color f1");
	char a;
	printf("Enter the char:");
	scanf("%c",a);
	switch(a){
		case '\n':
		    printf("You press enter");
		    break;
			case '\t':
				printf("You press tab");
			    break;
			    case ' ':
			    	printf("You press spacebar");
			    	break;
			    	default:
			    		printf("You don't press enter'");
				
	}
	printf("\t@@@@@@@@@ lesson 5 example 4 @@@@@@@@@\n\n");
}

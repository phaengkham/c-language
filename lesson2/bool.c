#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

main(){
	system("color f1");
 	printf("\t==========+++&&&+++==========\n\a");
	
	bool gender = 1;
	bool color = 0;
	if(gender){
		printf("\t This is the boy.\n");
	}
	else{
		printf("\t This is the girl.\n");
	}
	if(color){
		printf("\t The color is white.\n");
	}
	else{
		printf("\t The color is black.\n");
	}
	
	printf("\t==========+++&&&+++==========\n");
}

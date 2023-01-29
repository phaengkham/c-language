#include<stdio.h>
#include<stdlib.h>
 main(){
    char choice;
 	printf("\t============Test============\n");
 	system("color f2");
 	printf("\t[a] grade A\n");
 	printf("\t[b] grade B\n");
 	printf("\t[c] grade C\n");
 	printf("\t[d] grade D\n");
 	printf("\t[F] grade F\n");
 	printf("\tEnter the choice:");
 	scanf("%c",&choice);
 	switch (choice){
 		case 'a':
 			printf("\tYou get point 80 grade A\n");
 			break;
 			case 'b':
 				printf("\tYou get point 70 grade B\n");
 				break;
 				case 'c':
 					printf("\tYou get point 60 grade C\n");
 					break;
 					case 'd':
 						printf("\tYou get point 50 grade D\n");
 						break;
 						case 'f':
 							printf("\tYou get point 0 grade F\n");
 							break;
 							default:
 								printf("\tplease select a b c d f\n");
	 }
	 printf("\t============Test============\n");
 }

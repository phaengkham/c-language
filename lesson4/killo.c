#include<stdio.h>
#include<stdlib.h>
main(){
	system("color f2");
	printf("\t=========activity=========\n");
	
	float price;
	float kilo;
	float totalPrice;
	printf("\tEnter the price:");
	scanf("%f",&price);
	printf("\tEnter the kilo:");
	scanf("%f",&kilo);
	totalPrice=price*kilo;
	printf("\tThe total price:%f*%f is %f\n",price,kilo,totalPrice);
	
	printf("\t=========activity=========\n");
}

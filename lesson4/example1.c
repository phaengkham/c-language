#include<stdio.h>
#include<stdlib.h>
#define PI 3.14159
 main(void){
 	printf("\t==========================@escape character@============================\n\n\n");
 	system("color f1");
 	
 	float radius = 7.5, area, circum;
 	area = PI * radius * radius;
 	circum = 2 * PI *radius;
 	
 	printf("\tRadius of Circle is %f\n",radius);
 	printf("\t\tArea of Circle is %.3f\n",area);
 	printf("\t\t\tCicumference of circle is %.5f\n",circum);
 	printf("\tConclusion\n");
 	printf("\t*****************************************************************\n");
 	printf("\tRadius\t\t\tArea\t\t\tCircular\n");
 	printf("\t*****************************************************************\n");
 	printf("\t%7.2f\t\t\t%-7.2f\t\t\t%7.2f\n",radius,area,circum);
 	printf("\t*****************************************************************\n");
 	printf("\t*****************************************************************\n");
 	printf("\t1234567890\t\t1234567890\t\t1234567890\n\n\n");

 	printf("\t==========================@escape character@============================\n\n\n");
 }

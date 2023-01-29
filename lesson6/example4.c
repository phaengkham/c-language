#include<stdio.h>
#include<stdlib.h>
main(){
	printf("\t======= lesson 6 example 4 array =======\n");
	system("color e1");
	int h[6]={170,165,175,160,155,180};
//	int h[6];
//	h[0]=170;
//	h[1]=165;
//	h[2]=175;
//	h[3]=160,
//	h[4]=155;
//	h[5]=180;
	double avg =0.0;
	double sum = 0.0;
	int i;
	for (i=0;i<6;i++){
		sum +=h[i];	
	}
	avg=sum/6;
	printf("\tavg = %.2f\n",avg);
	printf("\t======= lesson 6 example 4 array =======\n");
}

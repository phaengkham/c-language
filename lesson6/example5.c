#include<stdio.h>
#include<stdlib.h>
main(){
	printf("\t======= lesson 6 example 4 array =======\n");
	system("color e1");
	int h[]={170,165,175,160,155,180};
	char gender[]={'M','F','M','F','F','M'};
	double avg =0;
	double sum = 0;
	double sumM = 0;
	double sumF = 0;
	double avgM = 0;
	double avgF = 0;
	int cntM = 0;
	int cntF = 0;
	int i;
	for (i=0;i<6;i++){
		if(gender[i] == 'M'){
			sumM += h[i];
			cntM++;
		}else{
			sumF += h[i];
			cntF++;
		}
		sum += h[i];
	}
	avg = sum / 5;
	avgM = sumM /  cntM;
	avgF = sumF / cntF;
	printf("\tavg = %.2f\n",avg);
	printf("\tavgM = %.2f\n",avgM);
	printf("\tavgF = %.2f\n",avgF);
	printf("\t======= lesson 6 example 4 array =======\n");
}

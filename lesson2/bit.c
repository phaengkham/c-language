#include<stdio.h>
#include<stdlib.h>

main(){
	printf("\t=====Bitwise=====\n");
	system("color f1");
    int a = 2; // 00000010
    int b = 5; // 00000101
    printf("\t a & b = %d\n", a & b);    // 00000000 = 0
    printf("\t a & b = %d\n", a | b);    // 00000111 = 7
    printf("\t ~a = %d\n", ~a);          // 11111101 = -1
    printf("\t a >> 1 = %d\n", a >> 1);  // 00000001 = 1
    printf("\t a << 1 = %d\n", a << 1);  // 00000100 = 8
    printf("\t=====Bitwise=====\n");
}


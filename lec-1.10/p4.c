//Q.4 Write a Program to print the below pattern using nested for loop.
//1 0 1 0 1
//  0 1 0 1
//    1 0 1
//      0 1
//        1

#include<stdio.h>
main(){
	
	int i,j,s;
	
	for(i=5; i>=1; i--){
		for(s=4; s>=i; s--){
			printf(" ");
		}
		for(j=1; j<=i; j++){
			if(j%2==0){
				printf("0");
			}
			else{
				printf("1");
			}
		}
			printf("\n");
	}
}

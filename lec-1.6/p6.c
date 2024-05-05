//Q.6 Write a C program that calculates and prints the sum of cubes of even numbers
//up to a specified limit (e.g., 20) using a while loop

#include<stdio.h>
main(){
	
	int n,f;
	printf("enter first value:");
	scanf("%d",&n);
	printf("enter end value:");
	scanf("%d",&f);
	while(n<=f){
		if(n%4==0){
			printf("%d",n);
				printf("\n");
		}
		n++;
	
	
	}	
}

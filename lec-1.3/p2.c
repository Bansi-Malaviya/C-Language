//2. Write a program that takes an integer as input and checks if it is even or odd.
//Print "Even" if the number is even and "Odd" if it's odd.

#include<stdio.h>
main(){
	
	int a;
	
	printf("Enter Number For Check even||odd:\n");
	scanf("%d",& a);
	
	if(a % 2 == 0){
		printf("your value is even");
	}
	else{
		printf("your value is odd");
	}
}

//4. Create a program that prompts the user to enter their age and 
//determines if they are eligible to vote (age 18 or older) or not.

#include<stdio.h>
main(){
	
	int a;
	
	printf("Enter your age:\n");
	scanf("%d",& a);
	
	if(a <= 0){
		printf("Please enter vaild age");
	}
	else if(a >= 18){
		printf("your are eligible for value");
	}
	else{
	printf("your are not eligible for value");
	}
}

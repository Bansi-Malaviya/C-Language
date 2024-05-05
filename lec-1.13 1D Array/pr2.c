//Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
//For example,
//Input:
//Enter the first number: 2020
//
//Enter the second number: 2040
//
//Output:
//The array is: 2020, 2024, 2028, 2032, 2036, 2040


#include<stdio.h>
main(){
	
	int a,b,i;
	
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("\nEnter the second number:");
	scanf("%d",&b);
	
	int year=b-a;
	int arr[year];
	
	for(i=0;i<year;i++){
		arr[i]=a+i;
		if(arr[i] %4==0){
			printf("%d ",arr[i]);
		}
	}
	
}

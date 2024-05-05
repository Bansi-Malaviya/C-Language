//Q.5 Write a Program to print leap years between two given numbers using a while loop.
//For example,
//Input:
//Enter the first number: 2020
//Enter the second number: 2040

#include<stdio.h>
main(){
	
	int n,f=20,ans;
	
	printf("enter starting no:");
	scanf("%d",&n);
	
	while(n<=f){
		if(n%2==0){
			printf("%d ",n);
			ans = ans + n;
		}
		n++;
	}
		printf("\n\n sum of enen no %d",ans);
	
	
}

//Q.3 Write a Program to find the sum of a first and the last digit of a number.
//For example,
//Input:
//Enter any number: 384
//
//Output: 
//The sum of the first and the last digit: 7

#include<stdio.h>
main(){
	
	int frist, last, n, ans;
	
	printf("Enter your number:");
	scanf("%d",&n);
	
	last= n % 10;
	do{
		frist= n % 10;
		n = n/10;
	}
	while(n>0);
	
	printf("frist number:%d\n",frist);
	printf("last number:%d\n",last);
	
	ans= frist + last;
	printf("additon of %d + %d is:%d\n",frist,last,ans);
}

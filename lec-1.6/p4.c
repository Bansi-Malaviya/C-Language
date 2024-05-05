//Q.4 Write a Program to print odd numbers from N to 1 using a while loop.
//For example,
//Input:
//Enter any number: 15
//
//Output:
//15 13 11 9 7 5 3 1

#include<stdio.h>
main(){
   int n=1,m;
	printf("enter eanding value:-");
	scanf("%d",&m);

	while(m>=n){
		if(m%2 == 1){
			printf(" %d",m);
		}
		m--;
	
	}
	
}

//Q.3 Write a Program to print 1 to N using a while loop.
//For example,
//Input:
//Enter any number: 7
//
//Output:
//1 2 3 4 5 6 7

#include<stdio.h>
main()
{
    int n,m;
    printf("enter the value n:");
    scanf("%d",&n);
    while(n>=1) 
	{
        printf(" %d",n);
        n--; 
		printf("\n");  
    }
}
	

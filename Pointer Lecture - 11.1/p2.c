//Q.2 Write a Program to swap two variables using Pointers.
//For example,
//Input:
//Enter the value of x: 5
//Enter the value of y: 3
//
//Output:
//Before swapping:
//x: 5
//y: 3
//
//After swapping:
//x: 3
//y: 5

#include<stdio.h>
void main()
{
	int x,y;
	int *ptr;
	ptr = &x;
	ptr = &y;
	
	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("Enter the value of y: ");
	scanf("%d",&y);
	
	printf("\nBefore swapping:\n");
	printf("x: %d\n",x);
	printf("y: %d\n\n",*ptr);
	
	printf("After swapping:\n");
	printf("x: %d\n",y);
	printf("y: %d",x);
}

//Q.1 Write a program to print another varibale value and address using pointer concept.
//For example,
//Input:
//Enter the any number : 5
//
//Output:
//A     :  5
//PTR  : 5
//
//Address of A: 20105064
//PTR  Store Address : 20105064



#include<stdio.h>
void main()
{
	int a;
	int *ptr;
	ptr = &a;
	
	printf("Enter the any number : ");
	scanf("%d",&a);
	
	printf("A\t:%d\n",a);
	printf("ptr\t:%d\n\n",*ptr);
	
	printf("Address of A: %u\n",&a);
	printf("ptr\t:%u",ptr);
}

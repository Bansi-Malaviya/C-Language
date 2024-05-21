//Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
//For example,
//Input:
//Enter any string: nayan
//
//Output:
//Given string is a Palindrome.
//
//------------------------------------------------
//
//For example,
//Input:
//Enter any string: hello
//
//Output:
//Given string is not a Palindrome.

#include<stdio.h>
main()
{
	int i , length = 0 , a = 0 ;
	char choice [100];
	
	printf(" Enter Your Choise :");
	scanf("%s", &choice);
	
	for( i = 0 ; choice[i] != NULL ; i++)
	{
		length++; 	
	}
	printf("the value of %d\n ", length);
	
	for( i = 0 ; choice[i] > length ; i++)
	{
		if( choice[i]==choice[length-i-1])
		{
			a=1;
		}
		else
		{
			a=0;
		}
	}
	
	if( a == 1)
	{
		printf("Given string is Strong ");
	}
	else
	{
		printf("Given string is not Strong ");
	}
}


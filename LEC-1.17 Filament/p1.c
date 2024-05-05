//Q.1 Write a Program to check if a given password is strong or not by satisfying the below criteria:
//- Password must contain at least one letter, one digit & one special symbol.
//- Password must be at least 6 characters.For example,
//Input:
//Create your password: Admin@123
//
//Output:
//Your password is Strong.
//
//-----------------------------------------
//
//For example,
//Input:
//Create your password: hello#89
//
//Output:
//Your password is not Strong.
//

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


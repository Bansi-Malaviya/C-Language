//Q.2 Write a Program to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.
//For example,
//Input:
//Enter your email: admin@gmail.com
//Enter your password: 123456
//
//Output:
//Login Successful...
//
//-----------------------------------------
//
//For example,
//Input:
//Enter your email: xyz@gmail.com
//Enter your password: 123456
//
//Output:
//Login Failed. Invalid Credentials.

#include <stdio.h>
main(){
	
	int i,len;
	char string[50],freq[128] = {0}; 
	
	printf("Enter any string: ");
    gets(string);
    
    len = strlen(string);
  
    for (i = 0; i < len; i++)
	{
        freq[string[i]]++;
    }

    printf("Frequency of each letter:\n");
    for ( i = 0; i < 128; i++) 
	{
        if (freq[i] > 0) {
            printf("%c => %d\n", i, freq[i]);
        }
    }

}


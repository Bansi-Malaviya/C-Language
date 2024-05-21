//Q.2 Write a Program to count the frequency of each character in a given string.
//For example,
//Input:
//Enter any string: development
//
//Output:
//Frequency of each letter:
//d => 1
//e => 3
//v => 1
//e => 3
//l => 1
//o => 1
//p => 1
//m => 1
//e => 3
//n => 1
//t => 1


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


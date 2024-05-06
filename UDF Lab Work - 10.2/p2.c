//Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.For example,
//Input:
//Enter any string: development
//
//Output:
//Length is: 11

#include<stdio.h>
int mystrlen(char str[10]);


int main()
{
 char str[10];
 int i, len;

 printf("Enter any string:");
 gets(str);

 len = mystrlen(str); 
 printf("Length is: %d", len);

 return 0;
}

int mystrlen(char str[10])
{
 int i, len;

 for(i=0; i<str[i];i++)
 {
  len++;
 }

 return(len);
}

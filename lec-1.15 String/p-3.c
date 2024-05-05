//Q.3 Write a Program to convert the given name in string and sum the number of string assci value.
//For example,
//Input:
//Enter your name :Hello
//
//
//Output:
//
//Ascci Value of H is 72
//Ascci Value of e is 101
//Ascci Value of l is 108
//Ascci Value of l is 108
//Ascci Value of o is 111
//sum is  = 500

#include<stdio.h>
main(){
	
	char str[]="hello";
	int length=strlen(str);
	int i,sum=0;
	
	printf("%s",strlwr(str)); 
	for(i=0;i<length;i++){
		printf("\n%c = %d ",str[i],str[i]);
		sum = sum + str[i];
	}
	
	printf("\n %d ",sum);

}

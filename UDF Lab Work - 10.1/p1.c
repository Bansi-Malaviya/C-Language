//Q.1 Write a Program to find the cube of a given number using UDF.For example,
//Input:
//Enter any number: 5
//
//Output:
//Cube is: 125

#include<stdio.h>
int cube()
{

   int n;
   printf("Enter any number: ");
   scanf("%d",&n);
   return n*n*n;
   
}

main(){
	printf("cube is %d",cube());
}

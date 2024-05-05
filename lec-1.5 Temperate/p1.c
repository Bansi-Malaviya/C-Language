//Q.1 Write a Program to check whether a number is even or odd using the ternary operator.
//For example,
//Input:
//Enter any number: 12
//
//Output: 
//This number is Even.

#include <stdio.h>

main(){
	
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d is even.\n", num)

}

//Q.6 Write a Program to find the minimum number from the given 3 numbers using the ternary operator.For example,
//Input:
//Enter a value of the first number: 8
//Enter a value of the second number: 3
//Enter a value of the third number: 12
//
//Output:
//The minimum value is: 3


#include <stdio.h>

int main() {
    
    int num1, num2, num3;
    printf("Enter a value of the first number: ");
    scanf("%d", &num1);
    printf("Enter a value of the second number: ");
    scanf("%d", &num2);
    printf("Enter a value of the third number: ");
    scanf("%d", &num3);
    
    (num1<num2)
		?((num1<num3)?printf(" a is min")
		       :printf(" e is min"))
	:((num2<num3)?(printf("bis min"))
	       :(printf("cis min")));
   

}

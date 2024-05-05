//3. Write a program that takes a number as input and checks if it's
//positive, negative, or zero. Print the result accordingly.

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num >= 0) {
        printf("The number is positive.\n");
    } else if(num <= 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}

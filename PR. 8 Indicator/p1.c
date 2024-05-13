//Q.1 Write a Program to find the length of a string using a Pointer.
//For example,
//Input:
//Enter any string: hello world
//
//Output:
//The length of a string is: 11

#include <stdio.h>
int strLength(char *str) {
	
    const char *ptr = str;
    
    while (*ptr != '\0') {
        ptr++;
    }
    
    return (ptr - str);
}

int main() {
    char str[100];
    printf("Enter any string: ");
    gets(str);
    
    int length = strLength(str);

    printf("The length of the string is: %d\n", length);

    return 0;
}

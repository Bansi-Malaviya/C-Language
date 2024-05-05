//5. Create a program that prompts the user to enter their age and determines 
//if they are a child (age 12 or younger), a teenager (ages 13 to 19), 
//an adult (ages 20 to 64), or a senior (age 65 or older).

#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age <= 12)
	 {
        printf("You are a child.\n");
    } 
	else if(age >= 13 && age <= 19)
	 {
        printf("You are a teenager.\n");
    } 
	else if(age >= 20 && age <= 64)
	 {
        printf("You are an adult.\n");
    } 
	else if(age >= 65)
	 {
        printf("You are a senior.\n");
    } 
	else {
        printf("Invalid age entered.\n");
    }

}


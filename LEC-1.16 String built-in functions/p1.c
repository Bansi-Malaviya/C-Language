//Q.1 Write a Program to check if a given password is strong or not by satisfying the below criteria:
//- Password must contain at least one letter, one digit & one special symbol.
//- Password must be at least 6 characters.For example,
//Input:
//Create your password: Admin@123
//
//Output:
//Your password is Strong.
//
//-----------------------------------------
//
//For example,
//Input:
//Create your password: hello#89
//
//Output:
//Your password is not Strong.
//


#include <stdio.h>

   int is_strong_password(char *password) {
   	
    int i, has_letter = 0, has_digit = 0, has_special = 0, length = strlen(password);

    if (length < 6) {
        
    }

    for (i = 0; i < length; i++) {
        if (isalpha(password[i])) {
            has_letter = 1;
        } else if (isdigit(password[i])) {
            has_digit = 1;
        } else if (!isalnum(password[i])) {
            has_special = 1;
        }
    }

    return (has_letter && has_digit && has_special);
}

int main() {
    char password[50];

    printf("Enter the password: ");
    scanf("%s", password);

    if (is_strong_password(password)) {
        printf("Strong password!\n");
    } else {
        printf("Your password is not Strong.\n");
    }

}


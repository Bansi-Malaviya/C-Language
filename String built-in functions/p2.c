//Q.2 Write a Program to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.
//For example,
//Input:
//Enter your email: admin@gmail.com
//Enter your password: 123456
//
//Output:
//Login Successful...
//
//-----------------------------------------
//
//For example,
//Input:
//Enter your email: xyz@gmail.com
//Enter your password: 123456
//
//Output:
//Login Failed. Invalid Credentials.


#include <stdio.h>
main() {
    char email[50];
    char password[50];

    // Desired email and password for comparison
    char desired_email[] = "admin@gmail.com";
    char desired_password[] = "123456";

    printf("Enter your email: ");
    scanf("%s", email);

    printf("Enter your password: ");
    scanf("%s", password);

    // Compare entered email and password with desired ones
    if (strcmp(email, desired_email) == 0 && strcmp(password, desired_password) == 0) {
        printf("Login Successful...\n");
    } else {
        printf("Login Failed. Invalid Credentials.\n");
    }


}

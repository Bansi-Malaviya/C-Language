//Q.3 using if-else if-else statements :
//Develop a C program that takes a student's score as input and prints their 
//corresponding grade (A, B, C, D, or F) using if-else if-else statements.

#include <stdio.h>

main() {
    
    int score,grade;
    printf("Enter the student's score: ");
    scanf("%d", &score);
  
    
    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("The student's grade is: %d\n", grade);

    
}

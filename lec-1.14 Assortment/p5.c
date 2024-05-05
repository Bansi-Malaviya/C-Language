//Q.5 Write a Program to find the average of a given 2D array.
//For example,
//Input:
//Enter the array's row size: 3
//Enter the array's column size: 3
//
//Enter array's elements:
//a[0][0] = 2
//a[0][1] = 4
//a[0][2] = 1
//a[1][0] = 3
//a[1][1] = 5
//a[1][2] = 4
//a[2][0] = 8
//a[2][1] = 2
//a[2][2] = 6
//
//Output:
//Average of an Array: 3.88


#include <stdio.h>
main() {
    int r, c , i , j;
    
    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);
    
    int array[r][c];
    
    printf("\nEnter array's elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    int sum = 0;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum += array[i][j];
        }
    }
    
    float average = (float)sum / (r * c);
    
    printf("\nAverage of an Array: %.2f\n", average);

}


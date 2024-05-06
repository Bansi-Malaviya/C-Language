//Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
//For example,
//Input:
//Enter array size: 5
//Enter array elements:
//a[0] = 6
//a[1] = 4
//a[2] = 1
//a[3] = 5
//a[4] = 2
//
//Output:
//The sum of an Array: 18


#include <stdio.h>

    int sumOfArray(int arr[], int size) {
    int sum = 0,i;
    for ( i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size],i;

    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int sum = sumOfArray(arr, size);

    printf("The sum of an Array: %d\n", sum);

    return 0;
}

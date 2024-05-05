//Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
//For example,
//Input:
//Enter array A's size: 5
//
//Enter array A's elements:
//a[0] = 7
//a[1] = 4
//a[2] = 9
//a[3] = 5
//a[4] = 2
//
//Enter array B's size: 3
//
//Enter array B's elements:
//b[0] = 1
//b[1] = 3
//b[2] = 6
//
//Output:
//Array C is: 7, 4, 9, 5, 2, 1, 3, 6


#include<stdio.h>
main(){
	
	int a;
	printf("Enter array A's size:");
	scanf("%d",&a);
	printf("\nEnter array A's elements:\n");

	int arry[a],i;
	for(i=0;i < a;i++){
		printf("a[%d]",i);
		scanf("%d",&arry[i]);
	}
	
	int b;
	printf("\nEnter array B's size:");
	scanf("%d",&b);
	printf("\nEnter array B's elements:\n");
	
	int arry1[b];
	for(i=0;i< b;i++){
		printf("b[%d]",i);
		scanf("%d",&arry1[i]);
	}
	for(i=0;i<a;i++){
		printf("%d ",arry[i]);
	}
	for(i=0;i<b;i++){
		printf("%d ",arry1[i]);
	}
	
}

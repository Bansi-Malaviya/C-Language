//Q.2 Write a Program to find the largest element from a given 2D array.
//For example,
//Input:
//Enter the array's row size: 3
//Enter the array's column size: 3
//
//Enter array's elements:
//a[0][0] = 2
//a[0][1] = 7
//a[0][2] = 1
//a[1][0] = 3
//a[1][1] = 5
//a[1][2] = 4
//a[2][0] = 8
//a[2][1] = 9
//a[2][2] = 6
//
//Output:
//The largest element is: 9
//

#include<stdio.h>
main()
{
	int r,c;
	int largest=0;
	int a[3][3];
    int i,j;
	 
	printf("Enter the array's row size:",a[r]);
	scanf("%d",&r);
	printf("Enter the array's column size:",a[c]);
	scanf("%d",&c);
	printf("\n");
	printf("Enter array's elements:\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
     	}
   }
   printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[0][0]<a[i][j]){
				a[0][0]=a[i][j];	
			}
       }
    }
     	printf("The largest element is:");
     	printf("%d",a[0][0]);
}


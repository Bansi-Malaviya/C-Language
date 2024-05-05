//Q.11 Write a Program to print the below pattern using nested for loop.
//           *
//         * * *
//       * * * * *
//     * * * * * * *
//   * * * * * * * * *

#include<stdio.h>
main(){
	
	int i,j,s;
	
	for(i=1; i<=5; i++){
		for(s=4; s>=i; s--){
			printf(" ");
		}
		for(j=1; j<=i; j++){
			printf("*");
		}
		
		for(j=i-1; j>=1; j--){
			printf("*");
		}
			printf("\n");
	}
}

//Q.7 Write a Program to print the below pattern using nested for loop.
//A
//B A
//C B A
//D C B A
//E D C B A

#include<stdio.h>
main(){
	
	int i,j;
	
	 for(i = 'A'; i <= 'E'; i++) {
        for(j = i; j >='A' ; j--) {
        	printf("%c",j);
        }
        printf("\n");
    }
}
    

#include<stdio.h>
main(){
	
	int a,b,i;
	
	printf("Enter Starting Year : ");
	scanf("%d",&a);
	printf("Enter Ending Year : ");
	scanf("%d",&b);
	
	
	int year = b - a;
	int arr[year];
	
	for(i=0; i<=year; i++){
		arr[i] = a + i;
		if(arr[i] % 4 == 0){
			printf("%d ",arr[i]);
		}
	}
	
	
}

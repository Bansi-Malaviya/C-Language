//Q.3 Write C Program to find the third angle of a right triangle if two other angles are given.
//For example,
//Input:
//First angle: 65
//Second angle: 45 
//
//Output: 
//Third angle: 70

#include<stdio.h>
main(){
	
	float angle1 , angle2 , angle3;
	
	 printf("Enter The First angle:");
	 scanf("%f",&angle1);
	 
	 printf("Enter The Second angle:");
	 scanf("%f",&angle2);
	 
	 angle3=(angle1 + angle2)-180;
	 
	 printf("Third angle:%2.f\n",angle3);
	 
}

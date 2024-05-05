//Q.4 Write a C program that takes a number (1 to 7) as input and prints the corresponding day of the week using a switch statement.

#include<stdio.h>
 main(){
 	
   int day;
   
   printf("enter your day:");
   scanf("%d",&day);
  
   switch(day)
   {
   
   case 1:
	 printf("Monday");
   break;
   
   case 2:
	printf("Tuesday");
   break;
   
   case 3:
       printf("Wednesday");
   break;
   
   case 4:
       printf("Thursday");
   break;
   
   case 5:
       printf("Friday");
   break;
   
   case 6:
       printf("Saturday");
   break;
   
   case 7:
       printf("Sunday");
   break;
   
  default:
       printf("enter your vaild day");

}
}

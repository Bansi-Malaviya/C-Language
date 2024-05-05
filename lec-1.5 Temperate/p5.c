//Q.5  Write a C program that takes a number (1 to 12) 
//as input and prints the corresponding month's name using a switch statement.

#include<stdio.h>
 main(){
 	
   int month;
   
   printf("enter your month:");
   scanf("%d",&month);
  
   switch(month)
   {
   
   case 1:
	 printf("january");
   break;
   
   case 2:
	printf("february");
   break;
   
   case 3:
       printf("march");
   break;
   
   case 4:
       printf("april");
   break;
   
   case 5:
       printf("may");
   break;
   
   case 6:
       printf("june");
   break;
   
   case 7:
       printf("july");
   break;
   
   case 8:
       printf("ocast");
   break;
   
   case 9:
       printf("septmber");
   break;
   
   case 10:
       printf("octomber");
   break;
   
   case 11:
       printf("november");
   break;
   
   case 12:
       printf("december");
   break;
  
  default:
    	printf("enter your vaild month");

}
}

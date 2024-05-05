#include<stdio.h>
void sum()
{
	int first,second,c;
	printf("enter the first num:-");
	scanf("%d",&first);
	printf("enter the second num:-");
	scanf("%d",&second);
	c=first+second;
	printf("addition of a&b is %d\n\n",c);
}
    int sub(){
    int first,second,c;
	printf("enter the first num:-");
	scanf("%d",&first);
	printf("enter the second num:-");
	scanf("%d",&second);
	c=first-second;
	printf("substraction of a&b is %d\n\n",c);
}
    int mult(){
    int first,second,c;
	printf("enter the first num:-");
	scanf("%d",&first);
	printf("enter the second num:-");
	scanf("%d",&second);
	c=first*second;
	printf("multiplication of a&b is %d\n\n",c);  
   
}
   int devi(){
    int first,second,c;
	printf("enter the first num:-");
	scanf("%d",&first);
	printf("enter the second num:-");
	scanf("%d",&second);
	c=first/second;
	printf("devision of a&b is %d\n\n",c);  
}
  
void main(){
	int choice;

do
{
  printf("press 1 for +...\n");
  printf("press 2 for -...\n");
  printf("press 3 for *...\n");
  printf("press 4 for /...\n");
  printf("press 5 for %...\n");
  printf("press 0 for exit...\n");
  printf("enter your choice:-");
  scanf("%d",&choice);
  switch(choice){
  
  case 1:
        sum();
		break;
  case 2:
  	    sub();
		break;
  case 3:
        mult();
		break;
  case 4:
  	    devi();
  	    break;
  case 0:
  	    printf("exited...");
  	    break;
		default:
		        printf("not available...\n");
				break;
  }
}while(choice!=0);
}


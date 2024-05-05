//Q.8 Write a Program to create a menu-driven program for Restaurant.

#include<stdio.h>
main(){
	int choice;
	printf("\t\t\t\t********************************\n");
	printf("\t\t\t\t*********Restaurant********\n");
	printf("\t\t\t\t********************************\n");
	printf("press 1 for Frenki\n");
	printf("press 2 for Sweet potato fries\n");
	printf("press 3 for Chole bhature\n");
	printf("press 4 for Shahi Paneer\n");
	printf("press 5 for Pizza\n");
	printf("press 6 for dhosa\n");
	printf("press 7 for Sandwich\n");
	printf("press 8 for Malai Kofta\n");
	printf("press 9 for Burgar\n");
	printf("press 10 for Ramen\n");
	printf("press 11 for Khichdi\n");
	printf("press 12 for momos\n");
	printf("press 13 for vadapav\n");
	printf("press 14 for masala papad\n");

	printf("Enter your choice:");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("Enjoy your Frenki");
		break;
	    case 2:
			printf("Enjoy your Sweet potato fries");
		break;
		case 3:
			printf("Enjoy your Chole bhature");
		break;
		case 4:
			printf("Enjoy your Shahi Paneer");
		break;
		case 5:
			printf("Enjoy your Pizza");
		break;
		case 6:
			printf("Enjoy your dhosa");
		break;
		case 7:
			printf("Enjoy your Sandwich");
		break;
		case 8:
			printf("Enjoy your Malai Kofta");
		break;
		case 9:
			printf("Enjoy your Burgar");
		break;
		case 10:
			printf("Enjoy your Ramen");
		break;
		case 11:
			printf("Enjoy your Khichdi");
		break;
		case 12:
			printf("Enjoy your momos");
		break;
		case 13:
			printf("Enjoy your chilii Paneer");
		break;
		case 14:
			printf("Enjoy your masala papad");
		break;
		default:
			printf("plese enter your valid choice");  
    }
}

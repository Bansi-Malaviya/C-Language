//Q.8 Write a Program to create a menu-driven program for Restaurant.

#include<stdio.h>
main(){
	int choice;
	printf("\t\t\t\t********************************\n");
	printf("\t\t\t\t*********Surat Vala Cafe********\n");
	printf("\t\t\t\t********************************\n");
	printf("press 1 for Pizza\n");
	printf("press 2 for Burgar\n");
	printf("press 3 for Panipuri\n");
	printf("press 4 for dahipuri\n");
	printf("press 5 for Frenki\n");
	printf("press 6 for vadapav\n");
	printf("press 7 for vadapav\n");
	printf("press 8 for vadapav\n");
	printf("press 9 for vadapav\n");
	printf("press 10 for vadapav\n");
	printf("press 11 for vadapav\n");
	printf("press 12 for vadapav\n");
	printf("press 13 for vadapav\n");
	printf("press 14 for vadapav\n");

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

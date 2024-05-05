//Q.8 Write a Program to create a menu-driven program for Restaurant.

#include <stdio.h>

 ain() {
    int choice, quantity;
    float total_cost = 0;

    printf("Welcome to the Restaurant!\n");
    printf("------------------------\n");
    printf("Press 1 for Biryani\n");
    printf("Press 2 for Pizza\n");
    printf("Press 3 for Burger\n");
    printf("Press 4 for French Fries\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Biryani - Rs. 200 per plate\n");
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            total_cost += 200 * quantity;
            break;
        case 2:
            printf("Pizza - Rs. 300 per plate\n");
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            total_cost += 300 * quantity;
            break;
        case 3:
            printf("Burger - Rs. 150 per plate\n");
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            total_cost += 150 * quantity;
            break;
        case 4:
            printf("French Fries - Rs. 100 per plate\n");
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            total_cost += 100 * quantity;
            break;
        default:
            printf("Invalid choice.\n");
            return 0;
    }

    printf("------------------------\n");
    printf("Total cost: Rs. %.2f\n", total_cost);
    printf("Thank you for visiting our Restaurant!\n");

}

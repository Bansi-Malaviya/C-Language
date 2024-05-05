//Q.7 Write a Program to create a menu-driven program for Telecom call service conversation using nested switch case.
//For example,
//Press 1 for English
//Press 2 for Hindi
//Press 3 for Gujarati
//Enter your choice: 1
//
//Press 1 for Internet Recharge
//Press 2 for Top-up Recharge
//Press 3 for Special Recharge
//Enter your choice: 2
//
//You have successfully done Top-up Recharge.
//
//---------------------------------------------
//
//For example,
//Press 1 for English
//Press 2 for Hindi
//Press 3 for Gujarati
//Enter your choice: 2
//
//Internet Recharge ke liye 1 dabaiye
//Top-up Recharge ke liye 2 dabaiye
//Special Recharge ke liye 3 dabaiye
//Enter your choice: 1
//
//Aapne safaltapurvak Internet Recharge kar liya he.
//
//---------------------------------------------
//
//
//For example,
//Press 1 for English
//Press 2 for Hindi
//Press 3 for Gujarati
//Enter your choice: 3
//
//Internet Recharge mate 1 dabavo
//Top-up Recharge mate 2 dabavo
//Special Recharge mate 3 dabavo
//Enter your choice: 3
//
//Tame safaltapurvak Special Recharge karyu chhe.


#include <stdio.h>

main() {
    int language, recharge_type, internet_recharge, top_up_recharge, special_recharge;

    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your choice: ");
    scanf("%d", &language);

    switch (language) {
        case 1:
            printf("Press 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");
            
            printf("Enter your choice: ");
            scanf("%d", &recharge_type);

            switch (recharge_type) {
                case 1:
                    printf("You have successfully done Internet Recharge.\n");
                    break;
                case 2:
                    printf("You have successfully done Top-up Recharge.\n");
                    break;
                case 3:
                    printf("You have successfully done Special Recharge.\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;

        case 2:
            printf("Internet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n");
            printf("Enter your choice: ");
            scanf("%d", &recharge_type);

            switch (recharge_type) {
                case 1:
                    printf("Aapne safaltapurvak Internet Recharge kar liya he.\n");
                    break;
                case 2:
                    printf("Aapne safaltapurvak Top-up Recharge kar liya he.\n");
                    break;
                case 3:
                    printf("Aapne safaltapurvak Special Recharge kar liya he.\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;

        case 3:
            printf("Internet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n");
            printf("Enter your choice: ");
            scanf("%d", &recharge_type);

            switch (recharge_type) {
                case 1:
                    printf("Tame safaltapurvak Internet Recharge karyu chhe.\n");
                    break;
                case 2:
                    printf("Tame safaltapurvak Top-up Recharge karyu chhe.\n");
                    break;
                case 3:
                    printf("Tame safaltapurvak Special Recharge karyu chhe.\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

}

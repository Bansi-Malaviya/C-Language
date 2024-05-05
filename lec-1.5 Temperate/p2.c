//Q.2 Write a Program to input electricity unit charges and calculate the total electricity bill according to the given condition:
//For the first 50 units Rs. 0.50/unit
//For the next 100 units Rs. 0.75/unit
//For the next 100 units Rs. 1.20/unit
//For units above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill.
//For example,
//Input:
//Enter electricity units: 435
//
//Output: 
//Electricity Bill = Rs. 597.00


#include <stdio.h>

main() {
   
    float units;
    printf("Enter the number of electricity units: ");
    scanf("%f", &units);

    
    float bill = 0;
    if (units <= 50)
	 {
        bill = units * 0.50;
    } else if (units <= 150) 
	{
        bill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) 
	{
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else 
	{
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }
   
    float surcharge = bill * 0.20;
    float total_bill = bill + surcharge;

    printf("The total electricity bill is: Rs. %.2f\n", total_bill);


}

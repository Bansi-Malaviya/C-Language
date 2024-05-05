//Q.1 Write a Program to convert temperature from degrees Celsius to Fahrenheit.
//Use formula for °C to °F is: ° F = ( °C × 9/5 ) + 32
//For example,
//Input:
//The temperature in Celcius: 38
//
//Output: 
//The temperature in Fahrenheit: 100.4


#include<stdio.h>
main(){
	
	float celsius , fahrenheit;
	
	printf("The temperature in Celcius:");
	scanf("%f",&celsius);
	
    fahrenheit = (celsius * 9/5 ) + 32;
	
	printf("%f",fahrenheit);
}

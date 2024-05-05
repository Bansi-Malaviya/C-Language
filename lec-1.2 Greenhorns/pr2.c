//Q.2 Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.
//For example,
//Input:
//Base Salary: 100
//HRA=10
//DA=5
//TA=8
//
//Output: 
//Rs. 123
//
//Ans = 123 RS.(compulsory user input)
//HRA => (House Rent Allowance) = hra = 10*100 / sal;
//DA => (Dearness Allowance) = da = 5*100 / sal;
//TA => (Travelling Allowance) =  ta = 8*100 / sal;
//Formula => gross = sal + da + hra + ta;


#include<stdio.h>
main(){
	
	int  Salary , HRA , DA , TA , grows;
	
	printf("Enter Your Salary:");
	scanf("%d",&Salary);
	
	HRA=(10*100)/Salary;
	DA =(5*100)/Salary;
	TA =(8*100)/Salary;
	
	grows= Salary + HRA + DA + TA;
	
	printf("Your grows salary is %d",grows);
	
}

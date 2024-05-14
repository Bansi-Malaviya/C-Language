//Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
//- emp_id
//- emp_name
//- emp_age
//- emp_role
//- emp_city
//- emp_experience
//- emp_company_name


#include<stdio.h>
#include<string.h>

struct Employee{
	
	int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
    
};
void main (){
	
	int n;
	printf("Enter Number Of Employee: ");
	scanf("%d",&n);
	
	struct Employee E1[n];
	
	int i;
	
	for(i = 0; i < n; i++){
	   printf("Employee ID: ");
        scanf("%d", &E1[i].emp_id);
        
        fflush(stdin);
        printf("Employee Name: ");
        gets(E1[i].emp_name);
        
        printf("Employee Age: ");
        scanf("%d", &E1[i].emp_age);
        
        fflush(stdin);
        printf("Employee Role: ");
        gets(E1[i].emp_role);
        
        fflush(stdin);
        printf("Employee City: ");
        gets(E1[i].emp_city);
        
        printf("Employee Experience: ");
        scanf("%d", &E1[i].emp_experience);
        
        fflush(stdin);
        printf("Employee Company Name: ");
        gets(E1[i].emp_company_name);
	}
	
	printf("\n\n");
	printf("|Employee ID\t Employee Name\t Employee Age\t Employee Role\t Employee City\t Employee Experience\t Employee Company Name|");
	printf("|-----------\t -------------\t ------------\t -------------\t -------------\t -------------------\t ---------------------|");
	
	for(i = 0; i < n; i++){
		printf("|%d\t\t%s\t\t%d\t\t%s\t\t%s\t\t\%d\t\t%s|\n",E1[i].emp_id,E1[i].emp_name,E1[i].emp_age,E1[i].emp_role,E1[i].emp_city,E1[i].emp_experience,E1[i].emp_company_name);
	}
}

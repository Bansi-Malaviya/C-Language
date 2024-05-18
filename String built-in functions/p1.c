 //Q.1 Write a Program to check if a given password is strong 
 //or not by satisfying the below criteria:
//- Password must contain at least one letter, one digit & one special symbol.
//- Password must be at least 6 characters.For example,
//Input:
//Create your password: Admin@123
//
//Output:
//Your password is Strong.
//
//-----------------------------------------
//
//For example,
//Input:
//Create your password: hello#89
//
//Output:
//Your password is not Strong.
//



#include<stdio.h>

main(){
	int i,length,upr=0,lwr=0,num=0,spec=0;

	char pwd[10];
	printf("Create your password: ");
	gets(pwd);

	length=strlen(pwd);

	for(i=0;i<length;i++){
		if(pwd[i]<=65 && pwd[i]>=90)
			upr++;
		if(pwd[i]<=97 && pwd[i]>=122)
			lwr++;
		if(pwd[i]<=48 && pwd[i]>=57)
			num++;
		if(pwd[i]=='@' || pwd[i]=='#' || pwd[i]=='_' || pwd[i]=='-')
			spec++;
	}

	if(upr>0 && lwr>0 && num>0 && spec>0){
		printf("Your password is  not Strong.");
	}
	else{
		printf("Your password is strong..");
	}
}


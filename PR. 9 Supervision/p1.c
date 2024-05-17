//Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.
//For example, 
//Output:
//Even numbers from even_file.txt:
//50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70
//
//Odd numbers from odd_file.txt:
//51, 53, 55, 57, 59, 61, 63, 65, 67, 69


#include <stdio.h>
void main() {
	
    FILE *even_file, *odd_file;
    int i;

    even_file = fopen("even_numbers.txt", "w");
    
    if (even_file == NULL)
	 {
	    printf("create even");
	}
    odd_file = fopen("odd_numbers.txt", "w");
    
    if (odd_file == NULL)
	 {
    	printf("create odd");
    	
        fclose(even_file);
    }
        
    for (i = 50; i <= 70; i++)
	 {
        if (i % 2 == 0)
		{
            fprintf(even_file, "%d ", i);
        }
		 else
		  {
            fprintf(odd_file, "%d ", i);
        }
    }
    fclose(even_file);
    fclose(odd_file);

    printf("file is successfull...");

}

//Q.2 Write a Program to create a new file and write all numbers that are divisible by both 3 and 5 between 1 and 50 into that file.

#include <stdio.h>
int main() {
    FILE *file;
    char filename[] = "divisible_numbers.txt";

    file = fopen(filename, "w");

    if (file == NULL) {
        printf("Error: Unable to create file.\n");
        return 1;
    }
    int i;
    for (i = 1; i <= 50; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            fprintf(file, "%d\n", i);
        }
    }

    fclose(file);

    printf("Numbers divisible by both 3 and 5 between 1 and 50 have been written to %s.\n", filename);

    return 0;
}


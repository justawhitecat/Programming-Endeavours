#include <stdio.h>

int main(){

    int x; // Declares an integer variable
    x = 1; // Initializes a variable

    int y = 2; // Declares and initializes a variable.

    int num = 1; // Integer
    float pi = 3.14159265; // Floating point number
    char language = 'C'; // Single character. NOTE: You need a single apostrophe for one character.
    char name[] = "variables.c"; // Array of characters. NOTE: You need quotation marks (double apostrophe) for multiple characters.

    printf("The first positive number is %d\n", num); // %d is used for decimals (numbers)
    printf("PI is %f\n\n", pi); // %f is used for floats

    printf("The name of this file is %s\n", name); // %s is used for strings (characters, not a single character)
    printf("This code is written in %c\n\n", language); // %c is used for single characters

    printf("__________________\n|1\t2\t3|\n|4\t5\t6|\n|7\t8\t9|\n|\t0\t |\n|________________|\n"); // Displays a number pad

    return 0;
}
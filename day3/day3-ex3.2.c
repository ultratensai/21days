/* Demonstrates variables and constants */
#include <stdio.h>
/* Define a constant to convert from pounds to grams */
#define GRAMS_PER_POUND 454
/* Define a constant for the start of the next century */
const int NEXT_CENTURY = 2000;
/* Declare the needed variables */
int weight_in_grams, weight_in_pounds;
int year_of_birth, age_in_2000;

int main() {
    /* input data from user */

    printf("Enter your weight in pounds: ");
    scanf("%d", &weight_in_pounds);
    printf("Enter your year of birth: ");
    scanf("%d", &year_of_birth); /* & is used to store */

    /* perform conversion */

    weight_in_grams = weight_in_pounds * GRAMS_PER_POUND;
    age_in_2000 = NEXT_CENTURY - year_of_birth;

    /* display results on the screen */

    printf("\nYour weight in grams = %d", weight_in_grams);
    printf("\nIn 2000 you will be %d years old", age_in_2000);
    return 0;
    }

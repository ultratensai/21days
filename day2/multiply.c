/* Program to calculate the product of two numbers. */

#include <stdio.h>
int a, b, c;
int product(int x, int y);
int main() {
    /* Input the first number */
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &a);

    /* Input the second number */
    printf("Enter another number between 1 and 100: ");
    scanf ("%d", &b);

    c = product(a, b);
    printf("\n%d times %d = %d", a, b, c);
    }

/* Function returns the product of its two arguments */
int product(int x, int y) {
    return (x * y);
    }



/*
 * C program to perform all arithmetic operations
 */

#include <stdio.h>

int main()
{
    int a,b;
    int sum, sub, mult, mod;
    float div;

    /*
     * Input two numbers from user
     */
    printf("Enter any two numbers: ");
    scanf("%d%d", &a, &b);

    /*
     * Perform all arithmetic operations
     */ 
    sum = a + b;
    sub = a - b;
    mult = a * b;
    div = (float)a / b;
    mod = a % b;

    /*
     * Print result of all arithmetic operations
     */
    printf("SUM = %d\n", sum);
    printf("DIFFERENCE = %d\n", sub);
    printf("PRODUCT = %d\n", mult);
    printf("QUOTIENT = %f\n", div);
    printf("MODULUS = %d", mod);

    return 0; 
}

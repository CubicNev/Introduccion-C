/**
 *  Advanced declaration of variables
 *  Author: Carlos Nevárez
 *  Date: 27/01/2024
 */

# include <stdio.h>

// Variable Declarations (Best Practices)
extern int a, b, c, e;

float f, g, h;

int main() {
    // variable definition
    int a, b, c, e;
    // Variable initialization
    // Max memory
    a = 0;
    b = 2147483647;
    c = a + b ;
    printf(" Value of sum is: %d \n", c);

    // Nevative memory overflow
    a = -10;
    b = -2147483647;
    c = a + b ;
    printf(" Value of sum is: %d \n", c);

    // Positive memory overflow
    e = 2147483647;
    c = e + b;
    printf(" This used to be a positive number, but there was an error: %d \n", c);

    // Negative overflow with float
    g = -1000000;
    f = -2147483647;
    h = g + f ;
    printf(" Value of sum is: %f \n", h);

    // Sum with float
    g = 1000.9999;
    f = 1.1111;
    h = g + f ;
    printf(" Value of sum is: %f \n", h);

    // Presition loss
    g = 1000.9999999999;
    f = 1.111111111111;
    h = g + f ;
    printf(" Value of sum is: %f \n", h);
    return 0;
}
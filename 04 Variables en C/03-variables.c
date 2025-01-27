/**
 *  Basic use of variables
 *  Author: Carlos Nevárez
 *  Date: 27/01/2024
 */

# include <stdio.h>

// Variable Declarations (Best Practices)
int a, b, c, e;

float f, g, h;

int main() {
    // Variable initialization
    a = 0;
    b = 2147483647;
    c = a + b ;

    printf(" Value of sum is: %d \n", c);

    /* Memory overflow */
    e = 2147483647;
    c = e + b;
    printf(" This used to be a positive number, but there was an error: %d \n", c);

    return 0;
}

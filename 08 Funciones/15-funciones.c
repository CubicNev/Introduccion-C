/**
 *  Using functions with the exaple of power of integers
 *  Author: Carlos Nevárez
 *  Date: 04/02/2024
 */

#include <stdio.h>

// Declaration
int power(int base, int n);

int main() {
    int i;
    for(i = 0; i < 10; i++)
        printf("The power of 2 raised to %d is %d\n", i, power(2,i));
    return 0;
}

int power(int base, int n) {
    int i, p;
    p = 1;
    for (i = 1; i <= n; i++)
        p *= base; // p = p * base

    return p;
}
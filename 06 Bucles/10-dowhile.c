/**
 *  Using do-while structure
 *  Author: Carlos Nevárez
 *  Date: 04/02/2024
 */

#include <stdio.h>

int n = 20;

int main() {

    do
    {
        printf(" n: %d\n", n);
        n = n - 1;
    } while (n > 10);

    printf(" Fin del bucle, n es menor a 10\n");
    return 0;
}
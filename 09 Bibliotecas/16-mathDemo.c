/**
 *  Using math library
 *  Author: Carlos Nevárez
 *  Date: 06/02/2024
 */

# include <stdio.h>
# include <math.h>

int x;
float seno, coseno;

int main() {
    printf(" Ingresa el valor de x: ");
    scanf("%d", &x);

    seno = sin(x);
    coseno = cos(x);

    printf(" El valor ingresado es: %d\n", x);
    printf(" El valor de sen(x) es: %f\n", seno);
    printf(" El valor de cos(x) es: %f\n", coseno);

    return 0;
}
/**
 *  Using if sentence
 *  Author: Carlos Nevárez
 *  Date: 29/01/2025
 */

# include <stdio.h>

int n = 11;

int main()
{
    if (n > 10 && n < 20)
        printf(" El número es mayor a 10 y menor a 20\n");
    else if(n == 10)
        printf(" El número es diez\n");
    else if(n > 20)
        printf(" El número es mayor a veinte\n");
    else if(n < 10 && n >= 0)
        printf(" El número esta en el renago de 0 a 9\n");
    else
        printf(" Error, el número es negativo\n");
    return 0;
}

/**
 *  Using constants
 *  Author: Carlos Nevárez
 *  Date: 27/01/2024
 */

# include <stdio.h>

# define PIZZACOST 1.5

const int COSTHOTDOG = 50;
// Al ser constantes puedes combinar letras y números
const int COSTTACO = 100l; // La l es un sufijo que indica que es long
const int COSTSODA = 10u; // La u es un sufijo que indica que es unsigned
const float TAX = 16.16;
const char NEWLINE = '\n';

int main()
{
    float costoPizzas;
    float numberOfSlices = 3;
    costoPizzas = PIZZACOST * numberOfSlices;

    printf("Total bill: %c %f", NEWLINE, costoPizzas);
    return 0;
}

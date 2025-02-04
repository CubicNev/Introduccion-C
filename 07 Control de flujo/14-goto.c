/**
 *  Using goto
 *  Author: Carlos Nevárez
 *  Date: 04/02/2024
 */

#include <stdio.h>


int main() {

    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < i; j++)
        {
            for (k = 0; k < j; k++)
            {
                if(k == 7)
                    goto errorHandler;
            }
        }
    }

    errorHandler: //codigo para manejo de error.

    return 0;
}
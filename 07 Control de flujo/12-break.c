/**
 *  Using break to interrupt a loop
 *  Author: Carlos Nevárez
 *  Date: 04/02/2024
 */

#include <stdio.h>


int main() {
    char string[4] = "Hola";
    int i = 0;
    while (1)
    {
        if (string[i] == '\0')
            break;

        i++;
    }

    printf("%d\n", i);

    return 0;
}
/**
 *  Using string library
 *  Author: Carlos Nevárez
 *  Date: 06/02/2024
 */

# include <stdio.h>
# include <string.h>

char string1[60];
char string2[60];

int main() {

    printf(" Escribe una frase: ");
    fgets(string1, 60, stdin); // Recibe string
    printf(" Escribe otra frase: ");
    fgets(string2, 60, stdin); // Recibe string

    if(strcmp(string1, string2) == 0) // Compara las cadenas, da 0 si son iguales
        printf(" Los strings son identicos\n");
    else {
        // Concatena
        strcat(string1, string2);
        printf(" Los strings son distintos, concatenadas son %s\n", string1);
    }

    // strrev(string1); // Pone el string en orden reverso (No en linux)
    // printf(" El string al reves es: %s\n", string1);

    return 0;
}

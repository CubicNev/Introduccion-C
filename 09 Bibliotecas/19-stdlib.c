/**
 *  Using stlib.h library to transform decimal to binary
 *  Author: Carlos Nevárez
 *  Date: 06/02/2024
 */

# include <stdio.h>
# include <stdlib.h>

int binaryNumber[12], n, i;

int main() {
    // Escribe en consola
    // system("clear");
    // system("color 9F"); // Windows
    printf(" Ingrese un valor decimal: ");
    scanf("%d", &n);

    printf("%d a binario es ", n);

    for(i = 0; n > 0; i++) {
        binaryNumber[i] = n%2;
        n /= 2;
    }

    for(i = i - 1; i >= 0; i--) printf("%d", binaryNumber[i]);

    printf("\n");

    return 0;
}

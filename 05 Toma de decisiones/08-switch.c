/**
 *  Using switch-case structure
 *  Author: Carlos Nevárez
 *  Date: 31/01/2025
 */

#include <stdio.h>

int opt1 = 0, opt2 = 0;

int main()
{
    printf(" Bienvenido! Elija un menú:\n");
    printf(" Opcion 0: Bebidas\n");
    printf(" Opcion 1: Comidas\n");
    printf(" Opcion 2: Postres\n");

    switch (opt1) {
    case 0:
        printf(" Eligio 0, verá menú de bebidas, elija una:\n");
        printf(" Opcion 0: Coca-cola zero\n");
        printf(" Opcion 1: Coca-cola\n");
        printf(" Opcion 2: Coca-cola light\n");
        switch (opt2) {
        case 0:
            printf(" Eligio una coca-cola zero :D\n");
            break;
        case 1:
            printf(" Eligio una coca-cola :D\n");
            break;
        case 2:
            printf(" Eligio una coca-cola light :D\n");
            break;
        default:
            printf(" Opcion invalida");
            break;
        }
        break;
    case 1:
        // Comidas
        printf(" Eligio 0, verá menú de comidas, elija una:\n");
        printf(" Opcion 0: Tacos\n");
        printf(" Opcion 1: Pizza\n");
        printf(" Opcion 2: Hamburguesas\n");
        switch (opt2) {
        case 0:
            printf(" Eligio tacos :D\n");
            break;
        case 1:
            printf(" Eligio pizzas :D\n");
            break;
        case 2:
            printf(" Eligio hamburguesas :D\n");
            break;
        default:
            printf(" Opcion invalida");
            break;
        }
        break;
    case 2:
        // Postres
        printf(" Eligio 0, verá menú de postres, elija uno:\n");
        printf(" Opcion 0: Helado\n");
        printf(" Opcion 1: Pastel\n");
        printf(" Opcion 2: Pan\n");
        switch (opt2) {
        case 0:
            printf(" Eligio helado :D\n");
            break;
        case 1:
            printf(" Eligio pastel :D\n");
            break;
        case 2:
            printf(" Eligio pan :D\n");
            break;
        default:
            printf(" Opcion invalida");
            break;
        }
        break;
    default:
        printf("Opcion invalida");
        break;
    }

    return 0;
}
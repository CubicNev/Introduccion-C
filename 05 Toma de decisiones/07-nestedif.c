/**
 *  Using nested if, generated menus according to user options
 *  Author: Carlos Nevárez
 *  Date: 29/01/2025
 */

# include <stdio.h>

int opt1 = 0, opt2 = 0;

int main(){
    printf(" Bienvenido! Elija un menú:\n");
    printf(" Opcion 0: Bebidas\n");
    printf(" Opcion 1: Comidas\n");
    printf(" Opcion 2: Postres\n");
    if(opt1 == 0) {
        // Bebidas
        printf(" Eligio 0, verá menú de bebidas, elija una:\n");
        printf(" Opcion 0: Coca-cola zero\n");
        printf(" Opcion 1: Coca-cola\n");
        printf(" Opcion 2: Coca-cola light\n");
        if (opt2 == 0)
            printf(" Eligio una coca-cola zero :D\n");
        else if (opt2 == 1)
            printf(" Eligio una coca-cola :D\n");
        else if (opt2 == 2)
            printf(" Eligio una coca-cola light :D\n");
        else
            printf(" Opcion invalida");
    } else if(opt1 == 1){
        // Comidas
        printf(" Eligio 0, verá menú de comidas, elija una:\n");
        printf(" Opcion 0: Tacos\n");
        printf(" Opcion 1: Pizza\n");
        printf(" Opcion 2: Hamburguesas\n");
        if (opt2 == 0)
            printf(" Eligio tacos :D\n");
        else if (opt2 == 1)
            printf(" Eligio pizzas :D\n");
        else if (opt2 == 2)
            printf(" Eligio hamburguesas :D\n");
        else
            printf(" Opcion invalida");
    } else if(opt1 == 2){
        // Postres
        printf(" Eligio 0, verá menú de postres, elija uno:\n");
        printf(" Opcion 0: Helado\n");
        printf(" Opcion 1: Pastel\n");
        printf(" Opcion 2: Pan\n");
        if (opt2 == 0)
            printf(" Eligio helado :D\n");
        else if (opt2 == 1)
            printf(" Eligio pastel :D\n");
        else if (opt2 == 2)
            printf(" Eligio pan :D\n");
        else
            printf(" Opcion invalida");
    } else
        printf("Opcion invalida");

    return 0;
}

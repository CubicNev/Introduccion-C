/**
 *  Using continue
 *  Author: Carlos Nevárez
 *  Date: 04/02/2024
 */

#include <stdio.h>


int main() {

    int i, n = 15;
    for (i = 0; i < n; i++) {
        if (i == 10) // Doesn't show 10
            continue;
        printf(" i: %d\n", i);
    }

    return 0;
}
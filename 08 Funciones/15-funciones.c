/**
 *  Using functions in all cases
 *  Author: Carlos Nevárez
 *  Date: 04/02/2024
 */

#include <stdio.h>

// Declaration
int power(int base, int n);
void sum();
void mod(int first, int second);
int rest();

int a = 5, b = 10;

int main() {
    int i;
    for(i = 0; i < 10; i++)
        printf("The power of 2 raised to %d is %d\n", i, power(2,i));

    sum();
    mod(90, 3);
    printf(" The rest of %d minus %d id %d\n", a, b, rest());

    return 0;
}

int power(int base, int n) {
    int i, p;
    p = 1;
    for (i = 1; i <= n; i++)
        p *= base; // p = p * base

    return p;
}

void sum() {
    int result = a + b;
    printf("The sum of %d and %d is %d\n", a, b, result);
}

void mod(int first, int second){
    int result = first % second;
    printf(" %d mod %d = %d\n", first, second, result);
}

int rest(){
    return a - b;
}

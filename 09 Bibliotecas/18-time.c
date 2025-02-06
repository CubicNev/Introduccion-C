/**
 *  Using time library to get current time and get execution time
 *  Author: Carlos Nevárez
 *  Date: 06/02/2024
 */

# include <stdio.h>
# include <time.h>

time_t seconds;
time_t begin, end;

int main() {
    long i;

    seconds = time(NULL);
    printf("El número de horas desde EPOCH (01/Enero/1970 00:00) es %ld\n", seconds/3600);

    begin = time(NULL);
    for (i = 0; i < 600000000; i++);
    end = time(NULL);

    printf("El tiempo que duró el for es %f\n", difftime(end, begin));

    return 0;
}

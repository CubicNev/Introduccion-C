/**
 *  Basic use of enums
 *  Author: Carlos Nevárez
 *  Date: 27/01/2024
 */

# include <stdio.h>

enum designElements {
    ITALICS = 1,
    BOLD = 2,
    STRIKE = 3
};

enum weekDays {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

// enum with instatiation
enum deck {
    club = 0,
    diamonds = 5,
    hearts = 10,
    swords = 15
} card;

enum year{Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};


int main() {
    enum weekDays today;
    today = Sunday;
    printf("Day %d \n", today+1);

    card = swords;
    printf("Card Power %d \n", card);
    printf("Size of var %li \n", sizeof(card));

    int i;
    for(i=Jan; i<=Dec; i++) {
        printf("%d ", i);
    }

    return 0;
}



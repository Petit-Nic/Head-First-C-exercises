#include <stdio.h>
#include <stdlib.h>
#include <string.h> /*Example as written in the text was busted for me. Had to use strcmp instead of == (using the fact that 
if the strings are equal it returns 0 (aka false), so negating that for the if condition to be satisfied), and use & to compare the 
address of the card_name[0] with the address of "K". C is a f***ing bitch to tame.*/

/*Nevermind, the issue was using double quotes on the values instead of single quotes. But yeah, C is a f***ing bitch to tame.*/

int main() {
    char card_name[3];
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    int val = 0;
    if (!strcmp(&card_name[0], "K")) {
        val = 10;
    } else if (!strcmp(&card_name[0], "Q")) {
        val = 10;
    } else if (!strcmp(&card_name[0], "J")) {
        val = 10;
    } else if (!strcmp(&card_name[0], "A")) {
        val = 11;
    } else {
        val = atoi(card_name);
    }

    if ((val >= 3) && (val <= 6)) 
        puts("Count has gone up.\n");
    else if (val == 10) 
        puts("Count has gone down.\n");

    return 0;
}
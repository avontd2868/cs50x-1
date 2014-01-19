#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {
    float amount = 0;
    int coins = 0;

    while( amount <= 0 ) {
        printf("O hai!  How much change is owed?\n");
        amount = GetFloat();
    }
    
    int amount_int = (int) round (amount * 100); 

    while( amount_int >= 25 ) {
        amount_int = amount_int - 25;
        coins++;
    }

    while( amount_int >= 10 ) {
        amount_int = amount_int - 10;
        coins++;
    }

    while( amount_int >= 5 ) {
        amount_int = amount_int - 5;
        coins++;
    }

    while( amount_int >= 1 ) {
        amount_int = amount_int - 1;
        coins++;
    }

    printf("%d\n", coins);

    return 0;
}

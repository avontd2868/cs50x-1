#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num_blanks, num_xs, base, i;
    int height = 0;
    
    while ( height <= 0 || height > 23 ){
        printf("Height: ");
        height = GetInt();
        if ( height == 0 ) {
            return 0;
        }
    }

    num_blanks = height - 1;
    num_xs = 2;
    base = height + 1;

    // print pyramid down to (and excluding) the base
    while(num_blanks != 0) {
        for( i = num_blanks; i > 0; i-- ) {
            printf(" ");
        }
        for ( i = num_xs; i > 0; i-- ) {
            printf("#");
        }
        printf("\n");

        num_blanks--;
        num_xs++;
    }

    // print base
    for ( i = base; i > 0; i-- ){
        printf("#");
    }

    printf("\n");

    return 0;
}


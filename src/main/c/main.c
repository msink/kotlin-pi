#include <stdio.h>
#include <stdlib.h>

#include "pi.h"

int main(int argc, char *argv[])
{
    int nmax, n;

    if (argc < 2 || (nmax = atoi(argv[1])) <= 0) {
        printf("This program computes n decimal digits of \\pi\n"
               "usage: pi n\n"
               "where n is the number of digits you want\n");
        return 1;
    }

    printf("3.");
    for (n = 1; n <= nmax; n += 9)
            printf("%09d", pi_nth_digit(n));
    printf("\n");

    return 0;
}

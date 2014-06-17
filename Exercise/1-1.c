// Exercise 1-1. Comment on the choice of names and values in teh follow code. 
#include<stdio.h>

#define TRUE 0  // TRUE is defined in opposition to C convention.
#define FALSE 1 // FALSE is defined in opposition to C convention.

void main(void) {
    char ch;
    int not_eof;

    if((ch = getchar()) == EOF)
        not_eof = FALSE;  // Employing a double negative is confusing, the usage can't be implied.

    printf("not_eof = %d\n", not_eof);
} 

#include<stdio.h>

#define BUFSIZE 20

void main(void) {

    int length = 21;

    // if length is greater then BUFSIZE set it to size of BUFSIZE
    if(length > BUFSIZE)
        length = BUFSIZE;

    printf("BUFSIZE %d, length %d\n", BUFSIZE, length);
}

#include<stdio.h>

void main(void) {

int one = 1;
int two = 2;
int six = 6;
int bit;

// Bitwise and, if there are any bits in common between one and six, set 'int bit' to 1. ( It doesn't.)
//if (one & six)
//        bit = 1;
//    else
//        bit = 0;

// Bitwise and, if there are any bits in common between one and six, set 'int bit' to 1. ( It doesn't.)
//if (one & six)
bit = (one & six) ? 1 : 0;
      
        
printf("one %d, bit %d\n", one, bit);

}



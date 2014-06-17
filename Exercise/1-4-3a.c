#include<stdio.h>

void main(void) {

    int flag = 1;

    // Reverse the flag.
 //   flag = flag ? 0 : 1;
    flag = ! flag;
 
    printf("flag after assignment %d\n", flag);
    
}



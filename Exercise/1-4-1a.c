#include<stdio.h>

int main(void) {

    char c = 'Y';

    // if c is either y or Y do not return.
    char c_lower = tolower(c);
    
    if(c_lower != 'y')
        return;

    return 1;
}

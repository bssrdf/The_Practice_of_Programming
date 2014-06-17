// Exercise 1-2. Improve this function

#include<stdio.h>

#define TRUE 1
#define FALSE 0



int main(void) {
int returned_larger = smaller("123","12"); 
int returned_smaller = smaller("1","12"); 

printf("larger %d, smaller %d\n", returned_larger, returned_smaller);

returned_larger  = is_smaller("123","12"); 
returned_smaller = is_smaller("1","12"); 

printf("larger %d, smaller %d\n", returned_larger, returned_smaller);


return 0;

}

// Original
int smaller(char *s, char *t) {
    if(strcmp(s, t) < 1)
        return 1;
    else
        return 0;
}

// Improvement 
int is_smaller(char *s, char *t) {
    if(strcmp(s,t) < 1) // If string 's' is smaller then string 't'. Return TRUE. 
        return TRUE;

    return FALSE;
}


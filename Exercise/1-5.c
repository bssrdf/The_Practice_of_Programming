#include<stdio.h>
// Come back to this

void main(void) {
    
    char val[10];
    char ch[10];
    
    
    insert(read(&val), read(&ch));
}

// What is wrong with this excerpt?
int read(char *ip) {
    scanf("%d", *ip);
    return *ip;
}

int insert(char *sub_val,char *sub_ch) {
    printf("%d, %d", sub_val, sub_ch);
    return 1;
}


//insert(&graph[vert], read(&val), read(&ch));
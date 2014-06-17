#include<stdio.h>

void main(void) {

  char *line = "\"";

  int quote = 0;
  if(*line == '"')
    quote = 1;
  
   if(quote)
    printf("The pointer *line contains a \"\n");
    
}



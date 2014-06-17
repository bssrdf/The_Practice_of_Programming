//Exercise 1-4. Improve each of these fragments

1. if( !(c == 'y' || c == 'Y') )
    return;

// if c is either y or Y do not return.
char c_lower = tolower(c);
    
if(c_lower != 'y')
    return;

2. length = (length < BUFSIZE) ? length : BUFSIZE;
// if length is greater then BUFSIZE set it to size of BUFSIZE
if(length > BUFSIZE)
    length = BUFSIZE;

3. flag = flag ? 0 : 1;
// Reverse the flag.
flag = ! flag;
 
4. quote = (*line == '"') ? 1 : 0;
// If the pointer *line contains a quote, set the quote variable.
int quote = 0;
if(*line == '"')
  quote = 1;
  
5. if (val & 1)
        bit = 1;
    else
        bit = 0;
// Bitwise and, if there are any bits in common between one and six, set 'int bit' to 1. ( It doesn't.)
bit = (one & six) ? 1 : 0;
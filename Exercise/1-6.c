//Exercise 1-6. List all the different outputs this could produce with various orders of evaluation;
#include<stdio.h>

int main() {
    int n = 1;
    printf("%d %d\n", n++, n++);

    return 0;
}

// gcc (GCC) 4.8.3
//   2 1

// gcc (Debian 4.7.2-5) 4.7.2
//   2 1

// Debian clang version 3.0-6.2 (tags/RELEASE_30/final) (based on LLVM 3.0)
// Target: x86_64-pc-linux-gnu
// Thread model: posix
//   1 2

#include <stdio.h>
//Conditional inclusion

#define BOOK

int main(){

    // if defined NUMBER
    #ifdef NUMBER
    printf("Number defined as : %d\n", NUMBER);
    #elif defined BOOK
    printf("book has been defined\n");
    #endif

    printf("Go ahead and print anything\n");

    return 0;
}
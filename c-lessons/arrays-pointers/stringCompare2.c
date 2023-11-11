#include "stdio.h"
#include "string.h" 

char *firstString = "Hello world";
char *secondString = "Get started";

int main(){

    printf("%s\n", firstString);
    strcpy(firstString, secondString);
    printf("%s\n", firstString);
    return 0;
}



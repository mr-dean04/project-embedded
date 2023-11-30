#include <stdio.h>

void stringCopy(char *string1, char *string2);

char firstString[] = "Hello";
char secondString[] = "World-Studio";

int main(){

    stringCopy(firstString, secondString);
    printf("%s\n", firstString);
    return 0;
}

void stringCopy(char *string1, char *string2){ 
    for(int i = 0; (string1[i] = string2[i]) != '\0'; i++){} 
}
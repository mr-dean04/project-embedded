#include <stdio.h>


//char myCharacter[] = {'H', 'e', 'l', 'l', 'o',  ' ', 'w', 'o', \0'};
char myCharacter[] = "Hello World";
int firstNumber = 5;

int charCount (char *countWord);

int main(){

    printf("The length is %d\n", charCount(&myCharacter[0]));           
    return 0;
}

int charCount (char *countWord){
    
    int i, j = 0;
    for(; *countWord != '\0'; countWord++){
        j++;
    }

    return j;
}
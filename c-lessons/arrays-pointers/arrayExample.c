#include <stdio.h>

// aarray 
//int number[] = {3, 4, 5, 2, 1};

//String  is a group of character.


//char myCharacter[] = {'H', 'e', 'l', 'l', 'o', '\0'};
char myCharacter[] = "Hello";
int firstNumber = 5;


int main(){
    for(int i = 0; myCharacter[i]!= '\0'; i++){
        printf("%c", myCharacter[i]);
    }       
    return 0;
}

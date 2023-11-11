#include <stdio.h>
//1. Define a function with a string parameter.
//2. Loop through and count the character in the string
//3. check if any of the character is a space
//4. Return the length of the string


char word[] = "Hello world Welcome  Go go"; 
int stringLength(char *string);

int main(){
    printf("the length of the string is %d\n", stringLength(word));
    return 0;
}

int stringLength(char *string){
    int n= 0, i;
    for (i = 0; *string != '\0'; string++){       
       if (*string == ' ') continue;
       n++; 
    }
    return n;
}
#include <stdio.h>
#include <stdbool.h>

//1. Define a function thta takes a both string strings as an agrument
//2. Loop through and compare the characters with the second string

char stringOne[] = "doing weell dsds";
char stringTwo[] = "doing weell";
 
bool stringCmp(char *string1, char *string2);

int main(){
                                          // 0x1      
    (stringCmp(stringOne, stringTwo) == true) ? printf("True"): printf("False");
    // express1 ? expression 2 : expression 3; 
    return 0;
}

bool stringCmp(char *string1, char *string2){
    
    for (int i = 0; *string1 == *string2; string1++, string2++)
    {   
        if (*string1 == '\0') return true;    
    }
    return false;
    
}
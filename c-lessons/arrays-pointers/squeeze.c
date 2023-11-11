#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char firstString[] = "Hello World";
char characterToRemove = 'l';
void squeeze (char *string1, char c);

int main(){
    squeeze(firstString, characterToRemove);
    printf("%s\n", firstString);
    return 0;
}

void squeeze (char *string1, char c)
{
    char *source = string1;
    char *destination = string1;   
    for (; *source != '\0'; source++){
            if (*source != c){
                *destination = *source;
                destination++; 
            }
    }
    *destination = '\0';
}

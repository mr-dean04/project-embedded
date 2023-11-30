#include <stdio.h>
#include <string.h>

int main() {
 
    char userInput[50];

    printf("Enter a string: ");

    
    //string is a bunch of character

    int index = 0;
    char c;
    while ((c = getchar()) != '\n' && c != EOF && index < sizeof(userInput) - 1) {
        userInput[index++] = c;
    }

    userInput[index] = '\0';

    if (strcmp(userInput, "Hello world") == 0) {
        printf("Your input is: Hello world\n");
    } else {
        printf("Your input is not: Hello world\n");
    }

    return 0;
}
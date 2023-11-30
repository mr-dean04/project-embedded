#include <stdio.h>

int maxNameLength = 50;
int maxCountryLength = 50;

int main() {
    char userName[maxNameLength];
    char userCountry[maxCountryLength];
    int userAge;


    printf("Enter your name: ");
    int index = 0;
    char c;


    while ((c = getchar()) != '\n' && c != EOF && index < maxNameLength - 1) {
        userName[index++] = c;
    }
    userName[index] = '\0'; 


    printf("Enter your age: ");
    scanf("%d", &userAge);
    while (getchar() != '\n');

  
    printf("Enter your country: ");
    index = 0;

    while ((c = getchar()) != '\n' && c != EOF && index < maxCountryLength - 1) {
        userCountry[index++] = c;
    }
    userCountry[index] = '\0';

    printf("%s is %d years old. He is from %s\n", userName, userAge, userCountry);

    return 0;
}
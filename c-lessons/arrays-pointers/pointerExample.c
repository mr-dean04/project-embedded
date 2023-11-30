#include <stdio.h>
int number = 4;

int *address = &number;

int main(){

    printf("%d\n", *address);

    *address = 2;
    printf("%d\n", *address);



    return 0;
}
#include <stdio.h>
#include <stdlib.h>


int main(){

    //int *ptr = (int*)malloc(10 * sizeof(int));
    //memset(ptr, 0, 10 * sizeof(int));

    int *ptr = (int*)calloc(10, sizeof(char));

    free(ptr);

    return 0;
}
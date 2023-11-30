#include <stdio.h>
#include <string.h>

int main() {
    int myArray[5]= {4, 5, 6, 8, 10};

    //printf("The size of array: %d\n", sizeof(myArray));

    
    memset(myArray, 0, 4 * sizeof(int));
    for (int i = 0; i < 5; ++i) {
        printf("%d ", myArray[i]);
    }  


    return 0;
}
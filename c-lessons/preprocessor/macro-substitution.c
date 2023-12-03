//preprocessor directive : macro-sub and nditioconal inclus

#include <stdio.h>
#include <string.h>

#define maxNumber 5  // int max = 5
#define anyWord "This is a statement"

#define square(x) x*x

#define max(a, b) (a > b)? (a) : (b)




int main(){

    printf("The max is %d\n", maxNumber);

    printf("%s\n", anyWord);

    int squareNumber = square(5);  // 5 *5
    printf("The square number : %d\n", squareNumber);

    int maximumNumber = max(4 , 8);
    printf ("The maximum number = %d\n", maximumNumber);

    return 0;
}



#include <stdio.h>

#define MAX(A, B) (A >= B)? (A) : (B)
#define SQRT(X) X*X

#define GREETING "Hello world"

#define dprint(expr) printf("%s\n", expr)

int main(){

    //float number = MAX(3.55, 4.1);
    //printf("The number is %.2f\n", number);
    int i = 5;
    int j = 12;

    //int secondNumber = MAX(i++, j++);
    //printf("The second number is %d\n", secondNumber);

    int thirdNumber = 4;
    int total = SQRT(thirdNumber);
    printf("The total is %d\n", total);


    printf("%s\n", GREETING);

    #undef GREETING

    // printf("%s\n", GREETING);

    // dprint("great");

    
    

    return 0;
}
#include <stdio.h>

typedef struct Point {
    int x;
    int y;
}ptr;

ptr firstPoint;
ptr *pointAddress = &firstPoint;

typedef struct Square {
    int *pointOne;
    int pointTwo;
}sqt;
sqt squareOne;
sqt squareTwo;
int number;

int main(){
    // (*(pointAddress)).x = 20; //this is rarely seen
    pointAddress->x = 20;
    pointAddress->y = 50;
    printf("First Point : %d\t%d\n", firstPoint.x, firstPoint.y);
    number = 3;
    squareOne.pointOne = &number;
    squareOne.pointTwo = 12;

    printf("Point One : %d\n", number);

    *(squareOne.pointOne) = 10;
    printf("Point One : %d\n", number);

    sqt *addressSquareOne = &squareOne;
    addressSquareOne->pointOne = &number;
    *(addressSquareOne->pointOne) = 20;

    return 0;
}
/*
By using structures, create a rectangle with two points
1. Add (x of point 1 and 2, y of point 1 and point 2) and return in a new point
2. Check if a points intersect the rectangle.
*/

#include <stdio.h>

typedef struct point
{
    int x;
    int y;
}ptr;

typedef struct rectangle
{
    ptr p1;
    ptr p2
}rect;


int main(){
    rect firstRectangle;
    firstRectangle.p1 = createPoint(2, 3);
    firstRectangle.p2 = createPoint(6, 2);

    //Add the x of point 1 and 2, y of point 1 and 2
    ptr resultOfSummation = addPoint (firstRectangle);
    printf("Summation, x: %d\t y:%d\n", resultOfSummation.x , resultOfSummation.y);

    //Check if the new point are with the rectangle
    checkIntersection(createPoint(4, 5), firstRectangle) == 1 ? printf("True\n"): printf("False\n");
    return 0;
}

ptr createPoint (int x, int y){
    ptr pointCreated;
    pointCreated.x = x;
    pointCreated.y = y;
    return pointCreated;
}

ptr addPoint (rect x){
    ptr resultAddPoint = {
        .x = x.p1.x + x.p2.x,
        .y = x.p1.y + x.p2.y
    };
    return resultAddPoint;
}

int checkIntersection (ptr x, rect y){
    return x.x >= y.p1.x && x.x <= y.p2.x && x.y >= y.p1.y && x.y <=y.p2.y;
}
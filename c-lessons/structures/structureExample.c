#include <stdio.h>

typedef int book;
book number;  // int number;


struct employee{
    char *name;
    int age;
    float salary;
    long employeeID;
}mike;

typedef struct bookDetails{
    char *bookName;
    float bookPrice;
    long bookID;
}book;

book firstBook;  //struct bookDetails firstBook

typedef struct pointDefinition{
    int x;
    int y;
}point;

typedef struct rectDefinition {
    point point1; 
    point point2;
}rect;


int main(){    
    
    firstBook.bookName = "Snow White";
    
    rect firstRect; 
    
    /*
    firstRect.point1.x = 4;
    firstRect.point1.y = 5;
    firstRect.point2.x = 4;
    firstRect.point2.y = 10;    
    */
    firstRect.point1 = createPoint(4, 7);
    firstRect.point2 = createPoint(7, 10);

    int book = createBook (4);


    return 0;
}

point createPoint( int a, int b) {
    point pt = {
        .x = a,
        .y = b
    };
    return pt;
}

int createBook (int number){
    return number;
}

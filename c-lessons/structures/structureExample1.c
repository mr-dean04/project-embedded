#include <stdio.h>

#define EXAMPLE_1

//Declaration of structures
#ifdef EXAMPLE_1
struct point {
    int x;   //member
    int y;   //member
};

struct point pt;   // pt is a variable of type struct point

#elif defined EXAMPLE_2
struct point {
    int x;
    int y;
}pt;

#elif defined EXAMPLE_3
struct {
    char *name;
    int age;
    float salary;
    long employeeID;
} employee;

struct employee mike;

#elif defined EXAMPLE_4

typedef struct point {
    float y;
    float z;
}pt;

#elif defined EXAMPLE_5
//Double definition of a structure


#endif

int main(){

    #if defined(EXAMPLE_1) || defined(EXAMPLE_2)
    pt.x = 10;
    pt.y = 12;
    printf("The x value is: %d \nThe y value is %d\n", pt.x, pt.y);

    #elif defined EXAMPLE_3
    mike.name = "Michael Daniels";
    mike.age = 26;
    mike.salary = 5000;
    mike.employeeID = 4521984L;
    printf("Employee Name is: %s \nEmployee age %d\nEmployee ID %ld \n", mike.name, mike.age, mike.employeeID);

    #elif defined EXAMPLE_4 

    pt point1 = {
        .y = 9.342,
        .z = 4.413
    };

    #elif defined EXAMPLE_5


    #endif
    return 0;
}
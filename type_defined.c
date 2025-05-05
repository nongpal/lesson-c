#include <stdio.h>

struct animal {
    char *name;
    int leg_count, speed;
};

typedef struct animal animal2; // the 'struct animal' is original name
                               // and 'animal2' is new name


typedef struct {  // This is seems like 'struct animal' and its
    char *brand;  // alias, but this new name is "car"
    int speed, years;
} car;


typedef struct {
    int x, y;
} point;

point p = {.x=20, .y=40};

typedef int *intptr;

typedef int number; // Make "number" as alias for "int"

int main() {
    number x = 10; // Type "number" is the same as type "int"
    intptr y = %x;

    printf("%d", x);
}

#include <stdio.h>

int main() {
    int z = 10;
    int *x = &z;
    
    printf("%d", &x);

    int* y = &z;

    printf("%d", &y);
}

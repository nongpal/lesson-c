#include <stdio.h>

int main() {
    int a[5] = {11, 22, 33, 44 ,55};
    int *p = a;

    printf("Array a: \n");
    for (int i = 0; i < 5; i++){
        printf("%d\n", a[i]);   // array a
    }
    printf("\n");

    printf("Array p: \n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", p[i]);   // array p
    printf("\n");

    printf("Pointer a: \n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(a + i));  // pointer a
    printf("\n");

    printf("Pointer p: \n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(p + i));   // pointer p
}

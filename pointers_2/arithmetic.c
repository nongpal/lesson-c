#include <stdio.h>

int main() {
    int a[] = {11, 22, 33, 44, 55, 66, 999};

    int *p = &a[0];

    // for (int i = 0; i < 5; i++) {
    //    printf("%d\n", *(p+i));
    // }

    while (*p != 999) {
        printf("%d\n", *p);
        p++;
    }
}

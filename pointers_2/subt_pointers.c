#include <stdio.h>

int strlength(char *s) {
    char *p = s;

    while (*p != '\0') {
        p++;
    }

    printf("pointer p = %p\n", *p);
    return p - s; 
}

int main() {
    char text[] = "Nongpal";
    int result = strlength(&text);

    printf("%d\n", result); // aku nda tahu lagi wkwkwkkkwkwkw
}

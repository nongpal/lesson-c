#include <stdio.h>
#include <string.h>

void *memorycopy(void *destination, void *source, int n_bytes) {
    
    // convert void*s to char*s
    char *s = source, *d = destination;

    // dereference and copy them
    while (n_bytes--) {
        *d++ = *s++;  // like s transfer to d
    }

    return destination;
}

int main() {
    char s[] = "Finola!";
    char t[100];

    memorycopy(t, s, 7);  // Copy 7 bytes of s, that's include '\0'
    
    printf("%s\n", t);
}

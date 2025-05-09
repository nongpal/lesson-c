#include <stdio.h>
#include <string.h>

int main(void){
    char name[] = "Finola";
    char tmp_name[100];

    memcpy(tmp_name, name, 7);  // copy 7 bytes of name, and include its '\0'

    printf("%s\n", tmp_name);

    int a[] = {10, 20, 30};
    int b[3];

    memcpy(b, a, 3 * sizeof(int)); // copy 3 ints of data
    printf("%d\n", b[2]);
}

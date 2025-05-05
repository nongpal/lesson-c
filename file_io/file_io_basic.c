#include <stdio.h>

int main(){
    FILE *fp;
    char buffer[10];

    fp = fopen("hello.txt", "r");

    if (fp != NULL) {
        while (fgets(buffer, sizeof(buffer), fp) != NULL) {
            printf("%s", buffer);
        }
        fclose(fp);
    }

    return 0;
}

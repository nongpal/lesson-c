#include <stdio.h>

int main(void) {
    FILE *fp;
    int x = 32;

    fp = stdout;

    fputs("Hello, wolrd!\n", fp);
    fprintf(fp, "x = %d\n", x);
    fputc('N', fp);

    fclose(fp);
}

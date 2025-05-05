#include <stdio.h>

int main() {
    int mass;
    float length;
    char name[1024];
    FILE *fp;

    fp = fopen("whale.txt", "r");

    while (fscanf(fp, "%s %f %d", name, &length, &mass) != EOF) {
        printf("%s whale, %d tonnes, %.1f meters\n", name, mass, length);
    }
    fclose(fp);
}

#include <stdio.h>

int main() {
  char string[100];
  FILE *fp = fopen("myfile.txt", "r");

  if (!fp) {
    printf("Error opening the file. Exiting...\n");
    return 1;
  }
  while (fgets(string, 100, fp) != NULL) {
    printf("%s", string);
  }

  fclose(fp);
}

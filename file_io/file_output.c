#include <stdio.h>

int main() {
  FILE *fp = fopen("myfile.txt", "w");
  fprintf(fp, "%s", "i love finola");
  fclose(fp);
}

#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p = malloc(sizeof(p));

  if(p)
    printf("%zu bytes\n", sizeof *p);

  // re-allocation
  int *newmem = realloc(p, 10 * sizeof(p));

  if (newmem) {
    printf("%zu bytes\n", 10 * sizeof *newmem);
    free(newmem);
  } else { free(newmem); }
}

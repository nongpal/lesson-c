#include <stdio.h>
#include <stdlib.h>
#define N_ELEMENTS 1

int main() {
  int *p = calloc(N_ELEMENTS, sizeof *p);
  if (p) {
    printf("The initial value is %d\n", *p);
  }
  free(p);
}

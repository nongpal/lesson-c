#include <stdio.h>
#include <stdlib.h>
#define N_ELEMENTS 3

int main() {
  /*
  int *p = malloc(sizeof *p);  // allocate memory for a single integer
  if (p) {
    *p = 123;
    printf("The value is %d\n", *p);
  }
  free(p);
  */

  int *p = malloc(N_ELEMENTS * sizeof *p);  // allocate memory for N_ELEMENTS of integers
  int initial = 2;
  if (p) {
    
    for (size_t i = 0; i < N_ELEMENTS; i++, initial++){
      p[i] = initial;
    }

    printf("Allocated an array of %d integers\n", N_ELEMENTS);

    for (size_t i = 0; i < N_ELEMENTS; ++i){
      printf("Index: %zu -> value: %d\n", i, p[i]);
    }
  }
  free(p);
}

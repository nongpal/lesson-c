#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  printf("1. memset section: \n");
  int *p = malloc(5 * sizeof(int));
  if (p) {
    memset(p, 0, 5 * sizeof(int));
    for (size_t i = 0; i < 5; i++) {
      printf("%d ", p[i]);
    }
  }
  free(p);

  printf("\n\n2. memcpy section: \n");
  char src[] = "Hello, World!";
  char dest[10];

  memcpy(dest, src, sizeof dest);

  printf("source: %s\n", src);
  printf("dest: \n");
  for (size_t i = 0; i < sizeof dest; i++) {
    putchar(dest[i]);
  }

  int arrays[] = {10, 20, 30, 40, 50};
  int *p_2 = malloc(5 * sizeof(int));
  memcpy(p_2, arrays, 5 * sizeof(int));
  printf("\n");
  for (size_t i = 0; i<5; i++) {
    printf("%d ", p_2[i]);
  }
  free(p_2);
  
  printf("\n\n3. memcmp section: \n");
  int arrays_2[] = {10, 20, 30, 40, 50};
  int result = memcmp(arrays, arrays_2, 5 * sizeof(int));
  printf("%s", result? "do not match": "match"); 

  printf("\n\n4. memchr section: \n");
  char gf[] = "Finola";
  char *ptr_found = memchr(gf, 'F', strlen(gf));
  printf("%s\n", ptr_found? "Found": "Not found :cry:");
}

#include <stdio.h>

int main() {
  const char c = 'a';
  const int x = 123;
  const double d = 456.789;
  printf("%c, %d, %f\n", c, x, d);

  const int *p = &x;

  printf("Pointer value: %p\n", (void *)p);
}

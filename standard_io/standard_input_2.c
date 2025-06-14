#include <stdio.h>

int main() {
  char buffer[50] = "H 123 234.4444";
  char c;
  int x;
  double d;
  sscanf(buffer, "%c %d %lf", &c, &x, &d);
  printf("%c, %d, %lf\n", c, x, d);
}

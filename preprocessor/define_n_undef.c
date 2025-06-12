#include <stdio.h>
#define MAX 12

int main() {
  int x = MAX;
  printf("%d\n", x);

#undef MAX
#define MAX 45
  printf("%d", MAX);
#undef MAX
}

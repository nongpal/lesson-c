#include <stdlib.h>
#include <stdio.h>

typedef struct {
  char c;
  int x;
  double d;
} Muhehehehe;

int main() {
  Muhehehehe *p = malloc(sizeof(Muhehehehe));
  if (p) {
    p->c = 'N';
    p->x = 20;
    p->d = 234.222331;

    printf("%c, %d, %f\n", p->c, p->x, p->d);
  }
  free(p);
}

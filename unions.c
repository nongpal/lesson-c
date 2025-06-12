#include <stdio.h>

union MyUnion {
  char c;
  int x;
  double b;
};

int main(){
  union MyUnion u;
  u.c = 'N';
  printf("%c\n", u.c);

  u.x = 123;
  ("%d\n", u.x);

  u.b = 0.33442;
  printf("%f\n", u.b);
}

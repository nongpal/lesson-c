#include <stdio.h>

int main() {
  printf("Masukan inisial namamu: \t");
  char name[10];
  scanf("%s", name);
  printf("Hallo, %s!\n", name);


  printf("Masukan 2 angka: \t");
  int x;
  double y;
  scanf("%x, %lf", &x, &y);

  printf("%lf\n", (x * y));
}

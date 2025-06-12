#include <stdio.h>

void Hehe() {
  printf("hehe\n");
}

void Muhehehe(char *arg) {
  printf("%s\n", arg);
}

int main() {
  void (*p)();

  p = Hehe;
  p();


  void (*p2)(char *);

  p2 = Muhehehe;
  p2("Muhehehe");
}

#include <stdio.h>

int main() {
  printf("Enter long string: ");
  char string[5];
  fgets(string, 5, stdin);

  printf("%s\n", string);
}

#include <stdio.h>

#define ADDITION(x, y) ((x) + (y))
#define SUBTRACTION(x, y) ((x) - (y))
#define MULTIPLY(x, y) ((x) * (y))
#define DIVISON(x, y) ((x) / (y))

int main() {
  int sum = ADDITION(10, 20);
  printf("Sum: %d\n", sum);

  int sub = SUBTRACTION(10, 20);
  printf("Sub: %d\n", sub);

  int mul = MULTIPLY(10, 20);
  printf("Mul: %d\n", mul);

  float div = DIVISON(10.0, 20.0);
  printf("Div: %.1f\n", div);
}

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int a = -1;
  int b = 2;
  long c = -3464896599;
  long long d = -9932974806496408;
  double e = -123.456;
  float f = 3.14;
  long double g = 9437.4698694;
  printf("abs(a): %d, abs(b): %d\n", abs(a), abs(b));
  printf("labs(c): %ld, llabs(d): %lld\n", labs(c), llabs(d));
  printf("fabs(e): %f, fabsf(f): %f, fabsl(g): %Lf\n", fabs(e), fabsf(f), fabsl(g));
}

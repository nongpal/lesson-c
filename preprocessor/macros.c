/* built-in macros */

#include <stdio.h>

int main() {
  printf("Current line if %d\n", __LINE__);

  printf("The source file is \"%s\"\n", __FILE__);

}

#include <stdio.h>
#define EXISTING_MACRO

/* ifdef use for check if the macro is defined
 * ifndef use for check if the macro is not defined
 */

int main() {
#ifdef EXISTING_MACRO
  printf("Code A is exist and will compiled\n");
#endif
#ifdef NOT_EXISTING_MACRO
  printf("Code B is exsit and will compiled\n");

#endif /* ifdef NOT_EXISTING_MACRO
  printf("Code B is exsit and will compiled\n"); */

#ifndef EXISTING_MACRO
  printf("Code A is not exist and will compiled\n");
  
#endif /* ifndef EXISTING_MACRO
    printf("Code A is not exist and will compiled\n"); */
#ifndef NOT_EXISTING_MACRO
  printf("Code B is not exist and will compiled");

#endif /* ifndef NOT_EXISTING_MACRO
  printf("Code B is not exist and will compiled"); */
}

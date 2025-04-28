#include <stdio.h>

/* Function Prototypes
 *
 * You can declared a function prototype and defined the function anywhere
 *
 */

int foo(void); // this is the prototype
	       // declared a function ends with semi-colon

int main(void) {
	int i;

	i = foo();

	printf("%d\n", i);
}

int foo(void) {
	return 101010101;
}

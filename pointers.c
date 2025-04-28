#include <stdio.h>

/*
 *  Expression:
 *  	- &x -> read as "address from x"
 *  	- *p -> store x's address
 */

int main(void) {
	int x = 10;
	int *p = &x;

	// int i;
	int *y;

	y = &x;
	printf("%d", *p);
	printf("%d", *y);
}

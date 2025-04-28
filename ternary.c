#include <stdio.h>

int main () {
	int x = 11;
	int y = 0;

	y += x > 10? 17: 37; // if x is greater then 10, then
			     // add 17 to y, otherwise
			     // add 37 to y

	printf("The number in y is %d\n", y);
	printf("The number %d is %s\n", x, x % 2? "even": "odd");
}

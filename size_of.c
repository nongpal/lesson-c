#include <stdio.h>

int main(void) {
	int a = 100;

	// %zu is the format specifier for type size_t
	
	printf("%zu\n", sizeof(a));
	printf("%zu\n", sizeof(3.14));
	printf("%zu\n", sizeof(float));
}

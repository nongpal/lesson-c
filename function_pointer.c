#include <stdio.h>

void increment(int *p) {
	(*p)++;
}

int main(void) {
	int i = 10;

	printf("%d\n", i);

	increment(&i);

	printf("%d\n", i);
}


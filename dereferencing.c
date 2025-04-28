#include <stdio.h>

int main() {
	int i;
	int *p;

	p = &i;

	i = 20;

	printf("%d\n", *p);
}

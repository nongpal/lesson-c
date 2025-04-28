#include <stdio.h>

int main() {
	int i;
	int j;

	for (i = 0, j = 20; i <= 10 && j >= 10; i++, j--) {
		printf("i = %d and j = %d\n", i, j);
	}
}

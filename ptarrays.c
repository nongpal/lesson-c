#include <stdio.h>

#define N 3

void VectorAdd(int *x, int *y, int len) {
	for (int i = 0; i < len; i++) {
		x[i] += y[i];
	}
}

void print_2d_array(int p[2][2]) {
	for (int row = 0; row < 2; row++) {
		for (int col = 0; col < 2; col++) {
			printf("%d", p[row][col]);
		}
		printf("\n");
	}
}

int main() {
	int a[N] = {1, 2, 3};
	int b[N] = {4, 5, 6};
	//int *p;

	//p = &a[0];

	//printf("%d\n", *p);

	//*p = 10;

	//printf("%d\n", *p);

	VectorAdd(a, b, N);

	//for (int w = 0; w < N; w++) {
	//	printf("%d\n", a[w]);
	//}
	
	int x[2][2] = {
		{1, 2},
		{3, 4}
	};

	print_2d_array(x);
}

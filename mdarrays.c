#include <stdio.h>

#define ROWS 3
#define COLS 2

int main() {
	int i, j;

	// Vector (1-D Array)
	int a[ROWS] = {1, 2, 3};

	// Matrix (2-D Array)
	int b[ROWS][COLS] = {
		{1, 2},
		{3, 4},
		{5, 6}
	};

	printf("Matrix:\n\n");

	//for (i = 0; i < ROWS; i++) {
	//	for (j = 0; j < COLS; j++) {
	//		printf("b[%d][%d] = %d\n", i, j, b[i][j]);
	//	}
	//}
	
	int c[2][2] = {[0][0]=1, [1][1]=1};

	for (i = 0; i < 2; i++){
		printf("\n");
		for (j = 0; j < 2; j++){
			printf("%d", c[i][j]);
		}
	}

	// Tensor (3 (or beyond) -D Array)
	int d[ROWS][COLS][2];
}

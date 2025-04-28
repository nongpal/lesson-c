#include <stdio.h>
#define N 10

int main(void) {
	int i;
	int f[4];  // declare an array with 4 elements of int type

	f[0] = 10;
	f[1] = 2;
	f[2] = 34;
	f[3] = 50;
	
	//float a[N] = {0.5, 3.14, [1]=0.98, 2.1346, 7.84};
	
	int a[N] = {0, 11, 34, 101, [7]=90, 80};
	for (i = 0; i < N; i++) {
		printf("f[%d] is %d\n", i, a[i]);
	}
	
	/* the next line is how to get the number of elements in an
	 * array in the scope in which an array is declared.
	 */

	// printf("the total size of f is %zu\n", sizeof f);
	// printf("the size of int is %zu\n", sizeof(int));

	// printf("The number elements of the array is %zu\n", sizeof f / sizeof(int));
}

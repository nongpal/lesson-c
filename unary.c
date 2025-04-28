#include <stdio.h>

int main() {
	int i = 10;
	int j = 5 + ++i;
	
	/*
	 * 5 + ++i is like, increment i then compute 5 + i, in this case
	 * i = 11, then 11 + 5 = 16
	 *
	 * if i++, 5 + i++ is like, compute 5 + i, which is i = 10
	 * then 5 + 10 = 15, then increment i -> i = 11
	 */

	//i++;    // Add one to i (post-increment); output = 11
	//i--;    // Subtract one from i (post-decrement); output = 9
	
        //++i;    // Add one to i (pre-increment); output = 11
	//--i;    // Subtract one from i (pre-decrement); output = 9
	
	printf("%d + %d = %d\n", i, 5, j);
}

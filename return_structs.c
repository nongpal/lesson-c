#include <stdio.h>

struct Point {
	int x;
	int y;
};

struct Point make_point(int x, int y);

int main(void) {
	struct Point myPoint = make_point(3, 4);

	printf("x: %d; y: %d\n", myPoint.x, myPoint.y);
}

struct Point make_point(int x, int y) {
	struct Point p;
	p.x = x;
	p.y = y;
	return p;
}

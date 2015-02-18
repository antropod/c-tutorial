#include <stdio.h>

typedef unsigned int uint;

typedef struct {
	float x, y;
} Point;

int main()
{	
	uint x = -1;
	printf("%#x", x);
	
	Point pt;
	pt.x = 0;
	pt.y = 0;
	return 0;
}

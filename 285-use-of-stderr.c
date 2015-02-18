#include <stdio.h>

int main()
{	
	int ret;
	int x;
	
	ret = scanf("%d\n", &x);
	if (ret != 1) {
		fprintf(stderr, "Error\n");
		return 1;
	}
	if (x < 0) {
		fprintf(stderr, "X must be > 0\n");
		return 1;
	}
	
	return 0;
}

#include <stdio.h>

void inc(int* a)
{
	*a += 1;
}

void read_triple_int(int* px, int* py, int *pz)
{
	scanf("%d%d%d", px, py, pz);
}

int main()
{
	int x = 0;
	inc(&x);
	printf("%d\n", x);
	
	int y, z;
	printf("enter 3 ints>");
	read_triple_int(&x, &y, &z);
	printf("%d %d %d\n", x, y, z);
	
	return 0;
}

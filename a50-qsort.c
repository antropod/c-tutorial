#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LEN(X) sizeof(X)/sizeof(X[0])

int compare(const void* a, const void* b)
{
	int * pa = (int*)a;
	int * pb = (int*)b;
	return *pa - *pb;
}

int main()
{
	int mat[] = { 3, 2, 0, 7, 5, 8, 4, 6, 9, 1 };
	qsort(mat, ARRAY_LEN(mat), sizeof(int), compare);
	for (int i = 0; i < ARRAY_LEN(mat); ++i) {
		printf("%d ", mat[i]);
	}
	return 0;
}

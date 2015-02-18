# see also finding-max-fool-proof.c
#include <stdio.h>


#define MAX_ROWS 32
#define MAX_COLS 32

int main()
{
	int mat[MAX_ROWS][MAX_COLS];
	int nrows, ncols;
	int ret;
	
	scanf("%d %d", &nrows, &ncols);
	
	for (int row = 0; row < nrows; ++row) {
		for (int col = 0; col < ncols; ++col) {
			scanf("%d", &mat[row][col]);
			}
		}
	}
	
	int max = mat[0][0];
	for (int row = 0; row < nrows; ++row)
		for (int col = 0; col < ncols; ++col)
			if (mat[row][col] > max) max = mat[row][col];
	
	printf("max: %d\n", max);
	
	return 0;
}

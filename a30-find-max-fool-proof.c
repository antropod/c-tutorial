#include <stdio.h>

#define MAX_ROWS 32
#define MAX_COLS 32

int main()
{
	int mat[MAX_ROWS][MAX_COLS];
	int nrows, ncols;
	int ret;
	
	scanf("%d %d", &nrows, &ncols);
	
	if (nrows <= 0 || ncols <= 0) {
		printf("Cols and rows has to be greater than zero\n");
		return 1;
	}
	if (nrows > MAX_ROWS || ncols > MAX_COLS) {
		printf("maximum size of matrix is: %dx%d", MAX_ROWS, MAX_COLS);
		return 1;
	}
	for (int row = 0; row < nrows; ++row) {
		for (int col = 0; col < ncols; ++col) {
			ret = scanf("%d", &mat[row][col]);
			if (ret <= 0) {
				printf("Please input an integer\n");
				return 1;
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

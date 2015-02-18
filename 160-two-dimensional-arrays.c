#include <stdio.h>

#define ROWS 5
#define COLS 3

void array_of_arrays()
{
	int mat[ROWS][COLS];
	
	printf("%p\n", mat[0]);
	printf("%p\n", mat[1]);
	printf("%p\n", mat[2]);
	printf("%p\n", mat[3]);
	printf("---\n");
	
	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLS; ++j) {
			mat[i][j] = i * 10 + j;
		}
	}
	
	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLS; ++j) {
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}	
}

void flat_array()
{
	int mat[ROWS*COLS];
	
	for (int r = 0; r < ROWS; ++r) {
		for (int c = 0; c < COLS; ++c) {
			mat[r*COLS + c] = r * 10 + c;
		}
	}
	
	for (int i = 0; i < ROWS*COLS; ++i) {
		printf("%d ", mat[i]);
	}
	
	for (int i = 0; i < ROWS*COLS; ++i) {
		int r = i / COLS;
		int c = i % COLS;
		printf(
			"mat[%d] == mat[%d*COLS+%d]: %d\n",
			i, r, c, mat[i] == mat[r*COLS+c]
		);
	}
}

int main()
{
	array_of_arrays();
	flat_array();
	return 0;
}

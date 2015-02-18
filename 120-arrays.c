#include <stdio.h>

int main()
{
	int vector[4];
	int a = 77;
	printf("vector[0] == %d\n", vector[0]);
	printf("vector[1] == %d\n", vector[1]);
	printf("vector[2] == %d\n", vector[2]);
	printf("vector[3] == %d\n", vector[3]);
	
	printf("vector[4] == %d <- out of bounds\n", vector[4]);
	printf("---\n");
	for (int i = 0; i < 4; i++) {
		vector[i] = i * 2;
	}
	
	for (int i = 0; i < 4; i++) {
		printf("vector[%d] == %d\n", i, vector[i]);
	}
	
	return 0;
}

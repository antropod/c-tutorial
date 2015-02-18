#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
	printf("press any key to malloc\n");
	getch();
	size_t num_bytes = sizeof(int) * 1024 * 1024 * 10;
	int * data = (int*) malloc(num_bytes);
	if (!data) {
		printf("malloc() fail\n");
		return 1;
	}
	memset(data, 0, num_bytes);
	printf("press any key to free\n");
	getch();
	
	free(data);
	
	printf("press any key to exit\n");
	getch();
	
	return 0;
}

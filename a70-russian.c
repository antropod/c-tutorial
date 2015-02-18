#include <stdio.h>
#include <stdlib.h>

int main()
{	
	printf("Привет\n");
	
	system("chcp 1251 > nul");
	printf("Привет\n");

	return 0;
}

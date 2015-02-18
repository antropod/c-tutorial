#include <stdio.h>
int main()
{
	int x = 0;
	
	printf("x = 0\n");
	do {
		printf("%d\n", x);
		x++;
	} 
	while (x < 10);
	
	printf("\n");
	
	printf("x = 11\n");
	do {
		printf("%d\n", x);
		x++;
	} while (x < 10);
	
	return 0;
}

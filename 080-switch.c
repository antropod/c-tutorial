#include <stdio.h>

int main()
{
	int x;
	
	printf("Enter a number>");
	scanf("%d", &x);
	
	switch(x) {
		case 0:
			printf("zero");
			break;
		case 1:
		case 2:
			printf("one or two");
			break;
			
		default:
			printf("other");
			break;
	}
	printf("\n");
	return 0;
}

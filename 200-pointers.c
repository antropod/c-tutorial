#include <stdio.h>

int main()
{
	int number = 1337;
	int *ptr = &number;
	
	printf("ptr = %p\n", ptr);
	printf("*ptr = %d\n", *ptr);
	
	*ptr = 9000;
	printf("number = %d\n", number);
	
	printf("\n");
	
	int other_number = 265;
	ptr = &other_number;
	
	printf("ptr = %p\n", ptr);
	printf("*ptr = %d\n", *ptr);
	
	int * ptr2 = NULL;
	ptr2 = &other_number;
	printf("*ptr2 = %d\n", *ptr2);
	printf("\n");
	*ptr2 = 777;
	printf("*ptr = %d\n", *ptr);
	printf("other_number = %d\n", other_number);
	
	return 0;
}

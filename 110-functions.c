#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

float times(int x, double z)
{
	return x * z;
}

void print_int(int x)
{
	printf("%d\n", x);
}

void say_bye()
{
	printf("bye\n");
}

int main()
{
	printf("add(1, 2) returns %d\n", add(1, 2));
	
	int x = add(3, 4);
	printf("x = add(3, 4); x is %d\n", x);
	
	printf("times(10, 5.0) returns %g\n", times(10, 5.0));
	
	print_int(42);
	
	say_bye();
	
	return 0;
}

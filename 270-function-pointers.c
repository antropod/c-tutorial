#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	return a / b;
}

void maths(int (*op)(int, int), int x, int y)
{
	printf("%d\n", op(x, y));
}

int main()
{	
	maths(add, 1, 2);
	maths(sub, 2, 3);
	maths(mul, 2, 3);
	maths(div, 6, 3);
	
	return 0;
}

#include <stdio.h>

// операторы сравнения
// оператор if

int main()
{
	int num1;
	int num2;
	
	printf("Enter 2 numbers:");
	scanf("%d%d", &num1, &num2);
	
	if (num1 == num2) {
		printf("they are equal");
	}
}

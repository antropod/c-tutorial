#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int sum;
	
	printf("Enter 2 numbers:");
	
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	sum = num1 + num2;
	
	printf("The sum is %d\n", sum);
	
	return 0;
}

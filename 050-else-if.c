#include <stdio.h>

// else-if, else

int main()
{
	int num1;
	int num2;
	
	printf("Enter 2 numbers:");
	scanf("%d%d", &num1, &num2);
	
	if (num1 < num2) {
		printf("%d less than %d", num1, num2);
	}
	else if (num1 == num2) {
		printf("%d equals %d", num1, num2);
	}
	else {
		printf("I dont know");
	}
}

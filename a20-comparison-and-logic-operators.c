#include <stdio.h>

int main()
{	
	// ��������� ���������
	int a = 12, b = 5;

	printf("a = %d, b = %d\n", a, b);
		
	printf("a == b : %d\n", a == b);
	printf("a != b : %d\n", a != b);
	printf("a < b : %d\n", a < b);
	printf("a > b : %d\n", a > b);
	printf("a <= b : %d\n", a <= b);
	printf("a >= b : %d\n", a >= b);
	
	printf("\n");
	
	// ���������� ���������
	printf("a = %d, b = %d\n", a, b);
	printf("a && b : %d\n", a && b);
	printf("a || b : %d\n", a || b);
	printf("!a : %d\n", !a);
	printf("!!b : %d\n", !!b);
	printf("!!32 : %d\n", !!32);
	
	return 0;
}

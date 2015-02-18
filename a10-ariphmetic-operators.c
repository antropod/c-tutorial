#include <stdio.h>

int main()
{
	
	int a, b, c;
	
	// �������������� ���������
	a = 15; b = 7;
	// - ��������
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);
	
	// - ���������
	c = a - b;
	printf("%d - %d = %d\n", a, b, c);
	
	// - ���������
	c = a * b;
	printf("%d - %d = %d\n", a, b, c);
	
	// - ������� (���� ��������� ���� int, �� �������������� �������)
	c = a / b;
	printf("%d / %d = %d\n", a, b, c);
	
	// - mod (������� �� �������)
	c = a % b;
	printf("%d %% %d = %d\n", a, b, c);
	
	// �������������� ��������� (bitwise)
	
	// ��������� �
	c = a & b;
	printf("%#x & %#x = %#x\n", a, b, c);
	
	// ��������� ���	
	c = a | b;
	printf("%#x | %#x = %#x\n", a, b, c);
	
	// ��������� ��������
	c = ~a;
	printf("~%#x = %#x\n", a, c);

	// ��������� XOR
	c = a ^ b;
	printf("%#x ^ %#x = %#x\n", a, b, c);
	
	// ����� �����
	c = 0x10 << 2;
	printf("%#x << %d = %#x\n", 0x10, 2, c);
	
	// ����� ������
	c = 0x10 >> 2;
	printf("%#x >> %d = %#x\n", 0x10, 2, c);
		
	return 0;
}

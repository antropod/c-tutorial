#include <stdio.h>

int main()
{
	
	int a, b, c;
	
	// Арифметические операторы
	a = 15; b = 7;
	// - сложение
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);
	
	// - вычитание
	c = a - b;
	printf("%d - %d = %d\n", a, b, c);
	
	// - умножение
	c = a * b;
	printf("%d - %d = %d\n", a, b, c);
	
	// - деление (если аргументы типа int, то целночисленное деление)
	c = a / b;
	printf("%d / %d = %d\n", a, b, c);
	
	// - mod (остатот от деления)
	c = a % b;
	printf("%d %% %d = %d\n", a, b, c);
	
	// арифметические побитовые (bitwise)
	
	// побитовое И
	c = a & b;
	printf("%#x & %#x = %#x\n", a, b, c);
	
	// побитовое ИЛИ	
	c = a | b;
	printf("%#x | %#x = %#x\n", a, b, c);
	
	// побитовая инверсия
	c = ~a;
	printf("~%#x = %#x\n", a, c);

	// побитовое XOR
	c = a ^ b;
	printf("%#x ^ %#x = %#x\n", a, b, c);
	
	// сдвиг влево
	c = 0x10 << 2;
	printf("%#x << %d = %#x\n", 0x10, 2, c);
	
	// сдвиг вправо
	c = 0x10 >> 2;
	printf("%#x >> %d = %#x\n", 0x10, 2, c);
		
	return 0;
}

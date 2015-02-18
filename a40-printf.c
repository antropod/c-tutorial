#include <stdio.h>

int main()
{
	// %[flags][width][.precision][length]specifier	
	//
	// specifier:
	printf("percent: %%\n");
	
	printf("decimal %%d: %d\n", 10);
	printf("unsigned decimal %%u: %u\n", -10);
	printf("octal %%o: %o\n", 10);
	printf("hexadecimal(hex) %%x: %x\n", 27);
	printf("HEX %%X: %X\n", 27);
	printf("\n");
	printf("float fixed %%f: %f\n", 1.23f);
	printf("float scientific %%e: %e\n", 1.23f);
	printf("float general %%g: %g, %g\n", 1.23f, 2.56e12);
	printf("float hex %%a: %a\n", 23.12e10f);
	printf("\n");
	printf("character %%c: %c %c\n", '!', 33);
	printf("string %%s: %s\n", "hello");
	int i;
	printf("pointer %%p: %p, %p\n", 0xff, &i);
	printf("---\n");
	
	// width:
	printf("1234567890\n");
	printf("%10d\n", 10);
	printf("%*d\n", 5, 10);
	printf("%5d\n", 1234567890);
	printf("---\n");
	
	// flags:
	printf("1234567890\n");
	printf("%10d\n", 10);
	printf("%-10d\n", 10);
	printf("\n");
	printf("%d\n", 1);
	printf("%+d\n", 1);
	printf("% d\n", 1);
	printf("\n");
	printf("%#x\n", 12);
	printf("%#X\n", 12);
	printf("%#o\n", 12);
	printf("\n");
	printf("%f\n", 1.f);
	printf("%#f\n", 1.f);
	printf("%g\n", 1.f);
	printf("%#g\n", 1.f);
	printf("\n");
	printf("%10d\n", 10);
	printf("%010d\n", 10);
	printf("---\n");
	

	return 0;
}

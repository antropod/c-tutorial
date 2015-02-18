#include <stdio.h>

union Variant
{
	float f;
	int i;
};

union Bytes
{
	int i;
	char c[4];
};

int main()
{	
	union Variant v;
	v.f = 1.f;
	printf("%g\n", v.f);
	printf("%#x\n", v.i);
	
	v.i = 1;
	printf("%g\n", v.f);
	printf("%#x\n", v.i);
	
	printf("---\n");
	
	union Bytes bytes;
	bytes.i = 0x10203040;
	printf("%#x\n", bytes.i);
	printf("%x %x %x %x\n", bytes.c[0], bytes.c[1], bytes.c[2], bytes.c[3]);

	return 0;
}

#include <stdio.h>

#define FILE_NAME "files/binary-file"

int main()
{	
	FILE* fp = fopen(FILE_NAME, "wb");
	if (!fp) return 1;
	
	int x = 0x12345678;
	fwrite(&x, sizeof(x), 1, fp);
	
	fclose(fp);
	
	
	fp = fopen(FILE_NAME, "rb");
	if (!fp) return 1;	
	
	int y;
	fread(&y, sizeof(y), 1, fp);
	
	fclose(fp);
	
	printf("%#x\n", y);
	return 0;
}

#include <stdio.h>

int main()
{	
	FILE* fp = fopen("files/test1", "r");
	if (!fp) {
		perror("can't open file");
		return 1;
	}
	char buffer[1024];
	char* ptr = fgets(buffer, sizeof(buffer), fp);
	puts(buffer);
	printf("%s", ptr);
	
	fclose(fp);
	
	return 0;
}

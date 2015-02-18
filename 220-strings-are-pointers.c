#include <stdio.h>
#include <string.h>

int main()
{
	char * msg = "Welcome, user";
	printf(msg);
	printf("\n");
	int len = strlen(msg);
	
	for (int i = 0; i < len; ++i) {
		printf("%c ", msg[i]);
	}
	printf("\\x%d\n", msg[len]);
	
	for (char* c = msg; *c != 0; c++) {
		printf("%c ", *c);
	}
	
	
	return 0;
}

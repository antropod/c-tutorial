#include <stdio.h>
#include <string.h>

int main()
{
	char* msg1 = "Hello ";
	char* msg2 = "World";
	
	printf("%s%s\n", msg1, msg2);
	
	printf("strlen(msg1) == %d\n", strlen(msg1));
	printf("strlen(msg2) == %d\n", strlen(msg2));
	printf("\n");
	printf("strcmp(msg1, msg2) == %d (msg1 < msg2)\n", strcmp(msg1, msg2));
	printf("strcmp(msg1, msg1) == %d (msg1 == msg2)\n", strcmp(msg1, msg1));
	printf("strcmp(msg2, msg1) == %d (msg1 > msg2)\n", strcmp(msg2, msg1));
	
	char msg3[80];
	
	strcpy(msg3, msg1);
	printf("%s\n", msg3);
	
	strcat(msg3, msg2);
	printf("%s\n", msg3);
	
	return 0;
}

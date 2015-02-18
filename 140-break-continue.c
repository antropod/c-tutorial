#include <stdio.h>


void print_index(int index)
{
	if (index == -1) {
		printf("Not found\n");
	}
	else {
		printf("Index is %d\n", index);
	}
}

int main()
{	
	int haystack[6] = { 3, 1, 4, 8, 4, 5 };
	int needle = 4;
	int index = -1;
	
	for (int i = 0; i < 6; i++) {
		if (haystack[i] == needle) {
			index = i;
			break;
		}
	}
	
	print_index(index);
	printf("---\n");
	
	index = -1;
	for (int i = 0; i < 6; ++i) {
		if (haystack[i] != needle) continue;
		index = i;
	}
	
	print_index(index);
	
	return 0;
}

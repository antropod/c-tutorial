#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int * data;
	int size;
} IntArray;

void array_alloc(IntArray* ptr, int size)
{
	if (!ptr) return;
	ptr->data = (int*) malloc(sizeof(ptr->data[0]) * size);
	ptr->size = size;
}

void array_free(IntArray* ptr)
{
	if (!ptr) return;
	free(ptr->data);
	ptr->data = NULL;
	ptr->size = 0;
}

int main()
{	
	IntArray vector;
	array_alloc(&vector, 10);
	for (int i = 0; i < vector.size; i++) {
		vector.data[i] = i*2;
	}
	for (int i = 0; i < vector.size; i++) {
		printf("%d ", vector.data[i]);
	}
	array_free(&vector);
	return 0;
}

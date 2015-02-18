#include <stdio.h>
#include <stdlib.h>

struct IntArray
{
	int * data;
	int size;
};

void array_alloc(struct IntArray* ptr, int size)
{
	if (!ptr) return;
	ptr->data = (int*) malloc(sizeof(ptr->data[0]) * size);
	ptr->size = size;
}

void array_free(struct IntArray* ptr)
{
	if (!ptr) return;
	free(ptr->data);
	ptr->data = NULL;
	ptr->size = 0;
}

int main()
{	
	struct IntArray vector;
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

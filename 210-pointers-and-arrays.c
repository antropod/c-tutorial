#include <stdio.h>

int main()
{
	int v[3] = { 10, 20, 30 };
	int *pv;
	
	pv = &v[0];
	printf("%p\n", pv);
	pv = v;
	printf("%p\n", pv);
	printf("\n");
	printf("pv[0] = %d\n", pv[0]);
	printf("pv[1] = %d\n", pv[1]);
	printf("pv[2] = %d\n", pv[2]);
	printf("\n");
	printf("pv+0 = %p\n", pv+0);
	printf("pv+1 = %p\n", pv+1);
	printf("pv+2 = %p\n", pv+2);
	printf("\n");
	printf("*(pv+0) = %d\n", *(pv+0));
	printf("*(pv+1) = %d\n", *(pv+1));
	printf("*(pv+2) = %d\n", *(pv+2));
	
	return 0;
}

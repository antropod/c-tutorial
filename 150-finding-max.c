#include <stdio.h>

#define MAX_SIZE 64

int main()
{
	int arr[MAX_SIZE];
	int narr = 0;
	int ret;
	
	for (int i = 0; i < MAX_SIZE; ++i) {
		// ������� scanf ���������� ���������� ����������� ����������
		ret = scanf("%d", &arr[i]);
		if (ret <= 0) {
			narr = i;
			break;
		}
	}
	
	if (!narr) {
		// ������, ������ ����
		printf("narr == 0");
		return 1;
	}

	// ���������� ���� ����� (�� ��� ������, ��� ���������������� ������:

	int max = arr[0];
	for (int i = 0; i < narr; i++) {
		if (arr[i] > max) max = arr[i];
	}
		
	printf("Max: %d\n", max);
	return 0;
}

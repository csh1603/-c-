//���� �޸� �Ҵ� �̿�, �� ���ϴ� ���α׷�

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size, i;
	int sum = 0;

	printf("�� ���� ������ �Է��Ͻðڽ��ϱ�? : ");
	scanf("%d", &size);

	int*arr = (int*)malloc(sizeof(int) * size);
	if (arr == NULL) {
		printf("���� �޸� �Ҵ� ����\n");
		return -1;
	}

	printf("%d���� ������ �Է��ϼ��� : ", size);
	for (i = 0;i < size;i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0;i < size;i++)
		sum = sum + arr[i];

	printf("�հ� : %d\n", sum);

	free(arr);
	arr = NULL;

	return 0;
}
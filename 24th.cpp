// �� Ư���� ������ ��ü �ڸ����� �����ϴ� ���α׷�

#include <stdio.h>

int main(void) {
	int a = 0, i;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &a);

	for (i = 1;;i++) {
		a = a / 10;
		if (a == 0)
			break;
	}

	printf("�Է��Ͻ� ������ %d�ڸ� �� �Դϴ�.\n", i);
}
#include <stdio.h>

int main(void) {
	int a, b, c;

	printf("�� �ڸ� ������ �Է��ϼ��� : ");
	scanf_s("%d", &a);

	b = a / 10;
	c = a % 10;

	printf("�ڸ����� ������ �ݴ�� ����ϸ� %d%d�Դϴ�.\n", c, b);

	return 0;
}
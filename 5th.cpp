#include <stdio.h>

int main(void) {
	int a, b;

	printf("�� ������ �Է����ּ��� : ");
	scanf_s("%d %d", &a, &b);

	if (a > b)
		printf("�� ū ���� %d�Դϴ�.\n", a);
	else if (b > a)
		printf("�� ū ���� %d�Դϴ�.\n", b);
	else
		printf("�� ������ ũ��� �����ϴ�.\n");

	return 0;
}
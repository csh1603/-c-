#include <stdio.h>

int main(void) {
	int a = 0, b = 0;

	printf("�� ���� ������ �Է����ּ��� : ");
	scanf_s("%d %d", &a, &b);

	printf("%d�� %d�� ���� ���� %d�̰�, �������� %d�Դϴ�.\n", a, b, a / b, a % b);

	return 0;
}
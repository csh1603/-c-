#include <stdio.h>

int main(void) {
	int a, b, c;

	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b && a > c)
		printf("���� ū ���� %d�Դϴ�.\n", a);
	else if (b > c)
		printf("���� ū ���� %d�Դϴ�.\n", b);
	else
		printf("���� ū ���� %d�Դϴ�.\n", c);

	return 0;
}
#include <stdio.h>

int main(void) {
	float a, b, c;

	printf("3���� �Ǽ��� �Է��ϼ��� : ");
	scanf_s("%f %f %f", &a, &b, &c);

	printf("%f, %f, %f�� ���� %f�̰�, ����� %f�Դϴ�.", a, b, c, a + b + c, (a + b + c) / 3);

	return 0;
}
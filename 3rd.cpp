#include <stdio.h>

int main(void) {
	float F, C;

	printf("���� �µ��� �Է��ϼ��� : ");
	scanf_s("%f", &C);

	F = C * (9 / 5) + 32;
	printf("�Է��Ͻ� ���� �µ��� ȭ���µ��� %f�Դϴ�.\n", F);

	return 0;
}
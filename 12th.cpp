#include <stdio.h>

int main(void) {
	int a = 0, b = 0, i;

	for (i = 0;i < 10;i++) {
		printf("���� �ϳ��� �Է��ϼ��� : ");
		scanf_s("%d", &b);
		a = a + b;
		}
	printf("10�� ���� �� ���� %d�Դϴ�.\n", a);

	return 0;

}
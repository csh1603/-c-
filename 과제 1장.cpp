//������ ���� a, b�� ���� �Է� �޾� �� ���� ��ȯ�ϴ� ���α׷�

#include <stdio.h>

void Switch (int *x, int *y) {
	int tem;
	tem = *x;
	*x = *y;
	*y = tem;
}

int main(void) {
	int a, b;
	printf("���� �ΰ��� �Է��ϼ��� : ");
	scanf_s("%d %d", &a, &b);

	Switch(&a, &b);

	printf("%d %d\n", a, b);
}
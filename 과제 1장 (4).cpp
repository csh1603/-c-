// x, y ��ǥ �Է� �ް� ���ϴ� ��и� ���

#include <stdio.h>

int main(void) {
	int x, y;

	printf("x��ǥ�� y��ǥ�� �Է��ϼ��� : ");
	scanf_s("%d %d", &x, &y);

	if (x > 0) {
		if (y > 0)
			printf("1��и�\n");
		else
			printf("4��и�\n");
	}
	else {
		if (y > 0)
			printf("2��и�\n");
		else
			printf("3��и�\n");
	}
}
//����� x, y��ǥ�� �ϴ� �� ���

#include <stdio.h>

int main(void) {
	int one, two;

	printf("�� ���� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d", &one, &two);

	for (int i = 1;i <= one;i++) {
		if (one % i == 0) {
			for (int j = 1;j <= two;j++) {
				if (two % j == 0)
					printf("%d %d\n", i, j);
			}
		}
	}
}
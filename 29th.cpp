//���� ���� �Է� �޾� �� �� �� ��ŭ ��ǥ �ﰢ�� �����

#include <stdio.h>

int main(void) {
	int line;

	printf("�� ���� �Է��ϼ��� : ");
	scanf_s("%d", &line);

	for (int i = 1;i <= line;i++) {
		for (int j = 1;j < 2 * i;j = j + 2) {
			printf("*");
		}
		printf("\n");
	}
}
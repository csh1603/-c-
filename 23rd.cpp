//1~100 ������ ���� �ϳ��� ���� �� 10�� �̳��� ���ߴ� ���α׷�

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a = 0, i, num;
	num = rand() % 100;

	for (i = 0;i < 10;i++) {
		printf("���ڸ� �Է��ϼ��� : ");
		scanf_s("%d", &a);

		if (a > num) {
			printf("�Է��Ͻ� ���ں��� �۽��ϴ�.\n");
			continue;
		}
		else if (a < num) {
			printf("�Է��Ͻ� ���ں��� Ů�ϴ�.\n");
			continue;
		}
		else {
			printf("�����Դϴ�!\n");
			break;
		}
		printf("Game Over");
	}
}
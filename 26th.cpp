//100������ �Ҽ��� ��� ����ϴ� ���α׷�

#include <stdio.h>

int main(void) {
	printf("1���� 100������ ���� �� �Ҽ��� 2, ");
	for (int i = 3;i <= 100;i++) {
		for (int j = 2;j < i;j++) {
			if (i % j == 0) {
				break;
			}
			else if (j == i - 1) {
				printf("%d ,", i);
				break;
			}
		}
	}
	printf("�Դϴ�.\n");
}
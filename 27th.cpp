//���� �ϳ��� �Է¹ް� �� ���� ������ �Ҽ����� ���� ���ϴ� ���α׷�

#include <stdio.h>

int main(void) {
	int num, all = 0;

	printf("������ �ϳ� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	for (int i = 3;i <= num;i++) {
		for (int j = 2;j <= i;j++) {
			if (i % j == 0) {
				break;
			}
			else if (i == j) {
				all = all + i;
				break;
			}
		}
	}
	printf("������ %d�Դϴ�.\n", 2+all);
}
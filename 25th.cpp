// ���ڸ� �Է¹޾� �Ҽ����� �ƴ��� �˻��ϴ� ���α׷�

#include <stdio.h>

int main(void) {
	int num = 0;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);

	for (int i = 2;i < num;i++) {
		if (num % i == 0) {
			printf("�Է��Ͻ� ���� �Ҽ��� �ƴմϴ�.\n");
			break;
		}
		else if (i == num - 1) {
			printf("�Է��Ͻ� ���� �Ҽ��Դϴ�.\n");
			break;
		}
	}
}
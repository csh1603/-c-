//� ���� ������ �Է¹޾� �� ���� 2�踦 ���ϴ� ���α׷�

#include <stdio.h>

int main(void) {
	int n;
	
	while (1) {
		printf("���� ������ �Է��ϼ��� : ");
		scanf_s("%d", &n);

		if (n <= 0) {
			printf("error!\n");
		}
		else {
			printf("�Է��Ͻ� ���� 2��� %d�Դϴ�.\n", 2 * n);
			break;
		}
	}
}
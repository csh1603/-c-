// 0�� �Էµ� ������ �Է� ���� ���� �� ���� ū ������ ����ϴ� ���α׷�

#include <stdio.h>

int main(void) {
	int max = 0, num;

	while (1) {
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &num);

		if (num == 0)
			break;
		else {
			if (max < num)
				max = num;
		}
	}
	printf("�Է��� ���� �߿� ���� ū ���� %d�Դϴ�.\n", max);
}
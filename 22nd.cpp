//7���� �Է¹��� ������ ��� ������ ���� ���ϴ� ���α׷�

#include <stdio.h>

int main(void) {
	int num, all = 0, i;

	printf("7���� ū ���� �ϳ��� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	int j = num;

	if (num < 7)
		printf("error!\n");
	else {
		for (i = 0;i <= j - 7;i++) {
			all = all + num;
			num--;
		}
		printf("7���� �Է��Ͻ� ������ ��� ������ ���� %d�Դϴ�.\n", all);
	}
}
//0�� �Է��� ������ ���� �Է� �ް� �ִ� ���

#include <stdio.h>

int main(void) {

	int num=1, max = 0;
	printf("���ڸ� �Է��ϼ��� (0�� �Է��ϸ� ����) : \n");
	while (1) {
		if (num == 0)
			break;
		else {
			scanf_s("%d", &num);
			if (max < num)
				max = num;
		}
	}
	printf("���� ū ���� %d�Դϴ�.\n", max);
}
// � �� ���� ���� ����� 100 ������ ����ȭ�ϴ� �Լ�

#include <stdio.h>

int hun(int num) {
	int fir = num;
	for (int i = 0;;i++) {
		num = fir * i;
		if (num > 100)
			break;
	}
	int over = num - 100;
	int under = 100 - (num - fir);
	if (over > under)
		return num - fir;
	else
		return num;
}

int main(void) {
	int hund;

	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf_s("%d", &hund);

	printf("100�� ���� ����� ����� %d�Դϴ�.\n", hun(hund));
}
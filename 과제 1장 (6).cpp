//���� �ð��� �Է¹ް�, �ɸ� �ð��� �Է� ������ ���� �ð��� ���

#include <stdio.h>

int main(void) {
	int hour=0, min=0, time=0;

	printf("���� �ð��� ���� �Է��ϼ��� : ");
	scanf_s("%d %d", &hour, &min);
	printf("�ɸ� �ð��� �Է��ϼ��� : ");
	scanf_s("%d", &time);

	min = min + time;
	while (min >= 60) {
		min = min - 60;
		hour = hour + 1;
	}
	printf("���� �ð��� %d %d �Դϴ�.\n", hour, min);
}
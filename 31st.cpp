// ũ�Ⱑ 10�� ���� �迭�� ����ؼ� �л� 10���� ���� �Է� ���� ��, ���� ����, �������, �ְ�� ���� ���� ���

#include<stdio.h>

int main(void) {
	int arr[10];
	int all = 0, avr = 0, min = 100, max = 0;

	for (int i = 0;i < 10;i++) {
		printf("�л� %d�� ������ �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0;i < 10;i++) {
		all = all + arr[i];
		if (arr[i] > max)
			max = arr[i];
		else if (arr[i] < min)
			min = arr[i];
	}

	avr = all / 10;
	printf("����: %d\n���: %d\n�ְ���: %d\n������: %d\n", all, avr, max, min);
}
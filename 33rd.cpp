//�л� 3���� �б޿��� ���� ���� ���� ������ ���� ������ �迭�� �̿��Ͽ� �Է� ���� ��, �� ������ �հ� ����� ����ϴ� ���α׷�

#include <stdio.h>

int main(void) {
	int arr[3][3], total = 0;

	for (int i = 0;i < 3;i++) {
		printf("�л� %d: ", i + 1);
		for (int j = 0;j < 3;j++) {
			scanf_s("%d", &arr[i][j]);
		}
		printf("\n");
	}

	printf("Kor Eng Math Total Avg\n");
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			printf("%d ", arr[i][j]);
			total = total + arr[i][j];
		}
		printf("%d %d\n", total, total / 3);
	}
}
//������ �������� ��ȯ�ϴ� �Լ�

#include <stdio.h>

char grade(int score) {
	if (score <= 100 && score >= 80)
		return 'A';
	else if (score < 80 && score >= 70)
		return 'B';
	else if (score < 70 && score >= 60)
		return 'C';
	else if (score < 60 && score >= 50)
		return 'D';
	else if (score < 50)
		return 'F';
}

int main(void) {
	int sco;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &sco);

	printf("����� ������ %c�Դϴ�.\n", grade(sco));
}
//�ð� �Է��� �ʷ� ȯ���ϴ� �Լ��� �ۼ�

#include <stdio.h>

int tran(int hour, int minute, int second, int tot);

int main(void) {
	int hou, min, sec, total = 0;

	printf("�ð��� �Է��ϼ��� : ");
	scanf_s("%d", &hou);

	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &min);

	printf("�ʸ� �Է��ϼ��� : ");
	scanf_s("%d", &sec);

	total = tran(hou, min, sec, total);
	printf("�ʷ� �ٲٸ� %d�Դϴ�.\n", total);
}

int tran(int hour, int minute, int second, int tot) {
	tot = hour * 3600 + minute * 60 + second;
	return tot;
}
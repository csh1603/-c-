//1���� n������ ¦���� �հ� Ȧ���� ���� ���

#include<stdio.h>

int main(void) {
	int num, odd = 0, even = 0;

	printf("���� �ϳ��� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	for (int i = 1;i <= num;i++) {
		if (i % 2 == 0)
			even = even + i;
		else
			odd = odd + i;
	}
	printf("¦���� ���� %d�̰�, Ȧ���� ���� %d�̴�.\n", even, odd);
}
//������ �Է¹޾� �� �ڸ����� ���� ���ϴ� ��� �Լ�

#include <stdio.h>

int rSum(int n) {
	int sum = 0;

	if (n / 10 == 0)
		return n;
	else
		return n % 10 + rSum(n / 10);
}

int main(void) {
	int num = 0;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);

	printf("%d\n", rSum(num));
}
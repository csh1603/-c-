//�Ǽ��� ������ �ٲٸ鼭 �Ҽ��� ���ϸ� �ڸ��� �Լ�

#include <stdio.h>

int into(float ten) {
	int result = ten;
	return result;
}

int main(void) {
	float num = 0;

	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf_s("%f", &num);

	printf("%d\n", into(num));
}
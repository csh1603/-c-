#include <stdio.h>

int main(void) {
	int a;

	printf("���� �ϳ��� �Է��ϼ��� : ");
	scanf_s("%d", &a);

	if (a % 2 == 0)
		printf("%d��(��) ¦���Դϴ�.\n", a);
	else
		printf("%d��(��) Ȧ���Դϴ�.\n", a);

	return 0;
}
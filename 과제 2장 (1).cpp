//�Լ� ��.. ���

#include <stdio.h>

int main(void) {
	float x = 0;
	char a = ' ';

	while (1) {
		printf("x�� ���� �Է��Ͻÿ� : ");
		scanf("%f", &x);

		if (x > 0) {
			printf("f(x)�� ���� %f\n", 7 * x + 2);
		}
		else
			printf("f(x)�� ���� %f\n", x * x - 9 * x + 2);

		printf("\n��� ����� �����ұ��? ");
		scanf(" %c", &a); //%c �տ� ���� �߿�

		if (a == 'n')
			break;
	}
}
//���� �Է� �ް� �ƽ�Ű �ڵ� ���

#include <stdio.h>

int main(void) {
	char c;

	printf("���� 1���� �Է��ϼ��� : ");
	scanf_s("%c", &c);

	printf("%d %d %d %d\n", c, c + 1, c + 2, c + 3);
	printf("%c %c %c %c\n", c, c + 1, c + 2, c + 3);
}
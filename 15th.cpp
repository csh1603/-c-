#include <stdio.h>

int main(void) {
	int i = 1, a = 0;

	do {
		if (i % 3 == 0)
			a = a + i;
		i++;
	} while (i <= 100);

	printf("1���� 100���� 3�� ����� ������ %d�Դϴ�.\n", a);
	return 0;
}
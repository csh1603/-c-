#include <stdio.h>

int main(void) {
	int a = 0, i = 0;

	while (i <= 100) {
		if (i % 3 == 0)
			a = a + i;
		i++;
	}

	printf("1���� 100���� 3�� ����� ������ %d�Դϴ�,\n", a);
	return 0;
}
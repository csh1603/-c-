#include <stdio.h>

int main(void) {
	int i = 0, a = 0;

	for (i = 0;i <= 100; i++) {
		if (i % 3 == 0)
			a = a + i;
	}
	printf("1���� 100���� 3�� ����� ������ %d�Դϴ�.\n", a);
	return 0;
}
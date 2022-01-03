#include <stdio.h>

int main(void) {
	int i = 0, a = 0;

	for (i = 0;i <= 100; i++) {
		if (i % 3 == 0)
			a = a + i;
	}
	printf("1부터 100까지 3의 배수의 총합은 %d입니다.\n", a);
	return 0;
}
#include <stdio.h>

int main(void) {
	int i = 1, a = 0;

	do {
		if (i % 3 == 0)
			a = a + i;
		i++;
	} while (i <= 100);

	printf("1부터 100까지 3의 배수의 총합은 %d입니다.\n", a);
	return 0;
}
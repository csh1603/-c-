#include <stdio.h>

int main(void) {
	int a = 0, b = 0, i;

	for (i = 0;i < 10;i++) {
		printf("정수 하나를 입력하세요 : ");
		scanf_s("%d", &b);
		a = a + b;
		}
	printf("10개 수의 총 합은 %d입니다.\n", a);

	return 0;

}
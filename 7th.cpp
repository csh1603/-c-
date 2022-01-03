#include <stdio.h>

int main(void) {
	int a, b, c;

	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b && a > c)
		printf("가장 큰 수는 %d입니다.\n", a);
	else if (b > c)
		printf("가장 큰 수는 %d입니다.\n", b);
	else
		printf("가장 큰 수는 %d입니다.\n", c);

	return 0;
}
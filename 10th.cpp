#include <stdio.h>

int main(void) {
	int a, b, c;

	printf("두 자리 정수를 입력하세요 : ");
	scanf_s("%d", &a);

	b = a / 10;
	c = a % 10;

	printf("자릿수의 순서를 반대로 출력하면 %d%d입니다.\n", c, b);

	return 0;
}
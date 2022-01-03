#include <stdio.h>

int main(void) {
	int a = 0, b = 0;

	printf("두 개의 정수를 입력해주세요 : ");
	scanf_s("%d %d", &a, &b);

	printf("%d를 %d로 나눈 몫은 %d이고, 나머지는 %d입니다.\n", a, b, a / b, a % b);

	return 0;
}
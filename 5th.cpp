#include <stdio.h>

int main(void) {
	int a, b;

	printf("두 정수를 입력해주세요 : ");
	scanf_s("%d %d", &a, &b);

	if (a > b)
		printf("더 큰 수는 %d입니다.\n", a);
	else if (b > a)
		printf("더 큰 수는 %d입니다.\n", b);
	else
		printf("두 정수의 크기는 같습니다.\n");

	return 0;
}
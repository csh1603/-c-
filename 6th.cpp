#include <stdio.h>

int main(void) {
	int a;

	printf("정수 하나를 입력하세요 : ");
	scanf_s("%d", &a);

	if (a % 2 == 0)
		printf("%d은(는) 짝수입니다.\n", a);
	else
		printf("%d은(는) 홀수입니다.\n", a);

	return 0;
}
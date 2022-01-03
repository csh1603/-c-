#include <stdio.h>

int main(void) {
	float a, b, c;

	printf("3개의 실수를 입력하세요 : ");
	scanf_s("%f %f %f", &a, &b, &c);

	printf("%f, %f, %f의 합은 %f이고, 평균은 %f입니다.", a, b, c, a + b + c, (a + b + c) / 3);

	return 0;
}
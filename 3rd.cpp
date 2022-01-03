#include <stdio.h>

int main(void) {
	float F, C;

	printf("섭씨 온도를 입력하세요 : ");
	scanf_s("%f", &C);

	F = C * (9 / 5) + 32;
	printf("입력하신 섭씨 온도는 화씨온도로 %f입니다.\n", F);

	return 0;
}
// 구의 표면적과 체적을 구하는 프로그램

#include <stdio.h>
#define PI 3.14

int main(void) {
	float rad;

	printf("반지름을 입력하세요 : ");
	scanf_s("%f", &rad);

	printf("구의 표면적은 %f이고, 체적은 %f입니다.\n", 4 * PI * rad * rad, 4 / 3 * PI * rad * rad * rad);
}
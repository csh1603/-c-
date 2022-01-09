//2초마다 가속도 구하기

#include <stdio.h>
#include <math.h>

void newtonsLaw(float m) {
	for (int i = 0;i < 31;i = i + 2) {
		float v = 9.81 / 12.5 * m * (1 - pow(2.718, -12.5 * i / m));
			printf("%d sec   %f m/s\n", i, v);
	}
}

int main(void) {
	float a = 0;

	printf("몸무게를 입력하세요 : ");
	scanf_s("%f", &a);

	newtonsLaw(a);
}
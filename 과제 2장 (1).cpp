//함수 값.. 계산

#include <stdio.h>

int main(void) {
	float x = 0;
	char a = ' ';

	while (1) {
		printf("x의 값을 입력하시오 : ");
		scanf("%f", &x);

		if (x > 0) {
			printf("f(x)의 값은 %f\n", 7 * x + 2);
		}
		else
			printf("f(x)의 값은 %f\n", x * x - 9 * x + 2);

		printf("\n계속 계산을 진행할까요? ");
		scanf(" %c", &a); //%c 앞에 띄어쓰기 중요

		if (a == 'n')
			break;
	}
}
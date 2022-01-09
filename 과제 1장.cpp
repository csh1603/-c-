//정수형 변수 a, b에 값을 입력 받아 두 값을 교환하는 프로그램

#include <stdio.h>

void Switch (int *x, int *y) {
	int tem;
	tem = *x;
	*x = *y;
	*y = tem;
}

int main(void) {
	int a, b;
	printf("숫자 두개를 입력하세요 : ");
	scanf_s("%d %d", &a, &b);

	Switch(&a, &b);

	printf("%d %d\n", a, b);
}
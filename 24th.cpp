// 한 특정한 정수의 전체 자릿수를 결정하는 프로그램

#include <stdio.h>

int main(void) {
	int a = 0, i;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &a);

	for (i = 1;;i++) {
		a = a / 10;
		if (a == 0)
			break;
	}

	printf("입력하신 정수는 %d자리 수 입니다.\n", i);
}
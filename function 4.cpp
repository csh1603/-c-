//실수를 정수로 바꾸면서 소수점 이하를 자르는 함수

#include <stdio.h>

int into(float ten) {
	int result = ten;
	return result;
}

int main(void) {
	float num = 0;

	printf("실수를 입력하세요 : ");
	scanf_s("%f", &num);

	printf("%d\n", into(num));
}
//정수를 입력받아 각 자릿수의 합을 구하는 재귀 함수

#include <stdio.h>

int rSum(int n) {
	int sum = 0;

	if (n / 10 == 0)
		return n;
	else
		return n % 10 + rSum(n / 10);
}

int main(void) {
	int num = 0;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);

	printf("%d\n", rSum(num));
}
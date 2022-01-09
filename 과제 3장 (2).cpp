//1부터 n까지의 짝수의 합과 홀수의 합을 출력

#include<stdio.h>

int main(void) {
	int num, odd = 0, even = 0;

	printf("정수 하나를 입력하세요 : ");
	scanf_s("%d", &num);

	for (int i = 1;i <= num;i++) {
		if (i % 2 == 0)
			even = even + i;
		else
			odd = odd + i;
	}
	printf("짝수의 합은 %d이고, 홀수의 합은 %d이다.\n", even, odd);
}
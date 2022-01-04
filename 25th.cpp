// 숫자를 입력받아 소수인지 아닌지 검사하는 프로그램

#include <stdio.h>

int main(void) {
	int num = 0;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);

	for (int i = 2;i < num;i++) {
		if (num % i == 0) {
			printf("입력하신 수는 소수가 아닙니다.\n");
			break;
		}
		else if (i == num - 1) {
			printf("입력하신 수는 소수입니다.\n");
			break;
		}
	}
}
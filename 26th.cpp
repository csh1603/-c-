//100이하의 소수를 모두 출력하는 프로그램

#include <stdio.h>

int main(void) {
	printf("1부터 100까지의 정수 중 소수는 2, ");
	for (int i = 3;i <= 100;i++) {
		for (int j = 2;j < i;j++) {
			if (i % j == 0) {
				break;
			}
			else if (j == i - 1) {
				printf("%d ,", i);
				break;
			}
		}
	}
	printf("입니다.\n");
}
//소수 검사와 흡사하게 사용자가 입력한 인수들을 모두 출력하는 프로그램
#include <stdio.h>


int main(void) {
	int i = 0, n = 0;

	while (1) {
		printf("양의 정수 하나를 입력하세요 : ");
		scanf_s("%d", &n);

		if (n == 0)
			break;
		else {
			printf("%d => ", n);
			for (i = 2;i < n;i++) {
				if (n % i == 0)
					printf("%d ", i);
			}
			printf("\n");
		}
	}
}
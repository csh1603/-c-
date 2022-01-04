//라인 수를 입력 받아 그 줄 수 만큼 별표 삼각형 만들기

#include <stdio.h>

int main(void) {
	int line;

	printf("줄 수를 입력하세요 : ");
	scanf_s("%d", &line);

	for (int i = 1;i <= line;i++) {
		for (int j = 1;j < 2 * i;j = j + 2) {
			printf("*");
		}
		printf("\n");
	}
}
//어떤 양의 정수를 입력받아 그 수의 2배를 구하는 프로그램

#include <stdio.h>

int main(void) {
	int n;
	
	while (1) {
		printf("양의 정수를 입력하세요 : ");
		scanf_s("%d", &n);

		if (n <= 0) {
			printf("error!\n");
		}
		else {
			printf("입력하신 수의 2배는 %d입니다.\n", 2 * n);
			break;
		}
	}
}
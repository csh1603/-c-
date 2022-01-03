//1부터 9 사이의 숫자 하나를 입력 받아 그 숫자의 구구단을 출력하는 프로그램
#include <stdio.h>

int main(void) {
	int i = 0, j = 0;
	
	while (1) {
		printf("1부터 9까지의 정수 중 하나를 입력하세요 : ");
		scanf_s("%d", &j);

		if (j > 9 || j < 1) {
			printf("다시 입력하세요\n");
		}
		else {
			for (i = 1; i < 10;i++) {
				printf("%d * %d = %d\n", j, i, j * i);
			}
			break;
		}
			
	}
}
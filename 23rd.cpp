//1~100 사이의 숫자 하나를 정한 뒤 10번 이내로 맞추는 프로그램

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a = 0, i, num;
	num = rand() % 100;

	for (i = 0;i < 10;i++) {
		printf("숫자를 입력하세요 : ");
		scanf_s("%d", &a);

		if (a > num) {
			printf("입력하신 숫자보다 작습니다.\n");
			continue;
		}
		else if (a < num) {
			printf("입력하신 숫자보다 큽니다.\n");
			continue;
		}
		else {
			printf("정답입니다!\n");
			break;
		}
		printf("Game Over");
	}
}
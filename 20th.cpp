// 0이 입력될 때까지 입력 받은 정수 중 가장 큰 정수를 출력하는 프로그램

#include <stdio.h>

int main(void) {
	int max = 0, num;

	while (1) {
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &num);

		if (num == 0)
			break;
		else {
			if (max < num)
				max = num;
		}
	}
	printf("입력한 정수 중에 가장 큰 수는 %d입니다.\n", max);
}
//0을 입력할 때까지 숫자 입력 받고 최댓값 출력

#include <stdio.h>

int main(void) {

	int num=1, max = 0;
	printf("숫자를 입력하세요 (0을 입력하면 종료) : \n");
	while (1) {
		if (num == 0)
			break;
		else {
			scanf_s("%d", &num);
			if (max < num)
				max = num;
		}
	}
	printf("가장 큰 수는 %d입니다.\n", max);
}
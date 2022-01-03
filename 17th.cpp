//0이 입력될 때까지 계속 정수를 입력 받고, 입력된 모든 숫자들의 총합 출력

#include <stdio.h>

int main(void) {
	int a = 0, n = 0;

	while (1) {
		printf("정수 하나를 입력하세요 (0을 입력하면 종료됩니다.) : ");
		scanf_s("%d", &n);
		
		if (n == 0)
			break;
		else
			a = a + n;
	}

	printf("입력하신 모든 정수의 합은 %d입니다.\n", a);
	return 0;
}
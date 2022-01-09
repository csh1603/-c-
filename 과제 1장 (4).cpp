// x, y 좌표 입력 받고 속하는 사분면 출력

#include <stdio.h>

int main(void) {
	int x, y;

	printf("x좌표와 y좌표를 입력하세요 : ");
	scanf_s("%d %d", &x, &y);

	if (x > 0) {
		if (y > 0)
			printf("1사분면\n");
		else
			printf("4사분면\n");
	}
	else {
		if (y > 0)
			printf("2사분면\n");
		else
			printf("3사분면\n");
	}
}
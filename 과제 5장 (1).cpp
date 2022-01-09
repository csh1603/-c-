//약수를 x, y좌표로 하는 점 출력

#include <stdio.h>

int main(void) {
	int one, two;

	printf("두 개의 양의 정수를 입력하세요 : ");
	scanf_s("%d %d", &one, &two);

	for (int i = 1;i <= one;i++) {
		if (one % i == 0) {
			for (int j = 1;j <= two;j++) {
				if (two % j == 0)
					printf("%d %d\n", i, j);
			}
		}
	}
}
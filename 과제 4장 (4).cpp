// a부터 b까지 제곱수의 합 구하기

#include <stdio.h>

int main(void) {
	int a, b, count = 0, min = 1;

	printf("2개의 숫자를 입력하세요 : ");
	scanf_s("%d %d", &a, &b);

	for (int i = a;i <= b;b++) {
		for (int j = 1;j * j < i+1;j++) {
			if (i == j * j) {
				count = count + i;
				break;
				if (min > i)
					min = i;
			}
		}
	}
	if (count > 0)
		printf("%d\n%d\n", count, min);
	else
		printf("-1\n");
}
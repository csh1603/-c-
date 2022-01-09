#include <stdio.h>

int main(void) {
	int n, one = 0, two = 0, three = 0;
	int i, j;

	printf("양의 정수를 입력하세요 : ");
	scanf_s("%d", &n);

	for (i = 1;i <= 100;i++) {
		one = one + (n * i);
	}
	for (i = 1;i <= n;i++) {
		two = two + (i * i);
	}
	for (i = 1, j = n;i <= n;i++, j--) {
		three = three + (i * j);
	}

	printf("%d\n%d\n%d\n", one, two, three);

}
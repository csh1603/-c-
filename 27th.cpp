//숫자 하나를 입력받고 그 숫자 이하의 소수들의 합을 구하는 프로그램

#include <stdio.h>

int main(void) {
	int num, all = 0;

	printf("정수를 하나 입력하세요 : ");
	scanf_s("%d", &num);

	for (int i = 3;i <= num;i++) {
		for (int j = 2;j <= i;j++) {
			if (i % j == 0) {
				break;
			}
			else if (i == j) {
				all = all + i;
				break;
			}
		}
	}
	printf("총합은 %d입니다.\n", 2+all);
}
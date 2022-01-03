//7부터 입력받은 수까지 모든 정수의 합을 구하는 프로그램

#include <stdio.h>

int main(void) {
	int num, all = 0, i;

	printf("7보다 큰 정수 하나를 입력하세요 : ");
	scanf_s("%d", &num);

	int j = num;

	if (num < 7)
		printf("error!\n");
	else {
		for (i = 0;i <= j - 7;i++) {
			all = all + num;
			num--;
		}
		printf("7부터 입력하신 수까지 모든 정수의 합은 %d입니다.\n", all);
	}
}
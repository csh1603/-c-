//시간 입력을 초로 환산하는 함수를 작성

#include <stdio.h>

int tran(int hour, int minute, int second, int tot);

int main(void) {
	int hou, min, sec, total = 0;

	printf("시간을 입력하세요 : ");
	scanf_s("%d", &hou);

	printf("분을 입력하세요 : ");
	scanf_s("%d", &min);

	printf("초를 입력하세요 : ");
	scanf_s("%d", &sec);

	total = tran(hou, min, sec, total);
	printf("초로 바꾸면 %d입니다.\n", total);
}

int tran(int hour, int minute, int second, int tot) {
	tot = hour * 3600 + minute * 60 + second;
	return tot;
}
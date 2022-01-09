//시작 시간을 입력받고, 걸린 시간을 입력 받으면 현재 시간을 출력

#include <stdio.h>

int main(void) {
	int hour=0, min=0, time=0;

	printf("시작 시간과 분을 입력하세요 : ");
	scanf_s("%d %d", &hour, &min);
	printf("걸린 시간을 입력하세요 : ");
	scanf_s("%d", &time);

	min = min + time;
	while (min >= 60) {
		min = min - 60;
		hour = hour + 1;
	}
	printf("종료 시간은 %d %d 입니다.\n", hour, min);
}
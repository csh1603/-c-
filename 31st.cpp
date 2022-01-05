// 크기가 10인 정수 배열을 사용해서 학생 10명의 성적 입력 받은 후, 성적 총합, 평균점수, 최고와 최저 점수 출력

#include<stdio.h>

int main(void) {
	int arr[10];
	int all = 0, avr = 0, min = 100, max = 0;

	for (int i = 0;i < 10;i++) {
		printf("학생 %d의 성적을 입력하세요 : ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0;i < 10;i++) {
		all = all + arr[i];
		if (arr[i] > max)
			max = arr[i];
		else if (arr[i] < min)
			min = arr[i];
	}

	avr = all / 10;
	printf("총합: %d\n평균: %d\n최고점: %d\n최저점: %d\n", all, avr, max, min);
}
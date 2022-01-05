//학생 3명의 학급에서 각각 국어 영어 수학의 시험 성적을 배열을 이용하여 입력 받은 후, 각 과목의 합과 평균을 출력하는 프로그램

#include <stdio.h>

int main(void) {
	int arr[3][3], total = 0;

	for (int i = 0;i < 3;i++) {
		printf("학생 %d: ", i + 1);
		for (int j = 0;j < 3;j++) {
			scanf_s("%d", &arr[i][j]);
		}
		printf("\n");
	}

	printf("Kor Eng Math Total Avg\n");
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			printf("%d ", arr[i][j]);
			total = total + arr[i][j];
		}
		printf("%d %d\n", total, total / 3);
	}
}
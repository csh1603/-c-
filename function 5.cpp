//점수를 학점으로 변환하는 함수

#include <stdio.h>

char grade(int score) {
	if (score <= 100 && score >= 80)
		return 'A';
	else if (score < 80 && score >= 70)
		return 'B';
	else if (score < 70 && score >= 60)
		return 'C';
	else if (score < 60 && score >= 50)
		return 'D';
	else if (score < 50)
		return 'F';
}

int main(void) {
	int sco;

	printf("성적을 입력하세요 : ");
	scanf_s("%d", &sco);

	printf("당신의 학점은 %c입니다.\n", grade(sco));
}
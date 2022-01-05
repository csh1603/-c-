//학생 3명의 시험 성적을 입력받고 각 과목 총합과 평균 출력

#include <stdio.h>

struct student_t {
	int kor, math, eng;
};

int main(void) {
	struct student_t p1, p2, p3;

	printf("학생 1의 성적을 입력하세요 : ");
	scanf_s("%d", &p1.kor);
	scanf_s("%d", &p1.math);
	scanf_s("%d", &p1.eng);

	printf("학생 2의 성적을 입력하세요 : ");
	scanf_s("%d", &p2.kor);
	scanf_s("%d", &p2.math);
	scanf_s("%d", &p2.eng);

	printf("학생 3의 성적을 입력하세요 : ");
	scanf_s("%d", &p3.kor);
	scanf_s("%d", &p3.math);
	scanf_s("%d", &p3.eng);

	printf("국어 점수의 총합은 %d이고, 평균은 %d입니다.\n", p1.kor + p2.kor + p3.kor, (p1.kor + p2.kor + p3.kor) / 3);
	printf("수학 점수의 총합은 %d이고, 평균은 %d입니다.\n", p1.math + p2.math + p3.math, (p1.math + p2.math + p3.math) / 3);
	printf("영어 점수의 총합은 %d이고, 평균은 %d입니다.\n", p1.eng + p2.eng + p3.eng, (p1.eng + p2.eng + p3.eng) / 3);
}
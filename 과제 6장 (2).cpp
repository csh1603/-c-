 //학생 3명의 (학번, 이름, 학점)을 입력 받아 저장하는 구조체 배열을 만들고, 이름을 입력받아 해당 학생의 정보를, 그리고 학점을 입력받아 입력받은 학점 이상의 점수를 받은 학생의 정보를 출력하는 프로그램

#include <stdio.h>
#include <string.h>

typedef struct {
	int num;
	char name[20];
	float grade;
}student;

void input(student s[]) {
	for (int i = 0;i < 3;i++) {
		scanf("%d %s %f", &s[i].num, &s[i].name, &s[i].grade);
	}
}

void findByName(student s[]) {
	char nam[20];
	scanf("%s", &nam);
	for (int i = 0;i < 3;i++) {
		if (strcmp(nam, s[i].name) == 0) {
			printf("%d %s %f\n", s[i].num, s[i].name, s[i].grade);
		}
	}
}

void findByScore(student s[]) {
	int score;
	scanf("%f", &score);
	for (int i = 0;i < 3;i++) {
		if (score == s[i].grade) {
			printf("%d %s %f\n", s[i].num, s[i].name, s[i].grade);
		}
	}
}

int main(void) {
	student s[3];

	input(s);
	findByName(s);
	findByScore(s);

}
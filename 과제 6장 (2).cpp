 //�л� 3���� (�й�, �̸�, ����)�� �Է� �޾� �����ϴ� ����ü �迭�� �����, �̸��� �Է¹޾� �ش� �л��� ������, �׸��� ������ �Է¹޾� �Է¹��� ���� �̻��� ������ ���� �л��� ������ ����ϴ� ���α׷�

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
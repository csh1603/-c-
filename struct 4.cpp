//학생의 이름, 주소, 전화번호, 전공 등을 멤버로 하는 구조체를 정의하고 학생의 이름을 입력받으면 해당 학생의 인적 사항 출력

#include <stdio.h>
#include <string.h>

struct student_t {
	char name[100];
	char address[200];
	char major[100];
};

int main(void) {
	struct student_t p[3];
	char a[100];

	for (int i = 0;i < 3;i++) {
		printf("학생 %d의 이름을 입력하세요 : ", i+1);
		scanf("%s", p[i].name);
		printf("학생 %d의 주소를 입력하세요 : ", i + 1);
		scanf("%s", p[i].address);
		printf("학생 %d의 전공을 입력하세요 : ", i + 1);
		scanf("%s", p[i].major);
	}

	printf("어떤 학생의 정보가 궁금하십니까?\n");
	scanf("%s", &a);

	for (int i = 0;i < 3;i++) {
		if (strcmp(a, p[i].name) == 0) {
			printf("%s 학생의 주소는 %s이고 전공은 %s입니다.\n", p[i].name, p[i].address, p[i].major);
			break;
		}
		else if (i == 2)
			printf("찾으시는 학생의 정보가 없습니다.\n");
	}
}
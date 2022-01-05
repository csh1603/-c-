// 사람의 이름을 입력받으면 전화번호를 출력하는 프로그램을 작성

#include <stdio.h>
#include <string.h>

struct phonebook_t {
	char name[100];
	int num;
};

int main(void) {
	struct phonebook_t p[3];
	char know[100];

	for (int i = 0;i < 3;i++) {
		printf("이름과 번호를 순서대로 입력해주세요 : ");
		scanf("%s", p[i].name);
		scanf("%d", &p[i].num);
	}

	printf("이름을 입력하세요 : ");
	scanf("%s", know);

	for (int i = 0;i < 3;i++) {
		if (strcmp(know, p[i].name) != 0) {
			printf("%d\n", p[i].num);
			break;
		}
		else if (i == 2) {
			printf("존재하지 않는 이름입니다.\n");
		}
	}


}
//(계좌번호, 이름, 잔액)을 갖는 구조체 선언 후 출력
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int num, rem;
	char name[20];
}Bank;

void test(Bank* a);

int main(void) {
	Bank inf;
	printf("계좌번호, 이름, 잔액을 순서대로 입력하세요 : ");

	test(&inf);
}

void test(Bank* a) {
	scanf("%d %s %d", &a->num, &a->name, &a->rem);
	printf("%s의 %d 계좌의 잔액은 %d원\n", a->name, a->num, a->rem);
}
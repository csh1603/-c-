//(���¹�ȣ, �̸�, �ܾ�)�� ���� ����ü ���� �� ���
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int num, rem;
	char name[20];
}Bank;

void test(Bank* a);

int main(void) {
	Bank inf;
	printf("���¹�ȣ, �̸�, �ܾ��� ������� �Է��ϼ��� : ");

	test(&inf);
}

void test(Bank* a) {
	scanf("%d %s %d", &a->num, &a->name, &a->rem);
	printf("%s�� %d ������ �ܾ��� %d��\n", a->name, a->num, a->rem);
}
//�ҹ��ڸ� �빮�ڷ� ��ȯ�ϴ� �Լ�


#include <stdio.h>
#include <string.h>
#include <ctype.h>

char upper(char any) {
	char cap;
	if (isalpha(any) != 0) {
		cap = toupper(any);
	}
	else
		cap = '?';
	return cap;
}

int main(void) {
	char one;

	printf("�� ���� �ҹ��ڸ� �Է��ϼ��� : ");
	scanf_s("%c", &one);

	printf("%c\n", upper(one));
}
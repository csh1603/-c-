//소문자를 대문자로 변환하는 함수


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

	printf("한 개의 소문자를 입력하세요 : ");
	scanf_s("%c", &one);

	printf("%c\n", upper(one));
}
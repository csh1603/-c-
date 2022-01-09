//대문자, 소문자, 그 외 문자인지 검사하는 함수

#include <stdio.h>
#include <ctype.h>

void  checkChar(char c) {
	if (isalpha(c) != 0) {
		if (isupper(c) != 0)
			printf("Uppercase\n");
		else
			printf("Lowercase\n");
	}
	else
		printf("Etc\n");
}

int main(void) {
	char s;

	while (1) {
		printf("문자 하나를 입력하세요 : ");
		scanf("%c", &s);

		if (s == 'q')
			break;
		else {
			checkChar(s);
			break;
		}
	}

}
//문자 입력 받고 아스키 코드 출력

#include <stdio.h>

int main(void) {
	char c;

	printf("문자 1개를 입력하세요 : ");
	scanf_s("%c", &c);

	printf("%d %d %d %d\n", c, c + 1, c + 2, c + 3);
	printf("%c %c %c %c\n", c, c + 1, c + 2, c + 3);
}
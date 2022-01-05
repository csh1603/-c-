//문자열의 문자 개수를 출력하는 프로그램

#include <stdio.h>
#include <string.h>
#define MAX 100;

int main(void) {
	char mes;

	printf("문자열을 입력하세요 : ");
	scanf_s("%s", &mes);

	printf("문자 개수는 %d입니다.\n", strlen());
}
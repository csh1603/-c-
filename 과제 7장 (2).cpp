//공백 문자의 개수 출력

#include <stdio.h>
#define IS_SPACE(c) ((c)==' ');

int main(void) {
	char s[100];
	int i = 0, count = 0;

	fgets(s, sizeof(s), stdin);

	while (s[i] != NULL) {
		if ( IS_SPACE(s[i]) ) //이해 안 됨..
			count++;
		i++;
	}
	printf("%d\n", count);
	return 0;
}
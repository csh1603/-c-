//�빮��, �ҹ���, �� �� �������� �˻��ϴ� �Լ�

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
		printf("���� �ϳ��� �Է��ϼ��� : ");
		scanf("%c", &s);

		if (s == 'q')
			break;
		else {
			checkChar(s);
			break;
		}
	}

}
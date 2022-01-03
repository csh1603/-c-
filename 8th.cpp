#include <stdio.h>

int main(void) {
	int a;

	printf("점수를 입력하세요 : ");
	scanf_s("%d", &a);

	if (a <= 100 && a >= 80)
		printf("당신의 등급은 A입니다.\n");
	else if (a<80 && a>=60)
		printf("당신의 등급은 B입니다.\n");
	else if (a < 60 && a >= 40)
		printf("당신의 등급은 C입니다.\n");
	else if (a < 40 && a >= 20)
		printf("당신의 등급은 D입니다.\n");
	else if (a < 20 && a >= 0)
		printf("당신의 등급은 E입니다.\n");
	
	return 0;
}
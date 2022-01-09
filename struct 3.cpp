//복소수를 저장할 수 있는 구조체를 정의하고, 사용자로부터 2개의 복소수를 입력 받아 그 합 구하기

#include <stdio.h>

struct complex {
	int a = 0, b = 0;
};

int main(void) {
	struct complex p[2];
	
	for (int x = 0;x < 2;x++) {
		printf("복소수를 입력하세요 : ");
		scanf_s("%d + %di", &p[x].a, &p[x].b);
	}

	printf("두 복소수의 합은 %d+%di입니다.\n", p[0].a + p[1].a, p[0].b + p[1].b);
}
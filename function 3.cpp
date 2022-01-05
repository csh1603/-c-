// 어떤 한 수를 가장 가까운 100 단위로 정수화하는 함수

#include <stdio.h>

int hun(int num) {
	int fir = num;
	for (int i = 0;;i++) {
		num = fir * i;
		if (num > 100)
			break;
	}
	int over = num - 100;
	int under = 100 - (num - fir);
	if (over > under)
		return num - fir;
	else
		return num;
}

int main(void) {
	int hund;

	printf("실수를 입력하세요 : ");
	scanf_s("%d", &hund);

	printf("100에 가장 가까운 배수는 %d입니다.\n", hun(hund));
}
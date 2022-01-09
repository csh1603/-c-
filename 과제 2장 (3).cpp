/*상자 안에 0부터 9까지 숫자가 적혀 있는 카드가 있습니다. 카드는 각 숫자마다 3장씩 모두 30장이 있
습니다. 당신이 상자에서 3장의 카드를 뽑으면 아래의 규칙에 따라 상금을 받을 수 있습니다. 
① 같은 숫자 3개가 나오는 경우 : 10,000원 + (같은 숫자) × 1,000원
② 같은 숫자 2개가 나오는 경우 : 1,000원 + (같은 숫자) × 100원
③ 모두 다른 경우 : (카드 중 가장 큰 숫자) × 100원 
*/

#include <stdio.h>

int main(void) {
	int a, b, c;

	printf("0부터 9까지의 수 중 3개를 입력하세요 : ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a == b) {
		if (a == c)
			printf("%d\n", 10000 + a * 1000);
		else
			printf("%d\n", 1000 + a * 100);
	}
	if (a == c) {
		if (a != b) 
			printf(" % d\n", 1000 + a * 100);
	}
	if (b == c){
		if (a != c)
			printf("% d\n", 1000 + a * 100);
	}
	else if (a != b && b != c && a != c) {
		if (a > b && a > c)
			printf("%d\n", a * 100);
		if (b > a && b > c)
			printf("%d\n", b * 100);
		if (c > a && c > b)
			printf("%d\n", c * 100);
	}
}
//햄버거 한 개의 가격이 K, 사려고 하는 햄버거의 개수가 N개, 현재 당신의 지갑에 있는 돈이 M원이라 할 때, 햄버거를 사기 위해 모자란돈의 액수를 알려주는 프로그램

#include <stdio.h>

int main(void) {
	int K, N, M;

	printf("햄버거 한 개의 가격, 개수, 현재 가지고 있는 돈을 입력하세요 : ");
	scanf_s("%d %d %d", &K, &N, &M);

	if (K * N > M) {
		printf("%d\n", K * N - M);
	}
	else
		printf("0\n");
}
//동적 메모리 할당 이용, 합 구하는 프로그램

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size, i;
	int sum = 0;

	printf("몇 개의 정수를 입력하시겠습니까? : ");
	scanf("%d", &size);

	int*arr = (int*)malloc(sizeof(int) * size);
	if (arr == NULL) {
		printf("동적 메모리 할당 실패\n");
		return -1;
	}

	printf("%d개의 정수를 입력하세요 : ", size);
	for (i = 0;i < size;i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0;i < size;i++)
		sum = sum + arr[i];

	printf("합계 : %d\n", sum);

	free(arr);
	arr = NULL;

	return 0;
}
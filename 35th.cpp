//정수형 데이터를 갖는 3X3 행렬 2개를 입력받아 그 곱을 출력하는 프로그램

#include <stdio.h>

int main(void) {
	int arr1[3][3];
	int arr2[3][3];


	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			printf("[%d][%d] : ", i + 1, j + 1);
			scanf_s("%d ", &arr1[i][j]);
		}
	}

	for (int a = 0;a < 3;a++) {
		for (int b = 0;b < 3;b++) {
			printf("[%d][%d] : ", a + 1, b + 1);
			scanf_s("%d ", &arr2[a][b]);
		}
	}
	printf("두 행렬의 곱은 : \n");
	for (int x = 0;x < 3;x++) {
		for (int y = 0;y < 3;y++) {
			printf("%d ", arr1[x][y] * arr2[x][y]);
		}
		printf("\n");
	}
}
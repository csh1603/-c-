//배열을 입력받고 입력받은 숫자가 배열에 몇 개 존재하는지 출력

#include <stdio.h>

int main(void) {
	int arr[10];
	int num = 0, a;

	printf("정수를 입력하세요 : ");

	for (int i = 0;i < 10;i++) 
		scanf_s("%d", &arr[i]);
	
	printf("검색하려는 숫자를 입력하세요 : ");
	scanf_s("%d", &a);

	for (int i = 0; i < 10;i++) {
		if (arr[i] == a)
			num++;
	}

	printf("=> 총 개수 : %d\n", num);
}
//�迭�� �Է¹ް� �Է¹��� ���ڰ� �迭�� �� �� �����ϴ��� ���

#include <stdio.h>

int main(void) {
	int arr[10];
	int num = 0, a;

	printf("������ �Է��ϼ��� : ");

	for (int i = 0;i < 10;i++) 
		scanf_s("%d", &arr[i]);
	
	printf("�˻��Ϸ��� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &a);

	for (int i = 0; i < 10;i++) {
		if (arr[i] == a)
			num++;
	}

	printf("=> �� ���� : %d\n", num);
}
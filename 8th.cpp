#include <stdio.h>

int main(void) {
	int a;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &a);

	if (a <= 100 && a >= 80)
		printf("����� ����� A�Դϴ�.\n");
	else if (a<80 && a>=60)
		printf("����� ����� B�Դϴ�.\n");
	else if (a < 60 && a >= 40)
		printf("����� ����� C�Դϴ�.\n");
	else if (a < 40 && a >= 20)
		printf("����� ����� D�Դϴ�.\n");
	else if (a < 20 && a >= 0)
		printf("����� ����� E�Դϴ�.\n");
	
	return 0;
}
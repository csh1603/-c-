//1���� 9 ������ ���� �ϳ��� �Է� �޾� �� ������ �������� ����ϴ� ���α׷�
#include <stdio.h>

int main(void) {
	int i = 0, j = 0;
	
	while (1) {
		printf("1���� 9������ ���� �� �ϳ��� �Է��ϼ��� : ");
		scanf_s("%d", &j);

		if (j > 9 || j < 1) {
			printf("�ٽ� �Է��ϼ���\n");
		}
		else {
			for (i = 1; i < 10;i++) {
				printf("%d * %d = %d\n", j, i, j * i);
			}
			break;
		}
			
	}
}
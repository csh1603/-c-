//�Ҽ� �˻�� ����ϰ� ����ڰ� �Է��� �μ����� ��� ����ϴ� ���α׷�
#include <stdio.h>


int main(void) {
	int i = 0, n = 0;

	while (1) {
		printf("���� ���� �ϳ��� �Է��ϼ��� : ");
		scanf_s("%d", &n);

		if (n == 0)
			break;
		else {
			printf("%d => ", n);
			for (i = 2;i < n;i++) {
				if (n % i == 0)
					printf("%d ", i);
			}
			printf("\n");
		}
	}
}
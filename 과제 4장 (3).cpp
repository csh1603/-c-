//2g, 3g, 5g�� �߰� ���� 10���� �ִµ� 1�� �̻� ����ؼ� ���� G�� �����ϴ� ��� ����� ��

#include <stdio.h>

int sumOfWeghit(int g) {
	int count = 0;
	for (int a = 1;a < 11;a++) {
		for (int b = 1;b < 11;b++) {
			for (int c = 1;c < 11;c++) {
				if (2 * a + 3 * b + 5 * c == 20) {
					printf("%d %d %d\n", a, b, c);
					count = count + 1;
				}
			}
		}
	}
	return count;
}

int main(void) {
	int w;

	printf("���Ը� �Է��ϼ��� : ");
	scanf_s("%d", &w);

	printf("%d\n", sumOfWeghit(w));
}
//0�� �Էµ� ������ ��� ������ �Է� �ް�, �Էµ� ��� ���ڵ��� ���� ���

#include <stdio.h>

int main(void) {
	int a = 0, n = 0;

	while (1) {
		printf("���� �ϳ��� �Է��ϼ��� (0�� �Է��ϸ� ����˴ϴ�.) : ");
		scanf_s("%d", &n);
		
		if (n == 0)
			break;
		else
			a = a + n;
	}

	printf("�Է��Ͻ� ��� ������ ���� %d�Դϴ�.\n", a);
	return 0;
}
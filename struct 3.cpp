//���Ҽ��� ������ �� �ִ� ����ü�� �����ϰ�, ����ڷκ��� 2���� ���Ҽ��� �Է� �޾� �� �� ���ϱ�

#include <stdio.h>

struct complex {
	int a = 0, b = 0;
};

int main(void) {
	struct complex p[2];
	
	for (int x = 0;x < 2;x++) {
		printf("���Ҽ��� �Է��ϼ��� : ");
		scanf_s("%d + %di", &p[x].a, &p[x].b);
	}

	printf("�� ���Ҽ��� ���� %d+%di�Դϴ�.\n", p[0].a + p[1].a, p[0].b + p[1].b);
}
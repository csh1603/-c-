//�л� 3���� ���� ������ �Է¹ް� �� ���� ���հ� ��� ���

#include <stdio.h>

struct student_t {
	int kor, math, eng;
};

int main(void) {
	struct student_t p1, p2, p3;

	printf("�л� 1�� ������ �Է��ϼ��� : ");
	scanf_s("%d", &p1.kor);
	scanf_s("%d", &p1.math);
	scanf_s("%d", &p1.eng);

	printf("�л� 2�� ������ �Է��ϼ��� : ");
	scanf_s("%d", &p2.kor);
	scanf_s("%d", &p2.math);
	scanf_s("%d", &p2.eng);

	printf("�л� 3�� ������ �Է��ϼ��� : ");
	scanf_s("%d", &p3.kor);
	scanf_s("%d", &p3.math);
	scanf_s("%d", &p3.eng);

	printf("���� ������ ������ %d�̰�, ����� %d�Դϴ�.\n", p1.kor + p2.kor + p3.kor, (p1.kor + p2.kor + p3.kor) / 3);
	printf("���� ������ ������ %d�̰�, ����� %d�Դϴ�.\n", p1.math + p2.math + p3.math, (p1.math + p2.math + p3.math) / 3);
	printf("���� ������ ������ %d�̰�, ����� %d�Դϴ�.\n", p1.eng + p2.eng + p3.eng, (p1.eng + p2.eng + p3.eng) / 3);
}
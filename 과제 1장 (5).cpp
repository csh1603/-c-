// ���� ǥ������ ü���� ���ϴ� ���α׷�

#include <stdio.h>
#define PI 3.14

int main(void) {
	float rad;

	printf("�������� �Է��ϼ��� : ");
	scanf_s("%f", &rad);

	printf("���� ǥ������ %f�̰�, ü���� %f�Դϴ�.\n", 4 * PI * rad * rad, 4 / 3 * PI * rad * rad * rad);
}
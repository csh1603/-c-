//�л��� �̸�, �ּ�, ��ȭ��ȣ, ���� ���� ����� �ϴ� ����ü�� �����ϰ� �л��� �̸��� �Է¹����� �ش� �л��� ���� ���� ���

#include <stdio.h>
#include <string.h>

struct student_t {
	char name[100];
	char address[200];
	char major[100];
};

int main(void) {
	struct student_t p[3];
	char a[100];

	for (int i = 0;i < 3;i++) {
		printf("�л� %d�� �̸��� �Է��ϼ��� : ", i+1);
		scanf("%s", p[i].name);
		printf("�л� %d�� �ּҸ� �Է��ϼ��� : ", i + 1);
		scanf("%s", p[i].address);
		printf("�л� %d�� ������ �Է��ϼ��� : ", i + 1);
		scanf("%s", p[i].major);
	}

	printf("� �л��� ������ �ñ��Ͻʴϱ�?\n");
	scanf("%s", &a);

	for (int i = 0;i < 3;i++) {
		if (strcmp(a, p[i].name) == 0) {
			printf("%s �л��� �ּҴ� %s�̰� ������ %s�Դϴ�.\n", p[i].name, p[i].address, p[i].major);
			break;
		}
		else if (i == 2)
			printf("ã���ô� �л��� ������ �����ϴ�.\n");
	}
}
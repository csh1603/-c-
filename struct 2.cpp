// ����� �̸��� �Է¹����� ��ȭ��ȣ�� ����ϴ� ���α׷��� �ۼ�

#include <stdio.h>
#include <string.h>

struct phonebook_t {
	char name[100];
	int num;
};

int main(void) {
	struct phonebook_t p[3];
	char know[100];

	for (int i = 0;i < 3;i++) {
		printf("�̸��� ��ȣ�� ������� �Է����ּ��� : ");
		scanf("%s", p[i].name);
		scanf("%d", &p[i].num);
	}

	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", know);

	for (int i = 0;i < 3;i++) {
		if (strcmp(know, p[i].name) != 0) {
			printf("%d\n", p[i].num);
			break;
		}
		else if (i == 2) {
			printf("�������� �ʴ� �̸��Դϴ�.\n");
		}
	}


}
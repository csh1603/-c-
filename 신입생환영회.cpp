//�迭�� �Է� �ް� .. ���� ���α׷� ����

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 5
#define NUM 3

int main(void) {

	int List[NUM];

	char name[MAX][100] = {
		"���¤���",
		"�ƴ�",
		"�̰�",
		"��",
		"��",
	};

	srand((unsigned)time(NULL));

	for (int i = 0; i < NUM; i++) {
		int a = 0;
		int num = rand() % MAX;

		while (a < i) {

			if (List[a++] == num) {
				num = rand() % MAX;
				a = 0;
				continue;
			}
		}
		List[i] = num;
	}

	for (int i = 0; i < NUM; i++) {
		printf("%s\n", name[List[i]]);
	}
	return 0;

}
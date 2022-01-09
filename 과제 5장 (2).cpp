//µÚÁı±â

#include <stdio.h>

void inverse(int A[], int start, int end) {
	int temp;
	for (int i = 0;i <= (end - start) / 2;i++) {
		temp = A[start + i];
		A[start + i] = A[end - i];
		A[end - i] = temp;
	}
}

int main(void) {
	int n, m;
	int s, e;
	int A[100];

	scanf_s("%d", &n);
	for (int i = 0;i < n;i++)
		scanf_s("%d", &A[i]);

	scanf_s("%d", &m);
	for (int i = 0;i < m;i++) {
		scanf_s("%d %d", &s, &e);
		inverse(A, s, e);
	}

	for (int i = 0;i < n;i++)
		printf("%d ", A[i]);
	printf("\n");
}


//����� ���� ���ϴ� ���α׷�

#include <stdio.h>
#define PI 3.14
#define Volume(r,h) ((PI)*(r)*(r)*(h))

int main(void) {
	float r, h, volume;

	scanf_s("%f %f", &r, &h);
	volume = Volume(r, h);
	printf("%f\n", volume);
}
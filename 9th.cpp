#include <stdio.h>

int main(void) {
	char me[10];
	
	printf("choose one of the following.\napple\norange\nbanana\npeach\n\nenter your choice here : ");
	scanf("%s", me);

	printf("Your choice is ");
	printf("%s.\n", me);

	return 0;
}
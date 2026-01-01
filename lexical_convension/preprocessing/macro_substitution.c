#include <stdio.h>

/* macro substistution is both func and const */
#define TRUE	"true"
#define FALSE	"false"

#define MIN(x, y) ((x)) < ((y)) ? x : y

int main(void) {
	int x, y;

	printf("Enter x value : ");
	scanf("%d", &x);

	printf("\n\nEnter y value : ");
	scanf("%d", &y);

	if (x < y) {
		printf("\n%s\n", TRUE);
		printf("\nMIN : %d\n", MIN(x, y));
	}
	else {
		printf("%s\n", FALSE);
	}

	return 0;
}

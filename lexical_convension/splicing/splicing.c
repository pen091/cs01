#include <stdio.h>

#define MAX(x, y)  \
       	((x)) > ((y)) ? x : y

int main(void) {
	int x, y;

	printf("Enter X value : ");
	scanf("%d", &x);

	printf("\n\nEnter Y value ; ");
	scanf("%d", &y);	

	printf("%d\n", MAX(x, y));
	return 0;
}

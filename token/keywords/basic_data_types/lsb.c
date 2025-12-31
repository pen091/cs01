#include <stdio.h>
#include <stdlib.h>

void DecimalToBinary(int); /* prototype */

int main(void) {
	int choice;
	system("clear");

	printf("Enter value :" );
	scanf("%d", &choice);


	DecimalToBinary(choice);

	putchar('\n');
	  
	exit(EXIT_SUCCESS);
}

void DecimalToBinary(int n) {
	if (n > 0) {
		/* recursion Do the magic */
		DecimalToBinary(n / 2);
	}
	/* reverse the LSB to MSB */
	printf("%d", n % 2);
}

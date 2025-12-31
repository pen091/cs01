#include <stdio.h>
#include "../include/pen.h"
#include <stdlib.h>

int x;
int y;

void menu(void);

int main(void) {

	int choice, sum, product;

	printf("\t\t 1  ADD\n");
	printf("\t\t 2  SUB\n");
	printf("\t\t 0  Exit\n");

	printf("Choice : ");
	scanf("%d", &choice);

	switch (choice) {
		case 1 : printf("Set To Add\n\n");
			 menu();
			 sum = add(x, y);
			 printf("Sum : %d\n", sum);
			 break;

		case 2 : printf("Set To Sub\n\n");
			 menu();
			 product = sub(x, y);
			 printf("Product : %d\n", product);
			 break;

		case 0: printf("Bye bye\n\n");
			exit(EXIT_SUCCESS);

		defualt : printf("None\n\n");
			  exit(0);
	}

}

void menu(void) {	
	system("clear");
	printf("Enter First Number : ");
	scanf("%d", &x);
	printf("\n");
	printf("Enter First Number : ");
	scanf("%d", &y);
	printf("\n");
}
	


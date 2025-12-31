#include <stdio.h>

int main() {
	/* variable declaration
	 *
	 * type : char
	 * identifier : name of mem addr
	 * terminator : ;
	 *
	 * variable initailization
	 *
	 * type : char
	 * id : name of mem
	 * assignment : =
	 * constant : value
	 * terminate : ;
	 *
	 * */

	/* variable decleration */
	char alphabet;
	int p;

	/* iniatialization */
	alphabet = 'T';

	p=putchar(alphabet);
	printf("\n%d", p);
	putchar('\n'); 
	return 0;
}

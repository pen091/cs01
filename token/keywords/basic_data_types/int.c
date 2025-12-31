#include <stdio.h>

int main() {
	/* variable declaration
	 *
	 * type : int
	 * identifier : name of mem addr
	 * terminator : ;
	 *
	 * variable initailization
	 *
	 * type : int
	 * id : name of mem
	 * assignment : =
	 * constant : value
	 * terminate : ;
	 *
	 * */

	/* variable decleration */
	int number;

	/* initialization 
	 * number : 0xaf33be978
	 * int : 32bit
	 * 0000 0000 0000 0000 
	 * 0000 0011 1110 1000 
	 *
	 * */
	number = 2000;

	printf("number : %d\n", number);
	return 0;
}

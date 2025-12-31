#include <stdio.h>

int main() {
	/* variable declaration
	 *
	 * type : void
	 * identifier : name of mem addr
	 * terminator : ;
	 *
	 * variable initailization
	 *
	 * type : void
	 * id : name of mem
	 * assignment : =
	 * constant : value
	 * terminate : ;
	 *
	 * */

	/* variable decleration */
	void *number;

	/* initialization 
	 * number : 0xaf33be978
	 * int : 32bit
	 * 0000 0000 0000 0000 
	 * 0000 0011 1110 1000 
	 *
	 * void : means NO TYPE aasigned
	 *
	 * */

	printf("void addr : %p\n", &number);
	return 0;
}

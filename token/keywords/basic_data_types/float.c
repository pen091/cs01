#include <stdio.h>

int main() {
	/* variable declaration
	 *
	 * type : float
	 * identifier : name of mem addr
	 * terminator : ;
	 *
	 * variable initailization
	 *
	 * type : float
	 * id : name of mem
	 * assignment : =
	 * constant : value
	 * terminate : ;
	 *
	 * */

	/* variable decleration */
	float pi;

	/* initialization 
	 * number : 0xaf33be978
	 * float : 32bit
	 * 0000 0000 0000 0000 
	 * 0000 0011 1110 1000 
	 *
	 * */
        pi = 2000;

	printf("pi : %.2f\n", pi);
	return 0;
}

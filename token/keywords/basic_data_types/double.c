#include <stdio.h>

int main() {
	/* variable declaration
	 *
	 * type : double
	 * identifier : name of mem addr
	 * terminator : ;
	 *
	 * variable initailization
	 *
	 * type : double
	 * id : name of mem
	 * assignment : =
	 * constant : value
	 * terminate : ;
	 *
	 * */

	/* variable decleration */
	double temperature;

	/* initialization 
	 * temperature : 0xaf33be978
	 * double : 64bit
	 * 0000 0000 0000 0000 
	 * 0000 0011 1110 1000 
	 *
	 * */
	temperature = 1000;

	printf("temperature : %.3lf\n", temperature);
	return 0;
}

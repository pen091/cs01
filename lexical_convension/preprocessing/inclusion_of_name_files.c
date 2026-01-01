/* include of name files is the use of include*/

#include <stdio.h> /* to use printf */
#include <unistd.h> /* to use sleep */

int main(void) {
	int x = 10;

	while (x >= 0) {
		printf("x : %d\n", x);
		sleep(2);
		x--;
	}
	return 0;
}

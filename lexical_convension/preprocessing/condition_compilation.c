#include <stdio.h>

#define X 21
#define Y 30

int main(void) {
#if X == Y
printf("x : %d\n", X);
#else 
printf("y : %d\n", Y);
#endif
	return 0;
}

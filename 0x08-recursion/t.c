#include "main.h"
#include <stdio.h>

int main(void)
{
	int x, y, z;

	x = _sqrt_recursion(36);
	y = _sqrt_recursion(18);
	z = _sqrt_recursion(-4);
	printf("x: %d\n", x);
	printf("y: %d\n", y);
	printf("z: %d\n", z);
	return (0);
}

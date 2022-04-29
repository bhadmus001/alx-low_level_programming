#include <stdio.h>
#include "main.h"

int main(void)
{
	/*int r, s, p;*/
	int k, q, y;
	/**
	r = factorial(-2);
	s = factorial(1);
	p = factorial(4);
	printf("r: %d\ns: %d\np: %d\nk: %d\n", r, s, p, k);
	*/
	k = _pow_recursion(2, 3);
	q = _pow_recursion(2, -1);
	y = _pow_recursion(2, 0);
	printf("k: %d\n", k);
	printf("q: %d\n", q);
	printf("y: %d\n", y);
	return (0);
}


#include "main.h"
/**
 * prime_c - check for a prime number
 * @x: number to be checked
 * @y: number of power
 * Return: return prime number
 */
int prime_c(int x, int y)
{
	if (x <= 1 || (x != y && x % y == 0))
		return (0);
		else if (x == y)
			return (1);
		return (prime_c(x, y + 1));
}

/**
 * is_prime_number - return 1 for prime number
 * @n: inputted number
 * Return: output
 */
int is_prime_number(int n)
{
	return (prime_c(n, 2));
}

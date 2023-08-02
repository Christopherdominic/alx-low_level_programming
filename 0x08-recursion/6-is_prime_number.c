#include "main.h"

/**
 * check - checks to see if number is prime
 * @c:int
 * @d:int
 * Return:int
 */
int check(int c, int d)
{
	if (c < 2 || d % c == 0)
		return (0);
	else if (c > d / 2)
		return (1);
	else
		return (check(c + 1, d));
}

/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}

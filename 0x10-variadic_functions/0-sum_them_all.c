#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int h;
	va_list a;

	va_start(a, n);

	if (n == 0)
		return (0);

	for (h = 0; h < n; h++)
		sum += va_arg(a, int);

	va_end(a);

	return (sum);
}

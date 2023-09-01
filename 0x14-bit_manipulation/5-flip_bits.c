#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int minus, result;
	unsigned int j, i;

	j = 0;
	result = 1;
	minus = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (minus & result))
			j++;
		result <<= 1;
	}

	return (j);
}

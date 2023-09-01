#include "main.h"
/**
 * _power - calculate (base and power)
 * @base: base of the exponet
 * @pow: power of the exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= pow; i++)
		num *= base;
	return (num);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin, result;
	char flag;

	flag = 0;
	bin = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (bin != 0)
	{
		result = n & bin;
		if (result == bin)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || bin == 1)
		{
			_putchar('0');
		}
		bin >>= 1;
	}
}


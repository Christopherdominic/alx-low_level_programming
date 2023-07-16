/*
 * File: 9-print_comb.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: success(0)
 */
int main(void)
{
int N;

for (N = 0; N <= 9; N++)
{
putchar((N % 10) + '0');
if (N == 9)
continue;

putchar(',');
putchar(' ');
}

	putchar('\n');

	return (0);
}

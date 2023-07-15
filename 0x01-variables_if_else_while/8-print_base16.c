/*
 * File: 8-print_base16.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: 0 (succes)
 */
int main(void)
{
	int N;
	char L;

	for (N = 0; N < 10; N++)
		putchar((N % 10) + '0');

	for (L = 'a'; L <= 'f'; L++)
		putchar(L);

	putchar('\n');

	return (0);
}

/*
 * File: 5-print_numbers.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints number 0123456789
 *
 * Return: success 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);

	printf("\n");

	return (0);
}

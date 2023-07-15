/*
 * File: 7-print_tebahpla.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse order.
 *
 * Return: o (success)
 */
int main(void)
{
	char R;

	for (R = 'z'; R >= 'a'; R--)
		putchar(R);
	putchar('\n');
	return (0);
}

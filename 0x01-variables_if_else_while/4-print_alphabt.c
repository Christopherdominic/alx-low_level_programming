/*
 * File: 4-print_alphabt.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints alphabet in lowercase, except for q and e.
 *
 * Return: return (0).
 */
int main(void)
{
	char myletter;

	for (myletter = 'a'; myletter <= 'z'; myletter++)
	{
		if (myletter != 'e' && myletter != 'q')
			putchar(myletter);
	}

	putchar('\n');

	return (0);
}

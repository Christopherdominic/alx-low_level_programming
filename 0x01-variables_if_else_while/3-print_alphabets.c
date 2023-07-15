/*
 * File: 3-print_alphabets.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints  alphabets in lowercase, and then in uppercase.
 *
 * Return: returns (0)
 */
int main(void)
{
	char smallletter;

	for (smallletter = 'a'; smallletter <= 'z'; smallletter++)
		putchar(smallletter);

	for (smallletter = 'A'; smallletter <= 'Z'; smallletter++)
		putchar(smallletter);

	putchar('\n');

	return (0);
}

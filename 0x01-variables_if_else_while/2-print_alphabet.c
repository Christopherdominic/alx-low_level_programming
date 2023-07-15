/*
 * File: 2-print_alphabet.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in smallcase.
 *
 * Return: returns (0)
 */
int main(void)
{
	char small_letter;

	for (small_letter = 'a'; small_letter <= 'z'; small_letter++)
		putchar(small_letter);

	putchar('\n');

	return (0);
}

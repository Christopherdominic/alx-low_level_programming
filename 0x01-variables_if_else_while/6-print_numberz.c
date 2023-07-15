/*
 * File: 6-print_numberz.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	putchar('\n');

	return (0);
}

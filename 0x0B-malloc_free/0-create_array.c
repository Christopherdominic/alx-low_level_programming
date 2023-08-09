#include <stdlib.h>
#include "main.h"

/**
  * create_array - creates an array of chars,
  * & initializes it with a specific char
  * @size: size of array to be created
  * @c: char to intialize the array
  * Return: NULL if size = 0 & a pointer to the array, or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *g;
	unsigned int z = 0;

	g = malloc(size * sizeof(char));

	if (g == NULL) /*qqq*/
		return (NULL);

	if (size == 0) /*rrrrr */
		return (NULL);

	for (; z < size; z++)
	{
		g[z] = c;
	}
	return (g);

}

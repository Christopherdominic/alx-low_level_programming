#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - add a new node at beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *sum;

	sum = malloc(sizeof(list_t));
	if (sum == NULL)
		return (NULL);
	sum->str = strdup(str);

	sum->len = _strlen(str);
	sum->next = *head;
	*head = sum;

	return (sum);
}

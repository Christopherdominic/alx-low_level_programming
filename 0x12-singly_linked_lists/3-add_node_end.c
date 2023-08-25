#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * str_len - finds the length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */
unsigned int str_len(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *dub, *tmp;

	if (str == NULL)
		return (NULL);
	dub = malloc(sizeof(list_t));
	if (dub == NULL)
		return (NULL);
	dub->str = strdup(str);
	if (dub->str == NULL)
	{
		free(dub);
		return (NULL);
	}
	dub->len = str_len(dub->str);
	dub->next = NULL;
	if (*head == NULL)
	{
		*head = dub;
		return (dub);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = dub;
	return (dub);
}

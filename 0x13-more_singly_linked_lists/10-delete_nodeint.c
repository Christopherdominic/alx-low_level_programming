#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: a double pointer
 * @index: an index of node
 *
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *ptr;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = (*head)->ptr;
		free(*head);
		*head = ptr;
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp->ptr == NULL)
			return (-1);
		temp = temp->ptr;
	}
	ptr = temp->ptr;
	temp->ptr = ptr->ptr;
	free(ptr);
	return (1);

}

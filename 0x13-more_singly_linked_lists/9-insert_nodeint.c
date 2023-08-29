#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserting a current node at a particular postion
 * @head: double pointer
 * @idx: index of the node
 * @n: current node value
 *
 * Return:  address of current node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *current;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	if (idx == 0)
	{
		current->next = *head;
		*head = current;
		return (current);
	}
	current->next = temp->next;
	temp->next = current;
	return (current);
}

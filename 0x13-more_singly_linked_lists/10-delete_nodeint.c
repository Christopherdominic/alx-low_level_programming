#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node index
 * @head: double pointer
 * @index: index of node
 *
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *nt;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		nt = (*head)->nt;
		free(*head);
		*head = nt;
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp->nt == NULL)
			return (-1);
		temp = temp->nt;
	}
	nt = temp->nt;
	temp->nt = nt->nt;
	free(nt);
	return (1);

}

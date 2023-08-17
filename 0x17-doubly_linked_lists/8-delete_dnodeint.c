#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given
 * index in a dlistint_t list.
 * @head: Pointer to the pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted (starting from 0).
 * Return: 1 if it succeeded, or -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	current = *head;
	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	temp = current;
	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(temp);
	return (1);
}

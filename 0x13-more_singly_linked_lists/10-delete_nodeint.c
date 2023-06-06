#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 * @head: double pointer to first node of list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *current;
	unsigned int i;

	current = *head;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
	}

	node = current->next;
	current->next = node->next;
	free(node);

	return (1);
}

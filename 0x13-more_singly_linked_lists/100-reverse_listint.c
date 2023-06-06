#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to first node
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = NULL, *last = NULL;

	while (*head != NULL)
	{
		first = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = first;
	}

	*head = last;
	return (*head);
}

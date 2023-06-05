#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer of first node
 *
 * Return: head node’s data (n), or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node;

	if (*head == NULL)
		return (0);

	temp = *head;
	node = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (node);
}

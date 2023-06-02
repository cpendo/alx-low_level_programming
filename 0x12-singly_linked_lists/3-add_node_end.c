#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to first node
 * @str: string to be added to list
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	size_t length = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	node->str = strdup(str);
	node->len = length;
	node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = node;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = node;
	}
	return (*head);
}

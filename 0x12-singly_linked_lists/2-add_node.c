#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to head
 * @str: string to be added to node
 *
 * Return: address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t length = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	node->str = strdup(str);
	node->len = length;
	node->next = *head;
	*head = node;

	return (*head);
}

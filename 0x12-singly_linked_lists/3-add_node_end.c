#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @head: adress of pointer to first node
 * @str: new string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list *node = *head;
	unsigned int len = 0;

	do {
		len++;
	} while (str[len]);

	new_node = malloc(sozeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (node->next)
	{
		node = node->next;
	}
	node->next = new_node;

	return (new_node);
}

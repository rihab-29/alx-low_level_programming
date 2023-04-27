#include "lists.h"

/**
 * add_node_end -adds a new node at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n ;
	list_t *t = *head;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	n = malloc(sizeof(list_t));
	if (!n)
	{
		return (NULL);
	}
	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (t->next)
	{
		t = t->next;
	}
	t->next = n;
	return (n);
}

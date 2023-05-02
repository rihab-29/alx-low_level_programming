#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head:pointer to the first node
 * Return: the head node’s data (n), 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (!*head || !head)
	{
		return (0);
	}
	else
	{
		i = (*head)->n;
		node = (*head)->next;
		free(*head);
		*head = node;
		return (i);
	}
}

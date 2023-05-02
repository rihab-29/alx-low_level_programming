#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node_pr = NULL;
	listint_t *next_node = NULL;

	if (!head || !*head)
	{
		return (NULL);
	}

	while (*head)
	{
		next_node = (*head)->next_node;
		(*head)->next_node = node_pr;
		node_pr = *head;
		*head = next_node;
	}
	*head = node_pr;

	return (*head);
}

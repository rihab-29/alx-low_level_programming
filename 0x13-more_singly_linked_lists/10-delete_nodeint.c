#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list.
 * @head: pointer to head node
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *node_pr;
	unsigned int i;

	i = 0;

	if (!*head || !head)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (node)
	{
		if (i == index)
		{
			node_pr->next = node->next;
			free(node);
			return (1);
		}
		i++;
		node_pr = node;
		node = node->next;
	}
	return (-1);
}

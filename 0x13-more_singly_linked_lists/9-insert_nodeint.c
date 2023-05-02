#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer of first node
 * @idx: the index of the list where the new node should be added
 * @n: new node's value
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node = *head;
	unsigned int i;

	if (!new_node || !head)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (idx == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; node && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		else
		{
			node = node->next;
		}
	}

	return (NULL);
}

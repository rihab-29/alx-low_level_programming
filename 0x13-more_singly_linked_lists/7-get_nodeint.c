#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: pointer to the head node
 * @index: the index of the node, starting at 0
 * Return: ponter to node, NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int n = 0;

	if (node)
	{
		while (n < index)
		{
			node = node->next;
			n++;
		}
		return (node);
	}
	else
	{
		return (NULL);
	}
}

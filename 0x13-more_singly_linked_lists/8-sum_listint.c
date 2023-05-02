#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list
 * @head: pointer to first node
 * Return: sum of all the data (n), 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum;

	sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}

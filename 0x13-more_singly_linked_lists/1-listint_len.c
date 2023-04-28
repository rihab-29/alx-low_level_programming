#include "lists.h"

/**
 * listint_len - returns the number of elements in listint_t list
 * @h: pointer to the head node
 * Return: number of elements in listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}

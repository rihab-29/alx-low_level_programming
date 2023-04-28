#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the first node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	do {
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else if (!h->str)
			printf("[0] (nil)\n");
		h = h->next;
		n++;
	} while (h);
	return (n);
}

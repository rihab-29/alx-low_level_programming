#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	if (!s)
	{
		return (0);
	}
	do {
		i++;
	} while (*s++);

	return (i);
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: header (pointer to the first node)
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}

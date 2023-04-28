#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the first node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", _strlen(h->str));
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		s++;
	}
	return (s);
}

/**
 * _strlen - returns the length of string
 * @str: string to check
 * Return: length
 */
int _strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	do {
		i++;
	} while (*str++);

	return (i);
}

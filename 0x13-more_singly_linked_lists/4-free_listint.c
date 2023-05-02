#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	if (!head)
	{
		return;
	}
	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}

#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h ; i++)
	{
		if (h->str == '\0')
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
	}

	return (i);
}

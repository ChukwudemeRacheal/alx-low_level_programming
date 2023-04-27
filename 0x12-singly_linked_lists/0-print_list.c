#include <stdio.h>
#include "lists.h"

/**
 * print_list - that prints all the elements of a list_t list
 * @h: pointer to the list of the print
 *
 * Reture: the number of the nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}

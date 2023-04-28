#include <stdio.h>
#include "lists.h"

/**
 * print_list - that prints all the elements of a list_t list
 * @h: pointer to the list
 *
 * Reture: the number of the nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	s = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		s++;
	}
	return (s);
}

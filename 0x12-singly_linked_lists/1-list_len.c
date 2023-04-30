#include <stdlib.h>
#include "lists.h"

/**
 * list_len - the number of elements in a linked list_t list.
 * @h: pointer to the list_t list
 *
 * return: char counter
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}

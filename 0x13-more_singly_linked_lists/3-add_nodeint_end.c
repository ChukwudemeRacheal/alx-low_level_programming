#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: first element in the list pointer
 * @n: to insert data of new element
 *
 * Return: the new node, or NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *N;
	listint_t *T = *head;

	N = malloc(sizeof(listint_t));
	if (!N)
		return (NULL);

	N->n = n;
	N->next = NULL;

	if (*head == NULL)
	{
		*head = N;
		return (N);
	}
	while (T->next)
		T = T->next;
	T->next = N;

	return (N);
}

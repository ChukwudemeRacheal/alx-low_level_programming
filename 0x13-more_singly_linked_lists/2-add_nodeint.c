#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - new node at the beginning of a listint_t list.
 * @head: pointerto the first node in the list
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *N;

	N = malloc(sizeof(listint_t));
	if (!N)
		return (NULL);

	N->n = n;
	N->next = *head;
	*head = N;

	return (N);
}

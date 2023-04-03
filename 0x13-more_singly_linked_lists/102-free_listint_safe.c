#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node
 *
 * Return: number of elements in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t wid = 0;
	int diff;
	listint_t *ptr;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			ptr = (*h)->next;
			*h = ptr;
			wid++;
		}
		else
		{
			*h = NULL;
			wid++;
			break;
		}
	}

	*h = NULL;

	return (wid);
}

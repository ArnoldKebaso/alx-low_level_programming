#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: list of listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t atp = 0;
	long int sub;

	while (head)
	{
		sub = head - head->next;
		atp++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (sub > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (atp);
}

#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to revert
 * Return: 1 on success -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int atp;
	unsigned int ptr;

	if (index > 64)
		return (-1);
	ptr = index;
	for (atp = 1; ptr > 0; atp *= 2, ptr--)
		;

	if ((*n >> index) & 1)
		*n -= atp;

	return (1);
}

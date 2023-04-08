#include "main.h"

/**
 * set_bit - a given index the value of a bit is set to 1
 * @n: decimal number passed by pointer
 * @index: index to change
 * Return: 1 on success, -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int atp;

	if (index > 64)
		return (-1);

	for (atp = 1; index > 0; index--, atp *= 2)
		;
	*n += atp;

	return (1);
}

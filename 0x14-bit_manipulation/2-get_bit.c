#include "main.h"
#include <stdio.h>

/**
 * get_bit - value of a bit at a given index
 * @n: digit to use
 * @index: index beginning from 0
 * Return: bit at index, -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int atp;

	if (index > 64)
		return (-1);

	atp = n >> index;

	return (atp & 1);
}

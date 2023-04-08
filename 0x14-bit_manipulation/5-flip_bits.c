#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first value
 * @m: second value
 * Return: number of bits to be flipped i
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int atp;
	int i;

	atp = n ^ m;
	i = 0;

	while (atp)
	{
		i++;
		atp &= (atp - 1);
	}

	return (i);
}

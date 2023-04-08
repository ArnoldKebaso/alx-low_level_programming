#include "main.h"
#include <stdio.h>

/**
 * print_binary - displays binary representation of a number
 * @n: decimal to be printed as a binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int ptr;
	int atp;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (ptr = n, atp = 0; (ptr >>= 1) > 0; atp++)
		;

	for (; atp >= 0; atp--)
	{
		if ((n >> atp) & 1)
			printf("1");
		else
			printf("0");
	}
}

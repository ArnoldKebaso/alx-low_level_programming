#include"main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int k, j;

	for (k = 0; k <= 9; ++k)
	{
		for (j = 'a'; j <= 'z'; ++j)
			_putchar(j);
		_putchar('\n');
	}
}

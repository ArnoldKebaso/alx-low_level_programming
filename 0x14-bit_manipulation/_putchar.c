#include <unistd.h>

/**
 * _putchar - writes the character standard output
 * @c: The character to print
 *
 * Return: success 1.
 * Otherwise, -1 is returned indicating failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

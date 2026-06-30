#include "main.h"

/**
 * reset_to_98 - check the code
 *
 * @n: character
 *
 * Return: Always 0 (Success)
 */
void reset_to_98(int *n)
{
	int n;
	n = 98;
	*n = &n;
	n = 402;
	_putchar("n=%d\n", n);
	reset_to_98(&n);
	_putchar("n=%d\n", n);
	return (0);
}

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
	*n = 402;

	_putchar('*n');
	reset_to_98(n);
	_putchar('*n');
}

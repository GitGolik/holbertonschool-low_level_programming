#include "main.h"

/**
 * print_sign - check the code
 *
 * @c: character
 *
 * Return: Always 0 (Success)
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

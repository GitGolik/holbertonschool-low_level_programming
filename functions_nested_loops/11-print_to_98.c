#include "main.h"

/**
 * print_to_98 - check the code
 *
 * @n: character
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; ++n)
		{
			_putchar(n);
		}
	}
	else if (n > 98)
	{
		for (n = n; n >= 98; --n)
		{
			_putchar(n);
		}
	}
	else
	{
		_putchar("98");
	}
	_putchar('\n');
}

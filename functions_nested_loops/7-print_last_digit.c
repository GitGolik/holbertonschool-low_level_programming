#include "main.h"

/**
 * print_last_digit - check the code
 *
 * @x: character
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int x)
{
	int a, b;

	b = x % 10;
	if (b < 0)
		b = -b;
	a = '0' + b;
	_putchar(a);
	return (b);
}

#include "main.h"

/**
 * print_line - print a big line
 *
 * @n: character
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int line;

	line = '_' * n;
	if (n <= 0)
	{
	}
	else
	{
		_putchar(line);
	}
	_putchar('\n');
}

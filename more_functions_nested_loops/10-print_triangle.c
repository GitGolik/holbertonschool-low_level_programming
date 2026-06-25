#include "main.h"

/**
 * print_triangle - check tfc
 *
 * @size: character
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int a;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - 1; ; b--)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
	return (0);
}

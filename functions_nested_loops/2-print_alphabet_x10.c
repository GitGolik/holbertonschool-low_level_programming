#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int a;

	for (a = 1; a <= 10; ++a)
	{
		for (c = 'a'; c <= 'z'; ++c)
			_putchar(c);
	}
	_putchar('\n');
}

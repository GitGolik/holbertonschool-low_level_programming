#include "main.h"

/**
 * print_rev - print the string in reverse
 *
 * @s: character
 *
 * Return: not needed
 */
void print_rev(char *s)
{
	int a = 0;

	while (a >= 0)
	{
		if (s[a] == '\0')
			break;
		a++;
	}
	for (a--;  a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}

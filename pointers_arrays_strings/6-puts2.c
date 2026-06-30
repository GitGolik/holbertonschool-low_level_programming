#include "main.h"

/**
 * puts2 - print one character out of two
 * @str: character
 * Return: no return
 */
void puts2(char *str)
{
	int a = 0;

	while (a >= 0)
	{
		if (str[a] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[a]);
		a += 2;
	}
}

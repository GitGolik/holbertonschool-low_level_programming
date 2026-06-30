#include "main.h"

/**
 * _puts - check the code
 *
 * @str: character
 *
 * Return: complit string str success
 */
void _puts(char *str)
{
	int a;

	a = 0;
	while (a >= 0)
	{
		if (str[a] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[a]);
		a++;
	}
}


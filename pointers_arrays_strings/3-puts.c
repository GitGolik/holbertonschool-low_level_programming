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
	while (*(str + a) != '\0')
	{
		_putchar(str);
		a++;
	}
	_putchar('\n')
}


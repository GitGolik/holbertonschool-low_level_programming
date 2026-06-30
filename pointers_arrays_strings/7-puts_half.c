#include "main.h"

/**
 * puts_half - print half of the string
 * @str: character
 * Return: no return
 */
void puts_half(char *str)
{
	int length = 0;
	int temp = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		for (temp = (length / 2); temp <= length; temp++)
		{
			_putchar(str[temp]);
		}
	}
}

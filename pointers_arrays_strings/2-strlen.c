#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: character
 *
 * Return: s value (Success)
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*(s + length) != '\0')
		length++;
	return (length);
}

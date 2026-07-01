#include "main.h"

/**
 * *_strcpy - check the code
 * @dest: character
 * @src: character
 * Return: always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (a >= 0)
	{
		*(dest + a) = *(src + a);
		if (*(src + a) == '\0')
			break;
		a++;
	}
	return (dest);
}

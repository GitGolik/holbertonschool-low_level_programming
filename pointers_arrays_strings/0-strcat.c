#include "main.h"

/**
 * *_strcat - check the code
 * @dest: character
 * @src: character
 * Return: dest pointer
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}

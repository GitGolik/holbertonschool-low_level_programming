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
	int add = 0;

	while (*(dest + count) != '\0')
		count++;
	while (add >= 0)
	{
		*(dest + count) = *(src + add);
		if (*(src + add) == '\0')
			break;
		count++;
		add++;
	}
	return (dest);
}

#include "main.h"

/**
 * *_strncat - check the code
 * @dest: character
 * @src: character
 * @n: character
 * Return: dest string result
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int add = 0;

	while (*(dest + count) != '\0')
		count++;
	while (add < n)
	{
		*(dest + count) = *(src + add);
		if (*(src + add) == '\0')
			break;
		count++;
		add++;
	}
	return (dest);
}

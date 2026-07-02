#include "main.h"

/**
 * *_memcpy - copy the src array to a dest
 * @dest: pointer of the destination of the src
 * @src: pointer of the source of the array to copy in dest
 * @n: number of octe to copy in from src to dest
 * Return: dest to return
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

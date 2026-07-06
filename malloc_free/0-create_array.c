#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of char
 * @size: unsigned integer
 * @c: character
 * Return: return result of char c
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}

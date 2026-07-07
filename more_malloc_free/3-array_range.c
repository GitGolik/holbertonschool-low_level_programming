#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of int from min to max
 * @min: the minimum value (included)
 * @max: the maximum value (included)
 * Return: pointer to the newly created array , or NULL on failure
 */
int *array_range(int min, int max)
{
	int *array;
	unsigned int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min + 1;
	return (array);
}

#include "main.h"
#include <stdlib.h>

/**
 * strdup - returns a pointer to a duplicated string
 * @str: input string
 * Return: pointer to the new string, or NULL if it fails
 */
char *_strdup(char *str)
{
	int i;
	int len;
	char *copy;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < len + 1)
		copy[i] = str[i];
	return (copy);
}

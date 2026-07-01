#include "main.h"

/**
 * *string_toupper - check the code
 * Return: 0 success
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += ('A' - 'a');
	}

	return (str);
}

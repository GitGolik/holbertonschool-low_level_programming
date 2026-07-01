#include "main.h"

/**
 * *string_toupper - check the code
 * Return: 0 success
 */
void *string_toupper(char *)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] -= 32;
		a++;
	}
}

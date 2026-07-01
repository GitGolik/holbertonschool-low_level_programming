#include "main.h"

/**
 * _strcmp - compare two strings lexicographically
 * @s1: character
 * @s2: character
 * Return: 0 success
 */
int _strcmp(char *s1, char *s2)
{
	int n;

	n = 0;
	while (s1[n] != '\0' && s2[n] != '\0')
	{
		if (s1[n] != s2[n])
			return (s1[n] - s2[n]);
		n++;
	}
	return (s1[n] - s2[n]);
}

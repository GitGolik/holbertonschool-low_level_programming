#include "main.h"

/**
 * _islower - check the code
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int c;

	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}

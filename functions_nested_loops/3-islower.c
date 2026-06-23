#include "main.h"

/**
 * _islower - check the code
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int r;

	if ((r >= 97) && (r <= 122))
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _abs - check the code
 *
 * @x: character
 *
 * Return: Always 0 (Success)
 */
int _abs(int x)
{
	if (x > 0)
		return (x);
	else if (x < 0)
		return (x = x * -1);
	else
		return (0);
}

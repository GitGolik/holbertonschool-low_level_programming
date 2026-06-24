#include "main.h"

/**
 * print_to_98 - check the code
 *
 * @n: character
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			--n;
		else
			++n;
	}
	printf("98\n");
}

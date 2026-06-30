#include "main.h"
#include <stdio.h>

/**
 * print_array - print the number stocked in the array and in the right order
 * @a: character
 * @n: character
 * Return: no return
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (i != (n - 1))
			printf(", ");
	}
	printf('\n');
}

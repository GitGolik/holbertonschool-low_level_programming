#include "main.h"
#include <stdio>

/**
 * print_array - print the number stocked in the array and in the right order
 * @a: character
 * @n: character
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf('\n');
}

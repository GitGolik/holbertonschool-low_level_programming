#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: character
 * @n: character
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = temp;
		start++;
		end--;
	}
}

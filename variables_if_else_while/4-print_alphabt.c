#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'q' || c != 'e')
		{
			putchar(c);
		}
		else
		{

		}
	}
	putchar('\n');
	return (0);
}

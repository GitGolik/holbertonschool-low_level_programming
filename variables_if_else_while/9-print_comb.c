#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; ++a)
	{
		if (a == '9')
		{
			putchar(a);
		}
		else
		{
			putchar(a);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}

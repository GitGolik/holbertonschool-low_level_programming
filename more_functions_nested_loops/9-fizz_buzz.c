#include <stdio.h>

/**
 * main - check tfc
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
		{
			putchar("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			putchar("Fizz");
		}
		else if (a % 5 == 0)
		{
			putchar("Buzz");
		}
		else
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}

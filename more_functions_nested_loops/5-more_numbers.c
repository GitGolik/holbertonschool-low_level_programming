#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; ++a)
	{
		for (b = 0; b <= 14; ++b)
		{
			if (b >= 10)
				_putchar('0' + b / 10);
			else
			{
			}
			_putchar('0' + b % 10);
		}
		_putchar('\n');
	}
}

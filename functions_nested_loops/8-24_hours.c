#include "main.h"

/**
 * jack_bauer - check the code
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int a, b, c, d, e, f, g;

	for (a = 0; a < 24; ++a)
	{
		d = a / 10;
		e = a % 10;
		for (b = 0; b = < 60; ++b)
		{
			f = b / 10;
			g = b % 10;
			_putchar('0' + d);
			_putchar('0' + e);
			_putchar(:);
			_putchar('0' + f);
			_putchar('0' + g);
			_putchar('\n')
		}
	}
}
				

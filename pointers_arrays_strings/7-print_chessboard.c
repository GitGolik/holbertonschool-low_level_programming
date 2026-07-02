#include "main.h"

/**
 * print_chessboard - print a chessboard with a
 * @a: board of 8*8
 * Return: pointer of a
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			a = *(a + J);
			_putchar(a);
		}
		_putchar('\n');
	}
}

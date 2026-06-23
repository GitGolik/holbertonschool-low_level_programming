#include <stdio.h>

/**
 * main -entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char d;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for (d = 'A'; d <= 'Z'; ++c)
		putchar(d);
	putchar('\n');

	return (0);
}

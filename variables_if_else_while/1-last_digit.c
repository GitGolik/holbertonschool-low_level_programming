#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	if (r > 5)
		printf("%i is greater than 5\n", r);
	else if (r == 0)
		printf("%i is 0\n", r);
	else if (r < 6 && r != 0)
		printf("%i is less than 6 and not 0\n", r);

	return (0);
}

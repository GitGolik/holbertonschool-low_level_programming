#include "main.h"

/**
 * check_prime - check if n has a divisor starting from d
 * @n: number of check
 * @d: current divisor candidate
 * Return: 1 if n is prime , o if not
 */
int check_prime(int n, int d)
{
if (d * d > n)
return (1);

if (n % d == 0)
return (0);

return (check_prime(n, d + 1));
}

/**
 * is_prime_number - verifie if input int is a prime number
 * @n: number input int
 * Return: 1 if prime number , 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);

return (check_prime(n, 2));
}

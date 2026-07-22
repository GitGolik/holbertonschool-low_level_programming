#include "main.h"

/**
 * factorial - factorial of given number
 * @n: number in factorial
 * Return: 1 succes , -1 error
 */
int factorial(int n)
{
    if (n == 0)
    {
        return (1);
    }
    return (n * factorial(n - 1));
}

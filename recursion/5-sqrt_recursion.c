#include "main.h"

/**
 * _sqrt_helper - recursively finds natural square root of a number
 * @n: number to find the square root of i
 * @i: current candidate
 * Return: natural square root of n, or -1 if none
 */
int _sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - print natural square root of a number
 * @n: number to find the square root of 
 * Return: natural square root of n, or -1 if none
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}

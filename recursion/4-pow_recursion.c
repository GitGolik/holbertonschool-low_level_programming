#include "main.h"

/**
 * _pow_recursion - recursion of x raised to the power of y
 * @x: number to recursive
 * @y: power to add on x
 * Return: 1 success , -1 error
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return (-1);
    }
    if (y == 0)
    {
        return (1);
    }
    return ((x * _pow_recursion(x, y - 1)));
}

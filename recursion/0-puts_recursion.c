#include "main.h"

/**
 * _puts_recursion - a puts with recursion of char s
 * @s: string to print
 * Return: no return
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
        return;
    
    _putchar("%c", *s);
    s++;
    _puts_recursion(*s);

    _putchar('\n');
}
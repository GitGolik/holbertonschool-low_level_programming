#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name to print
 * @f: pointer of function that print name
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
if ((name == NULL) || (f == NULL))
    return;
    
f(name);
}
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdlib.h>

/**
 * definition of function pointers that will be used
 * _putchar - like putchar
 * print_name - to print the name
 */

int _putchar(char);
void print_name(char *name, void (*f)(char *));

#endif

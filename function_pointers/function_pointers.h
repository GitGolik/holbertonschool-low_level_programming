#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdlib.h>

/**
 * _putchar - like putchar
 * print_name - to print the name
 * @c: character
 * @name: name to print
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif

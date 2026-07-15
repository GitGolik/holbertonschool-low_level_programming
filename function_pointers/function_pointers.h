#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdlib.h>

/**
 * _putchar - like putchar
 * @c: character
 */

void _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif

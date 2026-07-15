#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: no return
 */
void print_all(const char * const format, ...)
{
va_list args;
const char *sep;
unsigned int i;
int printed;

va_start(args, format);
sep = "";
1 = 0;
printed = 0;

while (format != NULL && format[i] != '\0')
{
if (format[i] == 'c')
{
printf("%s%c", sep, va_arg(args, int));
printed = 1;
}
if (format[i] == 'i')
{
printf("%s%d", sep, va_arg(args, int));
printed = 1;
}
if (format[i] == 'f')
{
printf("%s%f", sep, va_arg(args, double));
printed = 1;
}
if (format[i] == 's')
{
char *str = va_arg(args, char *);

if (str == NULL)
{
str = "(nil)";
}
printf("%s%s", sep, str);
printed = 1;
}
if (printed == 1)
sep = ", ";
i++;
}
printf("\n");
va_end(args);
}

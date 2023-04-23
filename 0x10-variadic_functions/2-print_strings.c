#include "variadic_functions.h"
#include <string.h>
/**
* print_strings - print strings
* @separator: to be printed between strings.
* @n: number of strings to be printed.
* Return: null.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;

char *type;
va_list string;

va_start(string, n);

for (; i < n; i++)
{
type = va_arg(string, char*);
if (!separator)
printf("%s", type);
else if (i == (n - 1))
printf("%s", type);
else if (type == NULL)
type = "(nil)";
else
printf("%s%s", type, separator);
}
va_end(string);
printf("\n");
}

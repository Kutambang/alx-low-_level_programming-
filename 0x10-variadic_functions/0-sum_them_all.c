#include <stdarg.h>

/**
* sum_them_all - adds all its parameters.
* @n: number of arguments.
*
* Return: sum of all arguments.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
int sum = 0;
va_start(args, n);

for (; i < n; i++)
{
sum += va_arg(args, int);
}

va_end(args);
return (sum);
}

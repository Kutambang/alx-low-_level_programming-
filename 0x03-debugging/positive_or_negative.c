#include "main.h"
/**
*positive_or_negative - checks for positive or negative values.
* @i: the parameters
* Return: 0
*/
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is negative\n", i);
}
if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is positive\n", i);
}
}

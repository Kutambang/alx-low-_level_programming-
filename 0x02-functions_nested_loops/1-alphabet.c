#include <stdio.h>
#include "main.h"

void print_alphabet(void);
/**
 * print_alphabet - is a function that returns an alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{

	char m;

	for (m = 'a'; m <= 'z'; m++)
		_putchar(m);
	_putchar('\n');
}

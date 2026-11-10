#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet
 *
 * Return: Nothing.
 */
void print_alphabet(void)
{
	int i;

	i = 0;
	while (i < 26)
	{
		_putchar('a' + i);
		i++;
	}
	_putchar('\n');
}

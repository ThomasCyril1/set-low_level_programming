#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int row;
	int i;

	row = 0;
	while (row < 10)
	{
		i = 0;
		while (i < 26)
		{
			_putchar('a' + i);
			i++;
		}
		_putchar('\n');
		row++;
	}
}

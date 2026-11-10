#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int row;
	int column;
	int product;

	row = 0;
	while (row < 10)
	{
		column = 0;
		while (column < 10)
		{
			product = row * column;

			if (column == 0)
			{
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (product < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(product / 10 + '0');
				}

				_putchar(product % 10 + '0');
			}
			column++;
		}
		_putchar('\n');
		row++;
	}
}

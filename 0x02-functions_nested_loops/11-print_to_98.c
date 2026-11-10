#include "main.h"

/**
 * print_number - prints an integer
 * @number: number to print
 *
 * Return: Nothing.
 */
static void print_number(int number)
{
	unsigned int n;

	if (number < 0)
	{
		_putchar('-');
		n = 0u - (unsigned int)number;
	}
	else
	{
		n = number;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * print_to_98 - prints numbers from n to 98
 * @n: starting number
 *
 * Return: Nothing.
 */
void print_to_98(int n)
{
	int first;

	first = 1;

	while (1)
	{
		if (!first)
		{
			_putchar(',');
			_putchar(' ');
		}

		print_number(n);
		first = 0;

		if (n == 98)
			break;

		if (n < 98)
			n++;
		else
			n--;
	}

	_putchar('\n');
}

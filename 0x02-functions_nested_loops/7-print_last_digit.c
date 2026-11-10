#include "main.h"

/**
 * print_last_digit - prints and returns the last digit of a number
 * @n: number to check
 *
 * Return: value of the last digit.
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (r < 0)
	{
		r = -r;
	}

	_putchar(r + '0');

	return (r);
}

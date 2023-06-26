#include "main.h"

/**
 * print_integer - Prints an integer
 * @n: The integer to print
 */
void print_integer(int n)
{
	unsigned int num;
	int last_digit;
	int div;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	div = 1;

	while ((num / div) > 9)
		div *= 10;

	while (div != 0)
	{
		last_digit = num / div;
		_putchar(last_digit + '0');
		num %= div;
		div /= 10;
	}
}

/**
 * print_binary - Prints a binary representation of an unsigned integer
 * @n: The unsigned integer to print
 */
void print_binary(unsigned int n)
{
	if (n > 1)
		print_binary(n / 2);

	_putchar((n % 2) + '0');
}


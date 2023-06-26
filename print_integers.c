#include "main.h"

/**
 * print_integer - Prints an integer
 * @n: The integer to print
 */
void print_integer(int n)
{
	unsigned int num;
	int digit;
	int is_negative = 0;

	/* Handle special case for 0 */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Handle negative numbers */
	if (n < 0)
	{
		is_negative = 1;
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}

	/* Recursively print the digits */
	if (num >= 10)
		print_integer(num / 10);

	/* Print the last digit */
	digit = num % 10;
	_putchar(digit + '0');
}

/**
 * print_binary - Prints an unsigned integer in binary format
 * @n: The unsigned integer to print
 */
void print_binary(unsigned int n)
{
	unsigned int mask = 1;
	int bits = sizeof(unsigned int) * 8;
	int i;

	/* Iterate through each bit and print it */
	for (i = bits - 1; i >= 0; i--)
	{
		/* Extract the bit using bitwise shifting and masking */
		unsigned int bit = (n >> i) & mask;
		_putchar(bit + '0');
	}
}


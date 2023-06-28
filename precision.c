#include "main.h"

/**
 * handle_precision - Handles the precision for non-custom conversion specifiers
 * @arg: The argument to print
 * @print_func: The appropriate print function based on the conversion specifier
 * @precision: The precision value
 * @flags: The flag characters
 *
 * Return: Number of characters printed
 */
int handle_precision(int arg, int (*print_func)(int), int precision)
{
	int printed_chars = 0;
	int num_zeros = precision - count_digits(arg);

	if (arg < 0)
	{
		printed_chars += _putchar('-');
		arg = -arg;
	}

	while (num_zeros > 0)
	{
		printed_chars += _putchar('0');
		num_zeros--;
	}

	printed_chars += print_func(arg);

	return (printed_chars);
}


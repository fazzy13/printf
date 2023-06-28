#include "main.h"

/**
 * handle_field_width - Handles the field width for non-custom conversion specifiers
 * @arg: The argument to print
 * @print_func: The appropriate print function based on the conversion specifier
 * @width: The field width
 * @flags: The flag characters
 *
 * Return: Number of characters printed
 */
int handle_field_width(int arg, int (*print_func)(int), int width, int flags)
{
	int printed_chars = 0;
	int num_spaces = width - count_digits(arg);

	if (flags & FLAG_ZERO)
	{
		if (arg < 0)
		{
			printed_chars += _putchar('-');
			arg = -arg;
		}

		while (num_spaces > 0)
		{
			printed_chars += _putchar('0');
			num_spaces--;
		}
	}
	else
	{
		while (num_spaces > 0)
		{
			printed_chars += _putchar(' ');
			num_spaces--;
		}

		if (arg < 0)
		{
			printed_chars += _putchar('-');
			arg = -arg;
		}
	}

	printed_chars += print_func(arg);

	return (printed_chars);
}


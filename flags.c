#include "main.h"

/**
 * handle_plus_flag - Handles the + flag character
 * @arg: The argument to print
 * @print_func: The appropriate print function based on the conversion specifier
 *
 * Return: Number of characters printed
 */
int handle_plus_flag(int arg, int (*print_func)(int))
{
	int printed_chars = 0;

	if (arg >= 0)
		printed_chars += _putchar('+');

	printed_chars += print_func(arg);

	return (printed_chars);
}

/**
 * handle_space_flag - Handles the space flag character
 * @arg: The argument to print
 * @print_func: The appropriate print function based on the conversion specifier
 *
 * Return: Number of characters printed
 */
int handle_space_flag(int arg, int (*print_func)(int))
{
	int printed_chars = 0;

	if (arg >= 0)
		printed_chars += _putchar(' ');

	printed_chars += print_func(arg);

	return (printed_chars);
}

/**
 * handle_hash_flag - Handles the # flag character
 * @arg: The argument to print
 * @print_func: The appropriate print function based on the conversion specifier
 *
 * Return: Number of characters printed
 */
int handle_hash_flag(unsigned int arg, int (*print_func)(unsigned int))
{
	int printed_chars = 0;

	if (arg != 0)
	{
		if ((unsigned int (*)(unsigned int))print_func == print_hex)
			printed_chars += _printf("0x");
		else if ((unsigned int (*)(unsigned int))print_func == print_HEX)
			printed_chars += _printf("0X");
		else if ((unsigned int (*)(unsigned int))print_func == print_octal)
			printed_chars += _putchar('0');
	}

	printed_chars += print_func(arg);

	return (printed_chars);
}

/**
 * handle_zero_flag - Handles the 0 flag character
 * @arg: The argument to print
 * @print_func: The appropriate print function based on the conversion specifier
 * @width: The field width
 *
 * Return: Number of characters printed
 */
int handle_zero_flag(int arg, int (*print_func)(int), int width)
{
	int printed_chars = 0;
	int num_zeros = width - count_digits(arg);

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

/**
 * handle_minus_flag - Handles the - flag character
 * @arg: The argument to print
 * @print_func: The appropriate print function based on the conversion specifier
 * @width: The field width
 *
 * Return: Number of characters printed
 */
int handle_minus_flag(int arg, int (*print_func)(int), int width)
{
	int printed_chars = 0;
	int num_spaces = width - count_digits(arg);

	if (arg < 0)
	{
		printed_chars += _putchar('-');
		arg = -arg;
	}

	printed_chars += print_func(arg);

	while (num_spaces > 0)
	{
		printed_chars += _putchar(' ');
		num_spaces--;
	}

	return (printed_chars);
}


#include "main.h"

int print_integer(int n);
int handle_print(const char *format, int *index, va_list list);
int _printf(const char *format, ...);

/**
 * handle_d_i - Handles the 'd' and 'i' conversion specifiers
 * @list: argument list
 * Return: the number of characters printed for the current conversion specifier
 */
int handle_d_i(va_list list)
{
	int num = va_arg(list, int);

	return print_integer(num);
}

/**
 * handle_print - Handles the conversion specifier and prints the
 * corresponding output
 * @format: format string
 * @index: pointer to the current position in the format string
 * @list: argument list
 * Return: the number of characters printed for the current conversion specifier
 */
int handle_print(const char *format, int *index, va_list list)
{
	int printed_chars = 0;

	if (format[*index] == 'c')
	{
		char c = va_arg(list, int);

		_putchar(c);
		printed_chars++;
	}
	else if (format[*index] == 's')
	{
		char *str = va_arg(list, char *);

		if (str == NULL)
			str = "(null)";
		printed_chars += _puts(str);
	}
	else if (format[*index] == '%')
	{
		_putchar('%');
		printed_chars++;
	}
	else if (format[*index] == 'd' || format[*index] == 'i')
	{
		printed_chars += handle_d_i(list);
	}
	else
	{
		_putchar('%');
		_putchar(format[*index]);
		printed_chars += 2;
	}

	return (printed_chars);
}

/**
 * _printf - Printf function
 * @format: format string
 * Return: the number of characters printed (excluding the null byte used
 * to end output to strings)
 */
int _printf(const char *format, ...)
{
	int i, printed_chars = 0;
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			printed_chars++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			printed_chars += handle_print(format, &i, list);
		}
	}

	va_end(list);

	return (printed_chars);
}

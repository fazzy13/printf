#include "main.h"

int handle_print(const char *format, int *index, va_list list);
int _printf(const char *format, ...);

/**
 * _printf - Printf function
 * @format: format.
 * Return: the number of characters printed (excluding the null byte used to end output to strings)
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
			/* Handle the conversion specifier using the helper function */
			printed_chars += handle_print(format, &i, list);
		}
	}

	va_end(list);

	return (printed_chars);
}

/**
 * handle_print - Handles the conversion specifier and prints the corresponding output
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
	else
	{
		_putchar('%');
		_putchar(format[*index]);
		printed_chars += 2;
	}

	return (printed_chars);
}


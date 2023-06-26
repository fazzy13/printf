#include "main.h"
#include <stdarg.h>
#include <unistd.h> /*  for write */

int _printf(const char *format, ...);
const char *process_conversion(const char *format, va_list args, int *printed_chars);
void print_percent(int *printed_chars);
void print_string(char *str, int *printed_chars);
void print_char(char c, int *printed_chars);

/**
 * print_char - Prints a single character to the standard output.
 * @c: The character to be printed.
 * @printed_chars: Pointer to the count of printed characters.
 */
void print_char(char c, int *printed_chars)
{
    write(1, &c, 1);
    (*printed_chars)++;
}

/**
 * print_string - Prints a string to the standard output.
 * @str: The string to be printed.
 * @printed_chars: Pointer to the count of printed characters.
 */
void print_string(char *str, int *printed_chars)
{
    if (str == NULL)
        str = "(null)";
    while (*str)
    {
        write(1, str, 1);
        str++;
        (*printed_chars)++;
    }
}

/**
 * print_percent - Prints a percent symbol to the standard output.
 * @printed_chars: Pointer to the count of printed characters.
 */
void print_percent(int *printed_chars)
{
    write(1, "%", 1);
    (*printed_chars)++;
}

/**
 * process_conversion - Processes a single conversion specifier.
 * @format: The format string.
 * @args: The variable argument list.
 * @printed_chars: Pointer to the count of printed characters.
 * Return: The updated position in the format string.
 */
const char *process_conversion(const char *format, va_list args, int *printed_chars)
{
    switch (*format)
    {
        case 'c':
            print_char(va_arg(args, int), printed_chars);
            break;
        case 's':
            print_string(va_arg(args, char *), printed_chars);
            break;
        case '%':
            print_percent(printed_chars);
            break;
        default:
            print_percent(printed_chars);
            print_char(*format, printed_chars);
            break;
    }

    return format + 1;
}

/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 * Return: The number of characters printed (excluding the null byte used to end output to strings).
 */
int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++; // Move past '%'
            format = process_conversion(format, args, &printed_chars);
        }
        else
        {
            print_char(*format, &printed_chars);
        }

        format++;
    }

    va_end(args);

    return printed_chars;
}


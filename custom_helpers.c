#include "main.h"

/**
 * print_S - Print a string with special characters represented
 * in the format \x<ASCII code
 * @str: The string to print
 *
 * Return: Number of characters printed
 */
int print_S(char *str)
{
	int printed_chars = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		if ((*str < 32 || *str >= 127) && *str != '\n')
		{
			printed_chars += _printf("\\x%02X", *str);
		}
		else
		{
			_putchar(*str);
			printed_chars++;
		}

		str++;
	}

	return (printed_chars);
}

/**
 * print_r - Print a reversed string
 * @str: The string to print
 *
 * Return: Number of characters printed
 */
int print_r(char *str)
{
	int printed_chars = 0;
	int len = 0;

	if (str == NULL)
		str = "(null)";

	while (str[len])
		len++;

	while (len > 0)
	{
		_putchar(str[len - 1]);
		printed_chars++;
		len--;
	}

	return (printed_chars);
}

/**
 * print_R - Print a string in ROT13 encryption
 * @str: The string to print
 *
 * Return: Number of characters printed
 */
int print_R(char *str)
{
	int printed_chars = 0;
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *p;

	if (str == NULL)
		str = "(null)";

	for (; *str != '\0'; str++)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			p = rot13;

			while ((*str >= 'A' && *str <= 'Z' && *p != *str) ||
			       (*str >= 'a' && *str <= 'z' && *p != *str))
				p++;

			if ((*str >= 'A' && *str <= 'Z' && *p == *str) ||
			    (*str >= 'a' && *str <= 'z' && *p == *str))
			{
				_putchar(rot13[p - rot13]);
				printed_chars++;
			}
		}
		else
		{
			_putchar(*str);
			printed_chars++;
		}
	}

	return (printed_chars);
}


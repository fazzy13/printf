#include "main.h"

/**
 * print_char - Print a character
 * @c: The character to print
 *
 * Return: Number of characters printed
 */
int print_char(char c)
{
	return (_putchar(c));
}

/**
 * print_string - Print a string
 * @str: The string to print
 *
 * Return: Number of characters printed
 */
int print_string(char *str)
{
	int printed_chars = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		printed_chars++;
		str++;
	}

	return (printed_chars);
}

/**
 * print_number - Print a decimal integer
 * @n: The decimal integer to print
 *
 * Return: Number of characters printed
 */
int print_number(int n)
{
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		count++;
	}
	else
		num = n;

	if (num / 10)
		count += print_number(num / 10);

	_putchar((num % 10) + '0');
	count++;

	return (count);
}

/**
 * print_binary - Print an unsigned integer in binary format
 * @n: The unsigned integer to print
 *
 * Return: Number of characters printed
 */
int print_binary(unsigned int n)
{
	int count = 0;

	if (n / 2)
		count += print_binary(n / 2);

	_putchar((n % 2) + '0');
	count++;

	return (count);
}

/**
 * print_unsigned - Print an unsigned decimal integer
 * @n: The unsigned decimal integer to print
 *
 * Return: Number of characters printed
 */
int print_unsigned(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_unsigned(n / 10);

	_putchar((n % 10) + '0');
	count++;

	return (count);
}

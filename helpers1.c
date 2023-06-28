#include <main.h>

/**
 * print_octal - Print an unsigned decimal integer in octal format
 * @n: The unsigned decimal integer to print
 *
 * Return: Number of characters printed
 */
int print_octal(unsigned int n)
{
	int count = 0;

	if (n / 8)
		count += print_octal(n / 8);

	_putchar((n % 8) + '0');
	count++;

	return (count);
}

/**
 * print_hex - Print an unsigned decimal integer in lowercase hexadecimal format
 * @n: The unsigned decimal integer to print
 *
 * Return: Number of characters printed
 */
int print_hex(unsigned int n)
{
	int count = 0;
	char hex_digits[] = "0123456789abcdef";

	if (n / 16)
		count += print_hex(n / 16);

	_putchar(hex_digits[n % 16]);
	count++;

	return (count);
}

/**
 * print_HEX - Print an unsigned decimal integer in uppercase hexadecimal format
 * @n: The unsigned decimal integer to print
 *
 * Return: Number of characters printed
 */
int print_HEX(unsigned int n)
{
	int count = 0;
	char hex_digits[] = "0123456789ABCDEF";

	if (n / 16)
		count += print_HEX(n / 16);

	_putchar(hex_digits[n % 16]);
	count++;

	return (count);
}

/**
 * print_pointer - Print a pointer address
 * @p: The pointer to print
 *
 * Return: Number of characters printed
 */
int print_pointer(void *p)
{
	unsigned long int ptr = (unsigned long int)p;
	int count = 0;

	count += _printf("0x");
	count += print_HEX(ptr);

	return (count);
}


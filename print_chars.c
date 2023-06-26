#include "main.h"
#include <unistd.h> /* for write */

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 * Return: On success, returns the number of characters written.
 * On failure, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - Writes a string to stdout
 * @str: The string to write
 * Return: On success, returns the number of characters written.
 * On failure, -1 is returned.
 */
int _puts(char *str)
{
	int len = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (_putchar(str[i]) == -1)
			return (-1);
		len++;
		i++;
	}

	return (len);
}


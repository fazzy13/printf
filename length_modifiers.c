#include "main.h"

/**
 * handle_l_modifier - Handles the l length modifier
 * @arg: The argument to print
 * @print_func: The appropriate print function based on the conversion specifier
 *
 * Return: Number of characters printed
 */
int handle_l_modifier(long arg, int (*print_func)(long))
{
	return (print_func(arg));
}

/**
 * handle_h_modifier - Handles the h length modifier
 * @arg: The argument to print
 * @print_func: The appropriate print function based on the conversion specifier
 *
 * Return: Number of characters printed
 */
int handle_h_modifier(short arg, int (*print_func)(short))
{
	return (print_func(arg));
}


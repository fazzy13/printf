#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* for va_list */
#include <stddef.h>
#include <stdio.h>

/* Function prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
void print_char(char c);
int print_string(char *str);
void print_percent(void);
void print_integer(int n);
void print_binary(unsigned int n);

/*helper function*/
int handle_print(const char *format, int *index, va_list list);


#endif /* MAIN_H */


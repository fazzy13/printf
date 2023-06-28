#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* for va_list */
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

/* flags */

int handle_plus_flag(int arg, int (*print_func)(int));
int handle_space_flag(int arg, int (*print_func)(int));
int handle_hash_flag(unsigned int arg, int (*print_func)(unsigned int));
int handle_zero_flag(int arg, int (*print_func)(int), int width);
int handle_minus_flag(int arg, int (*print_func)(int), int width);
int handle_field_width(int arg, int (*print_func)(int), int width, int flags);

#define FLAG_PLUS 1
#define FLAG_SPACE 2
#define FLAG_HASH 4
#define FLAG_ZERO 8
#define FLAG_MINUS 16

/* Function prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str); 

/* custom helpers */
int print_S(char *str);
int print_r(char *str);
int print_R(char *str); 

/* helper functions */
int print_char(char c);
int print_string(char *str);
int print_number(int n);
int print_binary(unsigned int n);
int print_unsigned(unsigned int n);
int print_octal(unsigned int n);
int print_hex(unsigned int n);
int print_HEX(unsigned int n);
int print_pointer(void *p); 
int count_digits(int number);

/* length modifiers */
int handle_l_modifier(long arg, int (*print_func)(long));
int handle_h_modifier(short arg, int (*print_func)(short));
 

/*precission */
int handle_precision(int arg, int (*print_func)(int), int precision);

/* flags */
int handle_plus_flag(int arg, int (*print_func)(int));
int handle_space_flag(int arg, int (*print_func)(int));
int handle_hash_flag(unsigned int arg, int (*print_func)(unsigned int));
int handle_zero_flag(int arg, int (*print_func)(int), int width);
int handle_minus_flag(int arg, int (*print_func)(int), int width); 

int handle_field_width(int arg, int (*print_func)(int), int width, int flags);


#endif /* MAIN_H */


## Printf Project
This is a custom implementation of the `printf` function in C programming language. The printf function is used to format and print output to the standard output stream (usually the terminal). This project aims to replicate the functionality of the `printf` function, including support for format specifiers, field width, precision, and various flags.

## Features
- Supports format specifiers `%c`, `%s`, `%d`, `%i` `%u`, `%o`, `%x`, `%X`, `%p`, and `%%`.
- Supports field width, precision, and flags, such as `0`, `-`, `+`, , and `#`.
- Handles variable number of arguments passed to the function.
- Supports basic error handling for invalid format specifiers and format string.
  
## Getting Started
To use this custom `printf` function in your C project, follow these steps:

1. Clone the repository to your local machine using the following command:

      ```git clone https://github.com/<username>/printf.git```


3. Include the `holberton.h header` file in your `C` source code, which contains the function prototypes and necessary macros.

`#include "holberton.h"`

3. Compile the `printf` function along with your `C` source code using your preferred compiler, such as `GCC`.

```gcc -Wall -Werror -Wextra -pedantic *.c <your_c_file.c> -o <output_file>```


4. Use the `printf` function in your `C` code, similar to how you would use the standard printf function, with format specifiers, field width, precision, and flags.


```_printf("Hello, %s! Today is %02d-%02d-%04d\n", "world", 4, 25, 2023);```

5. Compile and run your C program, and the custom printf function will format and print the output according to your format string.

### Examples

```
#include "holberton.h"

int main(void)
{
    int num = 123;
    char *str = "world";
    
    _printf("Hello, %s! Today is %02d-%02d-%04d\n", str, 4, 25, 2023);
    _printf("Decimal: %d\n", num);
    _printf("Octal: %o\n", num);
    _printf("Hexadecimal (lowercase): %x\n", num);
    _printf("Hexadecimal (uppercase): %X\n", num);
    _printf("Pointer address: %p\n", &num);
    _printf("Percentage sign: %%\n");

    return 0;
}
```

`Output:`

```
Hello, world! Today is 04-25-2023
Decimal: 123
Octal: 173
Hexadecimal (lowercase): 7b
Hexadecimal (uppercase): 7B
Pointer address: 0x7ffeeddaa23c
Percentage sign: %
```

## Contributions
This `printf` implementation is a collaborative effort by the ALX Software Engineering Team. If you would like to contribute to this project, please submit a pull request with your changes or report any issues through the repository's issue tracker.

Contributor: [Abu Jehoiada](https://github.com/iFingers007)

## License
This project is licensed under the MIT License - see the LICENSE file for details.


## Limitations

This `printf` implementation may not support all advanced features and edge cases of the standard `printf` function found in standard `C` libraries.
It does not support wide character `(%lc)` or wide string `(%ls)` format specifiers.
Floating-point format specifiers `(%f, %e, %g)` are not implemented in this custom `printf` function.
Error handling is basic and may not cover all possible error scenarios.

## Known Issues
There may be some edge cases where the output of this custom `printf` function may not exactly match the output of the standard `printf` function.
Some combinations of format specifiers, field width, precision, and flags may not behave as expected or may result in incorrect output.

## Acknowledgements
This printf implementation is inspired by the original `printf` function in the `C` standard library, as well as various other open-source `printf` implementations available online. Special thanks to the ALX Software Engineering Team for their contributions to this project.

Conclusion
The custom `printf` function in this project provides a basic implementation of the `printf` function in `C`, supporting common format specifiers, field width, precision, and flags. However, it may have limitations and known issues, and it is not intended to replace the standard printf function in production code. It can be used for educational purposes or as a starting point for further development and customization. If you encounter any issues or have suggestions for improvements, please feel free to contribute or provide feedback. Happy coding!

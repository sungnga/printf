# _printf
## Description
A homegrown printing function that simulates the printf function from the C Standard Library. This is a simple clone of the printf function which uses variadic functions, structs and specifier functions that read characters after a specifier character is read in the string. The output of this printf function will be an exact match of the output from the printf function given in the C standard library (given that there are functions that match with the specifier functions in this custom printf function).
---
### Prototype
#### `int _printf(const char *string, ...)`
###### 'string' is a character pointer to the first character in the string which is composed of 0 or more directies'
###### Returns: the number of characters to be printed (excluding the null byte)
###### Output: to stdout, the standard output stream
---
### Usage
[holberton.h](https://github.com/jembantonio/printf/blob/master/holberton.h)
###### The header file that contains: the specifier struct used, function prototypes and standard libraries used.
[_printf.c](https://github.com/jembantonio/printf/blob/master/_printf.c)
###### Calls the function: `_printf` passed in a string with optional arguments. Then it traverses a struct given to seek the correct format specifiers for desired output. Lastly, it points to a function pointer to run a program that correctly prints the appropriate conversion. This Function returns `-1` upon error and `(null)` if a string argument is `NULL`
#### Format Specifiers
Function name | Description | Format Specifier
--- | --- | ---
`c_spec` | Prints a character | `%c` 
`s_spec` | Prints a string | `%s` 
`int_spec` | Prints an integer | `%i` 
`int_spec` | Prints an integer | `%d` 
`uint_spec` | Prints an unsigned integer | `%u` 
`bin_spec` | Translate a base 10 number to binary | `%b` 
`hex_spec` | Translate a base 10 number to hexadecimal | `%x` 
`hex_spec` | Translate a base 10 number to uppercase hexadecimal  | `%X` 
`oct_spec` | Translate a base 10 number to octal | `%o` 
### Example Usage
- `_printf("Hello, world\n")` *prints "Hello, world" followed by a new line*
- `_printf("%c", 'C')` *prints the character 'C'*
- `_printf("Hello %s", "World")` *prints "Hello, World"*
- `_printf("%d\n", 99)` *prints the decimal number 99 followed by a new line*
- `_printf("%i\n", 99)` *prints the decimal number 99 followed by a new line*
- `_printf("%u\n", 99)` *prints the decimal number 99 followed by a new line*
- `_printf("%b\n", 99)` *translates the decimal number 99 to binary and prints 1100011 followed by a new line*
- `_printf("%x\n", 1234567)` *translates the decimal number 1234567 to hexadecimal and prints 12d687 followed by a new line*
- `_printf("%X\n", 1234567)` *translates the decimal number 1234567 to hexadecimal and prints 12D687 followed by a new line*
- `_printf("%o\n", 99)` *translates the decimal number 99 to octal and prints 143 followed by a new line*


### Files
File Name | Description | Link
--- | --- | ---
`holberton.h` | Header file with function prototypes and struct | [holberton.h](https://github.com/jembantonio/printf/blob/master/holberton.h)
`_printf.c` | Produces an output according to specifiers | [_printf.c](https://github.com/jembantonio/printf/blob/master/_printf.c)
`c_spec.c` | File containing the character specifier function |[c_spec.c](https://github.com/jembantonio/printf/blob/jeremy/c_spec.c)
`s_spec.c` | File containing the string specifier function |[s_spec.c](https://github.com/jembantonio/printf/blob/jeremy/s_spec.c)
`int_spec.c` | File containing the decimal and integer specifier functions |[int_spec.c](https://github.com/jembantonio/printf/blob/jeremy/int_spec.c)
`bin_spec.c` | File containing the decimal to binary translator function |[bin_spec.c](https://github.com/jembantonio/printf/blob/jeremy/bin_spec.c)
`hex_spec.c` | File containing the decimal to hexadecimal translator function |[hex_spec.c](https://github.com/jembantonio/printf/blob/jeremy/hex_spec.c)
`UHEX_spec.c` | File containing the decimal to hexadecimal translator function |[UHEX_spec.c](https://github.com/jembantonio/printf/blob/jeremy/UHEX_spec.c)
`oct_spec.c` | File containing the decimal to octal translator function |[oct_spec.c](https://github.com/jembantonio/printf/blob/jeremy/oct_spec.c)
`uint_spec.c` | File containing the unsigned integer function |[uint_spec.c](https://github.com/jembantonio/printf/blob/jeremy/uint_spec.c)

### Authors
This project was created by - [Jeremy Antonio](https://github.com/jembantonio) (*jembantonio@gmail.com*)  and 
[Nga La](https://github.com/sungnga) at [Holberton
School](http://holbertonschool.com).

### About
All files were created and compiled on `Ubuntu 14.04.4 LTS` using `GCC 4.8.4` with
the following flags:

`-Wall -Werror -Wextra -Wno-format -pedantic`.

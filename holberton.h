#ifndef _HOLBERTON_H
#define _HOLBERTON_H

/* LIBRARIES */
#include <stdarg.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/* STRUCT */
int specifier(va_list args);

/**
 * struct specs - Struct of an array for specifiers
 * @c: char pointer parameter
 * @function: The function associated
 */
typedef struct specs
{
	char c;
	int (*function)(va_list args);
} print_specs;

/* PRINTF FUNCTION */
int _printf(char const *string, ...);

/* SPECIFIER FUNCTIONS */
int c_spec(va_list args);
int s_spec(va_list args);
int int_spec(va_list args);

/* HELPER FUNCTIONS */
int _putchar(char c);

#endif

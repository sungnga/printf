#ifndef _HOLBERTON_H
#define _HOLBERTON_H

/* LIBRARIES */
#include <stdarg.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/* STRUCT */
int specifier(va_list arg);

/**
 * struct specs - Struct specs
 * @c: char pointer parameter
 * @function: The function associated
 */
typedef struct
{
	char c;
	int (*function)(va_list);
}print_specs;

/* PRINTF FUNCTION */
int _printf(char const *string, ...);

/* SPECIFIER FUNCTIONS */
int c_spec(va_list args);
int s_spec(va_list args);

#endif

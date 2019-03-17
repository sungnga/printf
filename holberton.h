#ifndef _HOLBERTON_H
#define _HOLBERTON_H

/* LIBRARIES */
#include <stdarg.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/* STRUCT */
int specifier(va_list arg);

typedef struct 
{
	char c;
	int (*function)(va_list);
}print_specs;

/* PRINTF FUNCTION */
int _printf(char const *string, ...);

/* SPECIFIER FUNCTIONS */
int charspec(va_list args);

#endif

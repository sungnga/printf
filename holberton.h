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
	int (*specifier)(va_list);
}spec_t;

/* PRINTF FUNCTION */
int _printf(char const *string, ...);

/* SPECIFIER FUNCTIONS */
int charspec(va_list args);

#endif

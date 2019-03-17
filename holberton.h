#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/* PRINTF FUNCTION */
int _printf(char const *string, ...);

/**
 * struct specs - Struct specs
 * @c: char pointer parameter
 * @function: The function associated
 */
typedef struct specs
{
        char *c;
        void (*function)(va_list ap);
} print_specs;

#endif

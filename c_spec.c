#include "holberton.h"

/**
 * c_spec - handles percent c specifier
 * @args: variable argument pointer
 * Return: byte size in int type
*/
int c_spec(va_list args)
{
	int bytes;
	char c = va_arg(args, int);

	bytes = 0;

	bytes += write(1, &c, 1);

	return (bytes);
}

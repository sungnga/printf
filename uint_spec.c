#include "holberton.h"

/**
 * _printint - a function that prints the integer from int_spec
 * @i: integer type
 * Return: byte size
 */

static int _printint(unsigned int i)
{
	int bytes;
	char num;

	bytes = 0;

	if (i > 9)
		bytes += _printint(i / 10);

	num = (i % 10) + '0';

	bytes += write(1, &num, 1);

	return (bytes);
}

/**
 * uint_spec - a function that handles %u conversion specifiers
 * @args: variable list of arguments
 * Return: byte size
 */

int uint_spec(va_list args)
{
	int bytes;
	int i = va_arg(args, signed int);

	bytes = 0;

	bytes += _printint(i);

	return (bytes);
}

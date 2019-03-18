#include "holberton.h"

/**
 * _printoct - translates decimal to binary
 * @i: integer type
 * @oct: a pointer to char of oct string
 * Return: byte size
 */

static int _printoct(unsigned int i, char const *oct)
{
	int bytes;
	char num;
	unsigned int len;

	bytes = 0;
	len = 0;

	while (oct && oct[len])
		len++;

	if (i >= len)
		bytes += _printoct(i / len, oct);

	num = oct[i % len];

	bytes += write(1, &num, 1);

	return (bytes);
}

/**
 * oct_spec - a function that handles %o conversion specifiers
 * @args: variable list of arguments
  * Return: byte size
 */

int oct_spec(va_list args)
{
	int bytes;
	unsigned int i = va_arg(args, unsigned int);

	bytes = 0;

	bytes += _printoct(i, "01234567");

	return (bytes);
}

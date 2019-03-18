#include "holberton.h"

/**
* _printhex - a function that prints translated hex to decimal
* @i: integer
* @hex: pointer hex string
*
* Return: byte size
*/

static int _printhex(unsigned int i, char const *hex)
{
	int bytes;
	char num;
	unsigned int len;

	bytes = 0;
	len = 0;

	while (hex && hex[len])
		len++;

	if (i >= len)
		bytes += _printhex(i / len, hex);

	num = hex[i % len];

	bytes += write(1, &num, 1);

	return (bytes);
}

/**
* hex_spec - a function that handles %x sepcifier
* @args: variable list of arguments
*
* Return: byte size
*/

int hex_spec(va_list args)
{
	int bytes;
	unsigned int i = va_arg(args, unsigned int);

	bytes = 0;

	bytes += _printhex(i, "0123456789abcdef");

	return (bytes);
}

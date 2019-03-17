#include "holberton.h"

/**
* _printint - a function that prints the integer from int_spec
* @i: integer
*
* Return: byte size
*/

static int _printint(signed int i)
{
	int bytes;
	char num;

	bytes = 0;

	if (i > 9 || i < -9)
		bytes += _printint(i / 10);
	else if (i < 0)
		bytes += write(1, "-", 1);

	if (i < 0)
		num = (-1 * (i % 10) + '0');
	else
		num = (1 % 10) + '0';

	bytes += write(1, &num, 1);

	return (bytes);
}

/**
* int_spec - a function that handles %d and %i conversion specifiers
* @args: variable list of arguments
*
* Return: byte size
*/

int int_spec(va_list args)
{
	int bytes;
	int i = va_arg(args, signed int);

	bytes = 0;

	bytes += _printint(i);

	return (bytes);
}

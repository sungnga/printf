#include "holberton.h"

/**
* _printint - a function that prints the integer from int_spec
* @i: integer
*
* Return: byte size
*/

static int _printbin(unsigned int i, char const *bin)
{
	int bytes;
	char num;
	unsigned int len;

	bytes = 0;
	len = 0;

	while (bin && bin[len])
		len++;

	if (i >= len)
		bytes += _printbin(i / len, bin);

	num = bin[i % len]; 

	bytes += write(1, &num, 1);

	return (bytes);
}

/**
* int_spec - a function that handles %d and %i conversion specifiers
* @args: variable list of arguments
*
* Return: byte size
*/

int bin_spec(va_list args)
{
	int bytes;
	unsigned int i = va_arg(args, unsigned int);

	bytes = 0;

	bytes += _printbin(i, "01");

	return (bytes);
}

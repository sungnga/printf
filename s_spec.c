#include "holberton.h"

/**
 * s_spec - handles percent s specifier
 * @args: variable argument pointer
 * Return: byte size in int type
 */
int s_spec(va_list args)
{
	int bytes;
	char *s = va_arg(args, char *);
	int len = 0;
	int i;

	bytes = 0;

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i]; i++)
		len++;

	bytes += write(1, s, len);

	return (bytes);
}

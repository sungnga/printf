#include "holberton.h"

int charspec(va_list args)
{
	int bytes;
	char c = va_arg(args, int);

	bytes = 0;

	bytes += write(1, &c, 1);

	return (bytes);
}

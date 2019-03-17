#include "holberton.h"

/**
* _printf - Jeremy and Nga's custom printf function
* @string: pointer to string in the 1st parameter of _printf
*
* Return: byte size
*/

int _printf(char const *string, ...)
{
	print_specs specifiers[] = {
	{'c', &c_spec},
	{'s', &s_spec},
	{'i', &int_spec},
	{'d', &int_spec},
	{'\0', NULL}
};
	int bytes, i, j;
	char p = '%';
	va_list args;

	bytes = 0;

	va_start(args, string);

	for (i = 0; string && string[i]; i++)
	{
		if (string[i] == '%')
		{
			if (string[i + 1] == '%')
				write(1, &p, 1);

			for (j = 0; specifiers[j].function; j++)
			{
				if (specifiers[j].c == string[i + 1])
				{
					bytes += specifiers[j].function(args);
				}
			}
			i++;
		}

		else
			bytes += write(1, string + i, 1);
	}

	va_end(args);

	return (bytes);
}

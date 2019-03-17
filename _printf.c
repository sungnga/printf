#include "holberton.h"

print_specs specifiers[] = {
	{'c', &charspec}
};

int _printf(char const *string, ...)
{
	int bytes, i, j;
	va_list args;

	bytes = 0;

	/* Declare va_list holding all of our arguments, and string b/c when variadic function is called will give the
	last parameter before the variadic arguments. */
	va_start(args, string);

	/* Iterates through the entire string */
	for (i = 0; string && string[i]; i++)
	{
		/* Looks for '&' */
		if (string[i] == '%')
		{
			for (j = 0; specifiers[j].function; j++)
			{
				if (specifiers[j].c == string[i + 1])
				{
					bytes += specifiers[j].function(args);
				}
			}
			i++;
		}
		
		/* For everything else that is not the '%c' */
		else
		{
			bytes += write(1, string + i, 1);
		}
	}

	va_end(args);

	return (bytes);
		
}

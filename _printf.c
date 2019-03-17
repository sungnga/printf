#include "holberton.h"

print_specs specifiers[] = {
	{'c', &c_spec},
	{'%', &per_spec}
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
			/* Iterates through struct until end */
			for (j = 0; specifiers[j].function; j++)
			{
				/* Checks if char matches struct */
				if (specifiers[j].c == string[i + 1])
				{
					/* Runs function pointer in struct */
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

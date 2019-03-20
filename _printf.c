#include "holberton.h"
int _putchar(char c);

/**
* _printf - Jeremy and Nga's custom printf function
* @string: pointer to string in the 1st parameter of _printf
*
* Return: byte size
*/
int _printf(char const *string, ...)
{
	print_specs specifiers[] = {
	{'c', &c_spec},	{'s', &s_spec}, {'i', &int_spec}, {'d', &int_spec},
	{'b', &bin_spec}, {'u', &uint_spec}, {'x', &hex_spec},
	{'X', &uhex_spec}, {'o', &oct_spec}, {'\0', NULL}
	};

	int bytes = 0, i, j;
	char p = '%';
	va_list args;

	va_start(args, string);
	if (!string || (string[0] == '%' && !string[1]))
		return (-1);
	for (i = 0; string && string[i]; i++)
	{
		if (string[i] == '%')
		{
			if (string[i + 1] == '%')
			{
				bytes += write(1, &p, 1);
				i++;
				continue;
			}
			for (j = 0; j <= 10; j++)
			{
				if (specifiers[j].c == string[i + 1])
				{
					bytes += specifiers[j].function(args);
					break;
				}
				else if (!specifiers[j].c)
				{
					bytes += _putchar('%');
					bytes += _putchar(string[i + 1]);
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


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

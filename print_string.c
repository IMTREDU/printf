#include "main.h"

/**
 * print_string - Print a string
 * @val: argumen t
 * Return: the len of string
 */

int print_string(va_list val)
{
	char *s;
	int i;
	int len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = strlen(s);
		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
		return (len);
	}
	else
	{
		len = strlen(s);
		{
			for (i = 0; i < len; i++)
			{
				_putchar(s[i]);
			}
		}
		return (len);
	}
}

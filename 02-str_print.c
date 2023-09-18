#include "main.h"

/**
 * _print_string - format specifier to print string
 * @string: string to be printed
 *
 * Return: string
 */

char _print_string(const char *string)
{
	int lenth = 0;
	char *string = va_arg(para, char *);

	for (lenth = 0; string[lenth]; lenth++)
	{
		write(1, string, lenth);
		lenth++;
	}

	return (lenth);
}

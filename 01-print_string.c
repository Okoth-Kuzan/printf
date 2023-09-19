#include "main.h"

/**
 * _print_str - function to print strings
 * @para: arguments containing strings
 *
 * Return: no. of chars
 */

int _print_str(va_list para)
{
	int s = 0;
	char *string = va_arg(para, char *);

	while (*string != '\0')
	{
		write(1, string, 1);
		string++;
		s++;
	}

	return (s);
}

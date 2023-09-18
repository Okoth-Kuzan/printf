#include "main.h"

/**
 * _char_print - format specifier for printing
 * characters
 * @c: character to print
 *
 * Return: character
 */

int _char_print(va_list para)
{
	char c = va_arg(para, int);

	write(1, &c, 1);
	return (1);
}

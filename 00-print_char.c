#include "main.h"

/**
 * _print_char - function to print characters
 * @para: arguments passed
 *
 * Return: no. of chars
 */

int _print_char(va_list para)
{
	char c = va_arg(para, int);

	write(1, &c, 1);
	return (1);
}

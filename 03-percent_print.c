#include "main.h"

/**
 * _percent_print - format specifier for printing a
 * percent character
 *
 * Return: percent
 */

int _percent_print(va_list para)
{
	return write(1, "%", 1);
}
